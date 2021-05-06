#include <cstddef>

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

	void prevent_character_update()
	{
		/*
		***REMOVED***

		player->player_model = player_model;
		*/
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x1403B0BE0, patch);
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

	void prevent_combo_break()
	{
		/*
		***REMOVED***
		[...]
		***REMOVED***

		player->combo = 0;
		*/
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x1406C1948, patch);
	}

	void magic_instant_charge()
	{
		/*
		***REMOVED***
		***REMOVED***
		*/
		std::array<char, 10> patch = { '\x81', '\x43', '\x38', '\x00', '\x00', '\x20', '\x41', '\x90', '\x90', '\x90' };
		memory.write_memory(0x140565B54, patch);
	}

	void magic_rapid_fire()
	{
		/*
		***REMOVED***
		***REMOVED***
		***REMOVED***
		***REMOVED***

		if (cooldown > 0.0)
		*/
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.write_memory(0x1405663BE, patch);
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		if (auto p = memory.read_memory<char, sizeof(Player)>(player_address))
		{
			Player* player = reinterpret_cast<Player*>(p->data());

			std::cout << "Welcome " << player->name << std::endl;

			player->character = Character::Nier_Prologue;

			player->money = std::numeric_limits<int>::max();
			player->xp = std::numeric_limits<int>::max();
			player->health = 691337;
			player->magic = 420.f;

			for (size_t i = offsetof(Player, recovery); i < offsetof(Player, unk7); ++i) {
				p->at(i) = 10;
			}

			for (size_t i = offsetof(Player, cultivation); i < constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); ++i) {
				p->at(i) = 99;
			}

			for (size_t i = constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); i < offsetof(Player, unk8); ++i) {
				p->at(i) = 10;
			}

			for (size_t i = offsetof(Player, fishing); i < offsetof(Player, unk9); ++i) {
				p->at(i) = 99;
			}

			for (size_t i = offsetof(Player, raw_materials); i < offsetof(Player, key_items); ++i) {
				p->at(i) = 99;
			}

			for (size_t i = offsetof(Player, key_items); i < offsetof(Player, unk10); ++i) {
				p->at(i) = 1;
			}

			for (size_t i = offsetof(Player, documents); i < offsetof(Player, unk11); ++i) {
				p->at(i) = true;
			}

			for (size_t i = offsetof(Player, maps); i < offsetof(Player, unk12); ++i) {
				p->at(i) = 1;
			}

			for (size_t i = offsetof(Player, weapons); i < offsetof(Player, unk13); ++i) {
				p->at(i) = static_cast<char>(Weapon_Level::Level_4);
			}

			for (size_t i = offsetof(Player, quests_5c0); i < offsetof(Player, unk14); ++i) {
				p->at(i) = 0xFF;
			}

			player->words_uloth = static_cast<Words_Uloth>(0xFFFFFFFFFFFFFFFull);
			player->words_zarken = static_cast<Words_Zarken>(0x1FFFFFFFFFFFFFFFull);

			player->tutorials_7f0 = static_cast<Tutorials_7F0>(0xFFFFFF3E35DFFFFFull);
			player->tutorials_7f8 = static_cast<Tutorials_7F8>(0x9EFF7ull);

			player->quests_c4c = static_cast<Quests_C4C>(static_cast<unsigned int>(Quests_C4C::The_Promised_Gift) | static_cast<unsigned int>(Quests_C4C::The_Promised_Gift_Completed));

			memory.write_memory(player_address, *p);

			fishing_skip_wait_time();
			fishing_skip_battle();
			prevent_character_update();
			money_infinite();
			health_infinite();
			magic_infinite();
			prevent_combo_break();
			magic_instant_charge();
			magic_rapid_fire();
		}
		else
		{
			std::cerr << "Could not get player" << std::endl;
			exit(-1);
		}
	}
};