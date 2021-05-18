#include "pch.h"

#include "Player.h"

FILE* file = NULL;
uintptr_t Player_Address = 0x144372790;
uintptr_t Item_Handler_Address = 0x145CF7580;

/* Trampoline Stuff
typedef char (__fastcall Item_Handler)(unsigned long long, int, char);
Item_Handler* handle_item_original = NULL;

MH_CreateHook(reinterpret_cast<LPVOID>(Item_Handler_Address), &handle_item, reinterpret_cast<void**>(&handle_item_original));
*/

char handle_item(uintptr_t local_player, int item, char amount)
{
    if (*reinterpret_cast<int*>(local_player + 3632) == 1)
    {
        if (static_cast<unsigned int>(item) <= 0x2FF)
        {
            std::cout << "Reducing " << item << " by " << static_cast<int>(amount) << std::endl;
            *reinterpret_cast<char*>(item + local_player + 3652) += amount;
            return *reinterpret_cast<char*>(item + local_player + 3652);
        }
    }
    else if (static_cast<unsigned int>(item) <= 0x2FF)
    {
        std::cout << "Increasing " << item << " by " << static_cast<int>(amount) << std::endl;
        *reinterpret_cast<char*>(item + local_player + 192) += amount;
        return *reinterpret_cast<char*>(item + local_player + 192);
    }
    return 0;
}

void set_hook()
{
    Player* player = reinterpret_cast<Player*>(Player_Address);
    std::cout << "Hello " << player->name << "\nHow's " << player->map << "?" << std::endl;
    if (MH_Initialize() == MB_OK)
    {
        MH_CreateHook(reinterpret_cast<LPVOID>(Item_Handler_Address), &handle_item, NULL);
        MH_EnableHook(reinterpret_cast<LPVOID>(Item_Handler_Address));
        std::cout << "Set hooks" << std::endl;
    }
}

void un_hook()
{
    if (MH_DisableHook(reinterpret_cast<LPVOID>(Item_Handler_Address)) == MB_OK)
    {
        MH_Uninitialize();
        std::cout << "Removed hooks" << std::endl;
    }
}

void create_console()
{
    if (!AllocConsole()) {
        return;
    }

    freopen_s(&file, "CONOUT$", "w", stdout);
    freopen_s(&file, "CONOUT$", "w", stderr);
    freopen_s(&file, "CONIN$", "r", stdin);
    std::cout.clear();
    std::clog.clear();
    std::cerr.clear();
    std::cin.clear();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        create_console();
        set_hook();
        break;
    case DLL_PROCESS_DETACH:
        un_hook();
        fclose(file);
        break;
    }

    return TRUE;
}

