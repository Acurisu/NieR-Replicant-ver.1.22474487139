#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <TlHelp32.h>

export module Memory;

import std.core;

export class Memory
{
private:
	uintptr_t process_id;
	std::wstring process_name;

	bool get_process_id()
	{
		PROCESSENTRY32W process_entry;
		process_entry.dwSize = sizeof(process_entry);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

		if (snapshot == INVALID_HANDLE_VALUE)
			return false;

		if (Process32FirstW(snapshot, &process_entry))
		{
			do
			{
				std::wstring process_name_cmp = process_entry.szExeFile;
				if (process_name_cmp.find(process_name) != std::wstring::npos)
				{
					process_id = process_entry.th32ProcessID;
					break;
				}
			} while (Process32NextW(snapshot, &process_entry));
		}

		CloseHandle(snapshot);

		if (process_id)
			return true;

		return false;
	}

	bool open_process()
	{
		handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, static_cast<DWORD>(process_id));

		if (handle)
			return true;

		return false;
	}

public:
	HANDLE handle;

	Memory(std::wstring process_name) : process_name(process_name)
	{
		if (!get_process_id())
			exit(-1);

		if (!open_process())
			exit(-1);
	}

	std::optional<std::pair<uintptr_t, size_t>> get_module(std::wstring module_name)
	{
		MODULEENTRY32W module_entry;
		module_entry.dwSize = sizeof(module_entry);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, process_id);

		if (snapshot == INVALID_HANDLE_VALUE)
			return std::nullopt;

		if (Module32FirstW(snapshot, &module_entry))
		{
			do
			{
				std::wstring module_name_cmp = module_entry.szModule;
				if (module_name_cmp.find(module_name) != std::wstring::npos)
				{
					if (module_entry.modBaseAddr && module_entry.modBaseSize)
					{
						CloseHandle(snapshot);
						return std::make_pair(reinterpret_cast<uintptr_t>(module_entry.modBaseAddr), static_cast<size_t>(module_entry.modBaseSize));
					}
					break;
				}
			} while (Module32NextW(snapshot, &module_entry));
		}

		CloseHandle(snapshot);
		return std::nullopt;
	}

	template<typename T, size_t N>
	std::optional<std::array<T, N>> read_memory(uintptr_t address)
	{
		std::array<T, N> buffer;
		SIZE_T bytes_read;

		if (ReadProcessMemory(handle, reinterpret_cast<LPVOID>(address), buffer.data(), N, &bytes_read) && bytes_read)
			return buffer;

		return std::nullopt;
	}

	template<typename T, size_t N>
	bool write_memory(uintptr_t address, std::array<T, N> buffer)
	{
		SIZE_T bytes_written;
		if (WriteProcessMemory(handle, reinterpret_cast<LPVOID>(address), buffer.data(), N, &bytes_written) && bytes_written)
			return true;

		return false;
	}
};