export module Nier;

import std.core;

import Memory;

export class Nier
{
private:
	Memory memory;
	uintptr_t player = 0x144372790;

	void fishingSkipWaitTime()
	{
		/*
		***REMOVED***

		player->fishingState = 1;
		*/
		std::array<char, 1> patch = { '\x03' };
		memory.writeMemory(0x1403A645C, patch);
	}

	void fishingSkipBattle()
	{
		/*
		***REMOVED***
		***REMOVED***
		***REMOVED***
		***REMOVED***

		if ( result )
		{
			player->fishingSuccess = 1;
		}
		*/
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.writeMemory(0x1403A5731, patch);
	}

	void moneyInfinite()
	{
		/*
		***REMOVED***

		player->money = money;
		*/
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.writeMemory(0x1403BB34F, patch);

		std::array<char, 4> money = { '\xFF', '\xFF', '\xFF', '\x7F' };
		memory.writeMemory(player + 0xBC, money);
	}

	void xpMax()
	{
		/*
		.data2:0000000145CF8795                 add     [rcx+rax*4+70h], r8d

		player->xp += xp;
		*/
		std::array<char, 4> xp = { '\xFF', '\xFF', '\xFF', '\x7F' };
		memory.writeMemory(player + 0x70, xp);
	}

	void healthInfinite()
	{
		/*
		***REMOVED***

		player->hp = hp;
		*/
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.writeMemory(0x145D106DD, patch);

		std::array<char, 4> health = { '\x89', '\x8C', '\x0A', '\x00' };
		memory.writeMemory(player + 0x4C, health);
	}


	void magicInfinite()
	{
		/*
		***REMOVED***

		player->magic = magic;
		*/
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.writeMemory(0x1403BDB5E, patch);

		std::array<char, 4> magic = { '\x00', '\x00', '\xD2', '\x43' };
		memory.writeMemory(player + 0x58, magic);
	}

	std::string getName()
	{
		if (auto name = memory.readMemory<char, 10>(player + 0x2C))
			return std::string(name->data(), 10);

		return "";
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		std::cout << "Welcome " << getName() << "\n";
		std::cout << "Patching..." << "\n";

		fishingSkipWaitTime();
		fishingSkipBattle();

		moneyInfinite();
		xpMax();

		healthInfinite();
		magicInfinite();

		std::cout << "Done." << std::endl;
	}
};