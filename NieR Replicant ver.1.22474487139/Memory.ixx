#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <TlHelp32.h>

export module Memory;

import std.core;

export class Memory
{
private:
	uintptr_t processID;
	std::wstring processName;

	bool getProcessID()
	{
		PROCESSENTRY32W processEntry;
		processEntry.dwSize = sizeof(processEntry);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

		if (snapshot == INVALID_HANDLE_VALUE)
			return false;

		if (Process32FirstW(snapshot, &processEntry))
		{
			do
			{
				std::wstring processNameCmp = processEntry.szExeFile;
				if (processNameCmp.find(processName) != std::wstring::npos)
				{
					processID = processEntry.th32ProcessID;
					break;
				}
			} while (Process32NextW(snapshot, &processEntry));
		}

		CloseHandle(snapshot);

		if (processID)
			return true;

		return false;
	}

	bool openProcess() {
		handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, static_cast<DWORD>(processID));

		if (handle)
			return true;

		return false;
	}

public:
	HANDLE handle;

	Memory(std::wstring processName) : processName(processName)
	{
		if (!getProcessID())
			exit(-1);

		if (!openProcess())
			exit(-1);
	}

	template<typename T, size_t N>
	std::optional<std::array<T, N>> readMemory(uintptr_t address)
	{
		std::array<T, N> buffer;
		SIZE_T bytesRead;

		if (ReadProcessMemory(handle, reinterpret_cast<LPVOID>(address), buffer.data(), N, &bytesRead))
			return buffer;

		return std::nullopt;
	}

	template<typename T, size_t N>
	bool writeMemory(uintptr_t address, std::array<T, N> buffer)
	{
		SIZE_T bytesWritten;
		if (WriteProcessMemory(handle, reinterpret_cast<LPVOID>(address), buffer.data(), N, &bytesWritten) && bytesWritten)
			return true;

		return false;
	}
};