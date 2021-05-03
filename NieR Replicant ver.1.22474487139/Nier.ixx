export module Nier;

import std.core;

import Memory;
import Player;

export class Nier
{
private:
	Memory memory;
	uintptr_t player_address = 0x144372790;

	void fishing_skip_wait_time()
	{
		/*
		***REMOVED***

		player->fishingState = 1;
		*/
		std::array<char, 1> patch = { '\x03' };
		memory.write_memory(0x1403A645C, patch);
	}

	void fishing_skip_battle()
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
		memory.write_memory(0x1403A5731, patch);
	}

	void money_infinite()
	{
		/*
		***REMOVED***

		player->money = money;
		*/
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x1403BB34F, patch);
	}

	void health_infinite()
	{
		/*
		***REMOVED***

		player->hp = hp;
		*/
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x145D106DD, patch);
	}

	void magic_infinite()
	{
		/*
		***REMOVED***

		player->magic = magic;
		*/
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x1403BDB5E, patch);
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		if (auto p = memory.read_memory<char, sizeof(Player)>(player_address))
		{
			Player* player = reinterpret_cast<Player*>(p->data());

			std::cout << "Welcome " << player->name << std::endl;

			player->money = std::numeric_limits<int>::max();
			player->xp = std::numeric_limits<int>::max();
			player->health = 691337;
			player->magic = 420.f;

			memory.write_memory(player_address, *p);

			fishing_skip_wait_time();
			fishing_skip_battle();
			money_infinite();
			health_infinite();
			magic_infinite();
		}
		else
		{
			std::cout << "Could not get player" << std::endl;
			exit(-1);
		}
	}
};