module;

#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
#include "TlHelp32.h"

export module Memory;

import std;

export class Memory
{
private:
	std::wstring process_name;
	DWORD process_id = 0;
	uintptr_t module_base = 0;
	HANDLE handle = nullptr;

	static constexpr DWORD process_access =
		PROCESS_QUERY_INFORMATION |
		PROCESS_VM_OPERATION |
		PROCESS_VM_READ |
		PROCESS_VM_WRITE;

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

	bool get_module_base()
	{
		MODULEENTRY32W module_entry;
		module_entry.dwSize = sizeof(module_entry);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, static_cast<DWORD>(process_id));

		if (snapshot == INVALID_HANDLE_VALUE)
			return false;

		if (Module32FirstW(snapshot, &module_entry))
		{
			do
			{
				std::wstring module_name_cmp = module_entry.szModule;
				if (module_name_cmp.find(process_name) != std::wstring::npos)
				{
					module_base = reinterpret_cast<uintptr_t>(module_entry.modBaseAddr);
					break;
				}
			} while (Module32NextW(snapshot, &module_entry));
		}

		CloseHandle(snapshot);

		if (module_base)
			return true;

		return false;
	}

	bool open_process()
	{
		handle = OpenProcess(process_access, FALSE, process_id);

		if (handle)
			return true;

		return false;
	}

public:
	Memory(std::wstring process_name) : process_name(process_name)
	{
		if (!get_process_id())
			std::exit(-1);

		if (!get_module_base())
			std::exit(-1);

		if (!open_process())
			std::exit(-1);
	}

	Memory(const Memory&) = delete;
	Memory& operator=(const Memory&) = delete;

	~Memory()
	{
		if (handle)
			CloseHandle(handle);
	}

	std::optional<std::pair<uintptr_t, size_t>> get_module(std::wstring module_name)
	{
		MODULEENTRY32W module_entry;
		module_entry.dwSize = sizeof(module_entry);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, static_cast<DWORD>(process_id));

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

	template<typename T>
	std::optional<T> read_memory(uintptr_t address)
	{
		return read_memory_absolute<T>(module_base + address);
	}

	template<typename T>
	std::optional<T> read_memory_absolute(uintptr_t address)
	{
		static_assert(std::is_trivially_copyable_v<T>);

		std::array<unsigned char, sizeof(T)> buffer;
		SIZE_T bytes_read = 0;

		if (ReadProcessMemory(handle, reinterpret_cast<LPCVOID>(address), buffer.data(), sizeof(T), &bytes_read) && bytes_read == sizeof(T))
			return *reinterpret_cast<T*>(buffer.data());

		return std::nullopt;
	}

	template<typename T>
	bool write_memory(uintptr_t address, const T& buffer)
	{
		return write_memory_absolute(module_base + address, buffer);
	}

	template<typename T>
	bool write_memory_absolute(uintptr_t address, const T& buffer)
	{
		static_assert(std::is_trivially_copyable_v<T>);
		return write_memory_absolute(address, &buffer, sizeof(T));
	}

private:
	bool write_memory_absolute(uintptr_t address, const void* buffer, size_t size)
	{
		auto target = reinterpret_cast<LPVOID>(address);
		DWORD old_protect = 0;
		SIZE_T bytes_written = 0;

		if (!VirtualProtectEx(handle, target, size, PAGE_EXECUTE_READWRITE, &old_protect))
			return false;

		bool success =
			WriteProcessMemory(handle, target, buffer, size, &bytes_written) &&
			bytes_written == size;

		FlushInstructionCache(handle, target, size);

		DWORD ignored = 0;
		VirtualProtectEx(handle, target, size, old_protect, &ignored);
		return success;
	}
};
