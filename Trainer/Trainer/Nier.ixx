export module Nier;

import std;
import <cstddef>;

import Memory;
import Player;

export class Nier
{
private:
	Memory memory;
	uintptr_t player_address = 0x4374A20;

	void fishing_skip_wait_time()
	{
		std::array<char, 1> patch = { '\x03' };
		memory.write_memory(0x3A6B5C, patch); // F3 0F 10 35 ? ? ? ? C7 87 + 0xE
	}

	void fishing_skip_battle()
	{
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.write_memory(0x3A5E31, patch); // 48 8B CF E8 ? ? ? ? 84 C0 74 06 + 0xA
	}

	void prevent_character_update()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x3B12E0, patch); // *(E9 ? ? ? ? 33 D2 48 8D 0D ? ? ? ? 48 83 C4 28 E9 ? ? ? ? BA + 0x1), 0x0
	}

	void money_infinite()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x3BBA9F, patch); // *(E8 ? ? ? ? 8B 4C 24 58 8B D5 + 0x1), 0x1F
	}

	void health_infinite()
	{
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x3BE25D, patch);
	}

	void magic_infinite()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x3BE2BE, patch); // F3 0F 11 54 81
	}

	void prevent_combo_break()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(0x6C2E38, patch); // B2 01 89 9F ? ? ? ? 48 8D 0D + 0x2
	}

	void magic_instant_charge()
	{
		std::array<char, 10> patch = { '\x81', '\x43', '\x38', '\x00', '\x00', '\x20', '\x41', '\x90', '\x90', '\x90' };
		memory.write_memory(0x567044, patch); // *(E8 ? ? ? ? 83 7B 24 00 + 0x1), 0xF4
	}

	void magic_rapid_fire()
	{
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.write_memory(0x5678AE, patch); // 72 18 33 D2
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		if (auto player = memory.read_memory<Player>(player_address))
		{
			std::cout << "Welcome " << player->name << "\n";

			auto time = static_cast<int>(player->total_play_time);
			int s = time % 60;
			time /= 60;
			int m = time % 60;
			time /= 60;
			int h = time;
			std::cout << "Total Time Played: " << h << "h " << m << "m " << s << "s" << "\n";

			std::cout << "Current level: " << (player->level + 1) << "\n";

			player->character = Character::Nier_Prologue;

			player->money = std::numeric_limits<int>::max();
			player->xp = std::numeric_limits<int>::max();
			player->health = 691337;
			player->magic = 420.f;

			// Please never do this, I'm just too lazy to actually write down all classes
			auto p = reinterpret_cast<unsigned char*>(const_cast<Player*>(std::to_address(player)));
			for (size_t i = offsetof(Player, recovery); i < offsetof(Player, unk7); ++i) {
				p[i] = 10;
			}

			for (size_t i = offsetof(Player, cultivation); i < constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); ++i) {
				p[i] = 99;
			}

			for (size_t i = constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); i < offsetof(Player, unk8); ++i) {
				p[i] = 10;
			}

			for (size_t i = offsetof(Player, fishing); i < offsetof(Player, unk9); ++i) {
				p[i] = 99;
			}

			for (size_t i = offsetof(Player, raw_materials); i < offsetof(Player, key_items); ++i) {
				p[i] = 99;
			}

			for (size_t i = offsetof(Player, key_items); i < offsetof(Player, unk10); ++i) {
				p[i] = 1;
			}

			for (size_t i = offsetof(Player, documents); i < offsetof(Player, unk11); ++i) {
				p[i] = true;
			}

			for (size_t i = offsetof(Player, maps); i < offsetof(Player, unk12); ++i) {
				p[i] = 1;
			}

			for (size_t i = offsetof(Player, weapons); i < offsetof(Player, unk14); ++i) {
				p[i] = static_cast<unsigned char>(Weapon_Level::Level_4);
			}

			for (size_t i = offsetof(Player, quests_5c0); i < offsetof(Player, unk15); ++i) {
				p[i] = 0xFF;
			}

			player->words_uloth = static_cast<Words_Uloth>(0xFFFFFFFFFFFFFFFull);
			player->words_zarken = static_cast<Words_Zarken>(0x1FFFFFFFFFFFFFFFull);

			player->tutorials_7f0 = static_cast<Tutorials_7F0>(0xFFFFFF3E35DFFFFFull);
			player->tutorials_7f8 = static_cast<Tutorials_7F8>(0x9EFF7ull);

			player->quests_c4c = static_cast<Quests_C4C>(static_cast<unsigned int>(Quests_C4C::The_Promised_Gift) | static_cast<unsigned int>(Quests_C4C::The_Promised_Gift_Completed));

			memory.write_memory(player_address, player);

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
			std::cerr << "Could not get player" << "\n";
			std::exit(-1);
		}
	}
};