export module Nier;

import std;
import <cstddef>;

import Memory;
import Player;

export class Nier
{
private:
	struct OverlayEntry
	{
		std::uint64_t hash;
		uintptr_t unk;
		std::uint64_t handle;
	};

	static_assert(sizeof(OverlayEntry) == 0x18);

	template<std::size_t N>
	static consteval std::uint32_t widget_name_hash(const char (&name)[N])
	{
		std::uint32_t hash = 0x811C9DC5;

		for (std::size_t i = 0; i + 1 < N; ++i)
		{
			hash *= 0x01000193;
			hash ^= static_cast<unsigned char>(name[i]);
		}

		return hash;
	}

	Memory memory;
	static constexpr uintptr_t player_address = 0x4374A20; // Player blob.
	static constexpr uintptr_t screen_overlay_state = 0x277E230; // Global overlay state. Follow the xref chain that reads [state+0x558] / [state+0x568].
	static constexpr uintptr_t screen_overlay_root_holder = screen_overlay_state + 0x558;
	static constexpr uintptr_t screen_overlay_root_valid = screen_overlay_state + 0x568;
	static constexpr uintptr_t screen_overlay_entries_begin = 0x50;
	static constexpr uintptr_t screen_overlay_entries_end = 0x60;
	static constexpr uintptr_t widget_registry = 0xEE49C0; // qword_140EE49C0 widget registry base used by the black-belt togglers.
	static constexpr uintptr_t widget_registry_slot_size = 0x10;
	static constexpr uintptr_t widget_registry_generation_offset = 0x8;
	static constexpr uintptr_t widget_visibility_offset = 0xD4;
	static constexpr unsigned char widget_visible_bit = 0x01;
	static constexpr uintptr_t init_skip_black_overlay_widgets_offset = 0x450B50; // 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 8B 41
	static constexpr uintptr_t set_black_belt_pair_visible_offset = 0x451B40; // xref: E8 ? ? ? ? 48 8D 8F ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 83 BF
	static constexpr uintptr_t set_all_black_belts_visible_mode_offset = 0x451F00; // 0C ? EB ? 24 ? 88 81 ? ? ? ? 48 8D 05 ? ? ? ? C7 44 24 ? ? ? ? ? 45 33 C9 48 89 44 24 ? 4C 8D 44 24 ? 48 8B CF 48 8D 54 24 ? E8 ? ? ? ? 66 39 68 ? 74 ? ? ? 0F B7 C8 48 03 C9 C1 E8 ? 39 44 CE ? 75 ? ? ? ? ? 48 85 C9 74 ? 0F B6 81 ? ? ? ? 84 DB 75 - 0x77
	static constexpr uintptr_t fishing_skip_wait_time_offset = 0x3A6B5C; // F3 0F 10 35 ? ? ? ? C7 87 B4 00 00 00 01 00 00 00
	static constexpr uintptr_t fishing_skip_battle_offset = 0x3A5E31; // 48 8B CF E8 ? ? ? ? 84 C0 74 06 C6 43 52 01
	static constexpr uintptr_t prevent_character_update_offset = 0x3B12E0; // 89 15 ? ? ? ? C3 CC CC CC CC CC CC CC CC CC
	static constexpr uintptr_t money_infinite_offset = 0x3BBA9F; // 89 81 BC 00 00 00 3D 40 42 0F 00 7C 31 E8 ? ? ? ?
	static constexpr uintptr_t health_infinite_offset = 0x3BE25D; // 48 63 C2 44 89 44 81 4C C3
	static constexpr uintptr_t magic_infinite_offset = 0x3BE2BE; // 48 63 C2 F3 0F 11 54 81 58 C3
	static constexpr uintptr_t prevent_combo_break_offset = 0x6C2E38; // B2 01 89 9F 38 B9 06 00 48 8D 0D ? ? ? ? E8 ? ? ? ?
	static constexpr uintptr_t magic_instant_charge_offset = 0x567044; // F3 0F 58 45 00 F3 0F 11 43 38 48 8B 13 48 8B CB FF 52 60
	static constexpr uintptr_t magic_rapid_fire_offset = 0x5678AE; // 0F 57 C0 0F 2F C1 72 18 33 D2 48 8B CB E8 ? ? ? ?
	static constexpr std::array<std::uint32_t, 4> black_belt_hashes = {
		widget_name_hash("UPPER_BLACK_BELT"),
		widget_name_hash("UNDER_BLACK_BELT"),
		widget_name_hash("UPPER_BLACK_BELT_TWO"),
		widget_name_hash("UNDER_BLACK_BELT_TWO"),
	};

	static constexpr std::array<uintptr_t, 6> black_belt_show_sites = {
		set_black_belt_pair_visible_offset + 0x77,
		set_black_belt_pair_visible_offset + 0xD7,
		set_all_black_belts_visible_mode_offset + 0x77,
		set_all_black_belts_visible_mode_offset + 0xD7,
		set_all_black_belts_visible_mode_offset + 0x137,
		set_all_black_belts_visible_mode_offset + 0x197,
	};

	void fishing_skip_wait_time()
	{
		std::array<char, 1> patch = { '\x03' };
		memory.write_memory(fishing_skip_wait_time_offset, patch);
	}

	void fishing_skip_battle()
	{
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.write_memory(fishing_skip_battle_offset, patch);
	}

	void prevent_character_update()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(prevent_character_update_offset, patch);
	}

	void money_infinite()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(money_infinite_offset, patch);
	}

	void health_infinite()
	{
		std::array<char, 5> patch = { '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(health_infinite_offset, patch);
	}

	void magic_infinite()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(magic_infinite_offset, patch);
	}

	void prevent_combo_break()
	{
		std::array<char, 6> patch = { '\x90', '\x90', '\x90', '\x90', '\x90', '\x90' };
		memory.write_memory(prevent_combo_break_offset, patch);
	}

	void magic_instant_charge()
	{
		std::array<char, 10> patch = { '\x81', '\x43', '\x38', '\x00', '\x00', '\x20', '\x41', '\x90', '\x90', '\x90' };
		memory.write_memory(magic_instant_charge_offset, patch);
	}

	void magic_rapid_fire()
	{
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.write_memory(magic_rapid_fire_offset, patch);
	}

	bool patch_cinematic_bars()
	{
		// The real letterbox overlay is controlled by the dedicated black-belt
		// widget handlers, which set bit 0 at [widget+0xD4] to show the belts.
		// Replacing `or al, 1` with `and al, 0xFE` forces those paths to hide.
		std::array<char, 2> hide_patch = { '\x24', '\xFE' };

		bool success = true;
		for (auto addr : black_belt_show_sites)
			success &= memory.write_memory(addr, hide_patch);

		return success;
	}

	bool is_black_belt_hash(std::uint32_t hash) const
	{
		for (auto black_belt_hash : black_belt_hashes)
		{
			if (black_belt_hash == hash)
				return true;
		}

		return false;
	}

	std::optional<uintptr_t> resolve_overlay_root()
	{
		auto root_valid = memory.read_memory<uintptr_t>(screen_overlay_root_valid);
		auto holder_ptr = memory.read_memory<uintptr_t>(screen_overlay_root_holder);

		if (!root_valid || !*root_valid || !holder_ptr || !*holder_ptr)
			return std::nullopt;

		return memory.read_memory_absolute<uintptr_t>(*holder_ptr);
	}

	std::optional<uintptr_t> resolve_widget(std::uint32_t handle)
	{
		auto index = static_cast<uintptr_t>(handle & 0xFFFF);
		auto generation = handle >> 16;
		auto slot = widget_registry + index * widget_registry_slot_size;
		auto widget = memory.read_memory<uintptr_t>(slot);
		auto slot_generation = memory.read_memory<std::uint32_t>(slot + widget_registry_generation_offset);

		if (!widget || !*widget || !slot_generation || *slot_generation != generation)
			return std::nullopt;

		return *widget;
	}

	bool hide_widget(uintptr_t widget)
	{
		auto visible_flags = memory.read_memory_absolute<unsigned char>(widget + widget_visibility_offset);
		if (!visible_flags)
			return false;

		auto hidden_flags = static_cast<unsigned char>(*visible_flags & ~widget_visible_bit);
		if (hidden_flags == *visible_flags)
			return true;

		return memory.write_memory_absolute(widget + widget_visibility_offset, hidden_flags);
	}

	bool hide_active_cinematic_bars()
	{
		auto root = resolve_overlay_root();
		if (!root || !*root)
			return false;

		auto begin = memory.read_memory_absolute<uintptr_t>(*root + screen_overlay_entries_begin);
		auto end = memory.read_memory_absolute<uintptr_t>(*root + screen_overlay_entries_end);
		if (!begin || !end || *begin >= *end)
			return false;

		bool found_black_belt = false;
		bool success = true;

		for (auto cursor = *begin; cursor < *end; cursor += sizeof(OverlayEntry))
		{
			auto entry = memory.read_memory_absolute<OverlayEntry>(cursor);
			if (!entry)
			{
				success = false;
				continue;
			}

			auto hash = static_cast<std::uint32_t>(entry->hash);
			if (!is_black_belt_hash(hash))
				continue;

			auto widget = resolve_widget(static_cast<std::uint32_t>(entry->handle));
			if (!widget)
			{
				success = false;
				continue;
			}

			found_black_belt = true;
			success &= hide_widget(*widget);
		}

		return found_black_belt && success;
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		std::cout << "Disabling cinematic black bars..." << "\n";
		if (!patch_cinematic_bars())
			std::cerr << "Could not patch cinematic black bars" << "\n";

		if (hide_active_cinematic_bars())
			std::cout << "Hiding active cinematic black bars..." << "\n";

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
			for (size_t i = offsetof(Player, recovery); i < offsetof(Player, unk7); ++i)
				p[i] = 10;

			for (size_t i = offsetof(Player, cultivation); i < constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); ++i)
				p[i] = 99;

			for (size_t i = constexpr(offsetof(Player, cultivation) + offsetof(Cultivation, red_moonflower)); i < offsetof(Player, unk8); ++i)
				p[i] = 10;

			for (size_t i = offsetof(Player, fishing); i < offsetof(Player, unk9); ++i)
				p[i] = 99;

			for (size_t i = offsetof(Player, raw_materials); i < offsetof(Player, key_items); ++i)
				p[i] = 99;

			for (size_t i = offsetof(Player, key_items); i < offsetof(Player, unk10); ++i)
				p[i] = 1;

			for (size_t i = offsetof(Player, documents); i < offsetof(Player, unk11); ++i)
				p[i] = true;

			for (size_t i = offsetof(Player, maps); i < offsetof(Player, unk12); ++i)
				p[i] = 1;

			for (size_t i = offsetof(Player, weapons); i < offsetof(Player, unk14); ++i)
				p[i] = static_cast<unsigned char>(Weapon_Level::Level_4);

			for (size_t i = offsetof(Player, quests_5c0); i < offsetof(Player, unk15); ++i)
				p[i] = 0xFF;

			player->words_uloth = static_cast<Words_Uloth>(0xFFFFFFFFFFFFFFFull);
			player->words_zarken = static_cast<Words_Zarken>(0x1FFFFFFFFFFFFFFFull);

			player->tutorials_7f0 = static_cast<Tutorials_7F0>(0xFFFFFF3E35DFFFFFull);
			player->tutorials_7f8 = static_cast<Tutorials_7F8>(0x9EFF7ull);

			player->quests_c4c = static_cast<Quests_C4C>(
				static_cast<unsigned int>(Quests_C4C::The_Promised_Gift) |
				static_cast<unsigned int>(Quests_C4C::The_Promised_Gift_Completed));

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

			std::cout << "Done. Enjoy =^w^=" << "\n";
		}
		else
		{
			std::cerr << "Could not get player" << "\n";
			std::exit(-1);
		}

		std::cout << std::endl;
	}
};
