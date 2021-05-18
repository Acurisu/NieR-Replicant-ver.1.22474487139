#pragma once

enum class Character : int
{
	Nier_Young = 0x0,
	Nier_Prologue = 0x1,
	Nier_Old = 0x2,
	Nier_Gestalt = 0x3,
	Kaine = 0x4,
};

enum class Order : int
{
	Attack_All = 0x0,
	Attack_Focus = 0x1,
	Defend_Only = 0x2,
};

enum class Weapon : int
{
	Nameless_Blade = 0x0,
	Phoenix_Dagger = 0x1,
	Beastbain = 0x2,
	Labyrinths_Whisper = 0x3,
	Fools_Embrace = 0x4,
	Ancient_Overlord = 0x5,
	Rebirth = 0x6,
	Earth_Wyrms_Claw = 0x7,
	Nirvana_Dagger = 0x8,
	Moonrise = 0x9,
	Blade_of_Treachery = 0xA,
	Lily_Leaf_Sword = 0xB,
	Faith = 0xC,
	Iron_Pipe = 0xD,
	Kaines_Sword = 0xE,
	Virtuous_Contract = 0xF,
	Cruel_Oath = 0x10,
	Kusanagi = 0x14,
	Phoenix_Sword = 0x15,
	Beastlord = 0x16,
	Labyrinths_Song = 0x17,
	Fools_Lament = 0x18,
	Fang_of_the_Twins = 0x19,
	Axe_of_Beheading = 0x1A,
	Vile_Axe = 0x1B,
	Iron_Will = 0x1C,
	Virtuous_Treaty = 0x1D,
	Transience = 0x28,
	Phoenix_Spear = 0x29,
	Beastcurse = 0x2A,
	Labyrinths_Shout = 0x2B,
	Fools_Accord = 0x2C,
	The_Devil_Queen = 0x2D,
	Sunrise = 0x2E,
	Spear_of_the_Usurper = 0x2F,
	Dragoon_Lance = 0x30,
	Captains_Holy_Spear = 0x31,
	Virtuous_Dignity = 0x32,
};

enum class Ability : int
{
	None = 0x0,
	Defend = 0x1,
	Evade = 0x2,
	Dark_Blast = 0x3,
	Dark_Phantasm = 0x4,
	Dark_Hand = 0x5,
	Dark_Lance = 0x6,
	Dark_Whirlwind = 0x7,
	Dark_Gluttony = 0x8,
	Dark_Wall = 0x9,
	Dark_Execution = 0xA,
};

struct Recovery
{
	char medicinal_herb;
	char health_salve;
	char recovery_potion;
	char unk[18];
	char strength_drop;
	char strength_capsule;
	char magic_drop;
	char magic_capsule;
	char defense_drop;
	char defense_capsule;
	char spirit_drop;
	char spirit_capsule;
	char unk1[2];
	char antidotal_weed;
	char unk2;
	char smelling_salts;
};

struct Cultivation
{
	char speed_fertilizer;
	char flowering_fertilizer;
	char bounty_fertilizer;
	char unk[2];
	char pumpkin_seed;
	char watermelon_seed;
	char melon_seed;
	char gourd_seed;
	char tomato_seed;
	char eggplant_seed;
	char bell_pepper_seed;
	char bean_seed;
	char wheat_seedling;
	char rice_plant_seedling;
	char dahlia_bulb;
	char tulip_bulb;
	char freesia_bulb;
	char red_moonflower_seed;
	char gold_moonflower_seed;
	char peach_moonflower_seed;
	char pink_moonflower_seed;
	char blue_moonflower_seed;
	char indigo_moonflower_seed;
	char white_moonflower_seed;
	char unk1[5];
	char pumpkin;
	char watermelon;
	char melon;
	char gourd;
	char tomato;
	char eggplant;
	char bell_pepper;
	char beans;
	char wheat;
	char rice;
	char dahlia;
	char tulip;
	char freesia;
	char red_moonflower;
	char gold_moonflower;
	char peach_moonflower;
	char pink_moonflower;
	char blue_moonflower;
	char indigo_moonflower;
	char white_moonflower;
};

struct Fishing
{
	char lugworm;
	char earthworm;
	char lure;
	char unk[7];
	char sardine;
	char carp;
	char blowfish;
	char bream;
	char shark;
	char blue_marlin;
	char dunkleosteus;
	char rainbow_trout;
	char black_bass;
	char giant_catfish;
	char royal_fish;
	char hyneria;
	char sandfish;
	char rhizodont;
	char shaman_fish;
};

struct Raw_Materials
{
	char aquatic_plant;
	char deadwood;
	char rusty_bucket;
	char empty_can;
	char unk[3];
	char gold_ore;
	char silver_ore;
	char copper_ore;
	char iron_ore;
	char crystal;
	char pyrite;
	char moldavite;
	char meteorite;
	char amber;
	char fluorite;
	char clay;
	char unk1[4];
	char berries;
	char royal_fern;
	char tree_branch;
	char log;
	char natural_rubber;
	char ivy;
	char lichen;
	char mushroom;
	char sap;
	char unk2[5];
	char mutton;
	char boar_meat;
	char wool;
	char boar_hide;
	char wolf_hide;
	char wolf_fang;
	char giant_spider_silk;
	char bat_fang;
	char bat_wing;
	char goat_meat;
	char goat_hide;
	char venison;
	char rainbow_spider_silk;
	char boar_liver;
	char scorpion_claw;
	char scorpion_tail;
	char dented_metal_board;
	char stripped_bolt;
	char broken_lens;
	char severed_cable;
	char broken_arm;
	char broken_antenna;
	char broken_motor;
	char broken_battery;
	char mysterious_switch;
	char large_gear;
	char titanium_alloy;
	char memory_alloy;
	char rusted_clump;
	char machine_oil;
	char unk3[4];
	char forlorn_necklace;
	char twisted_ring;
	char broken_earring;
	char pretty_choker;
	char metal_piercing;
	char subdued_bracelet;
	char technical_guide;
	char grubby_book;
	char thick_dictionary;
	char closed_book;
	char used_coloring_book;
	char old_schoolbook;
	char dirty_bag;
	char flashy_hat;
	char leather_gloves;
	char silk_handkerchief;
	char leather_boots;
	char complex_machine;
	char elaborate_machine;
	char simple_machine;
	char stopped_clock;
	char broken_wristwatch;
	char rusty_kitchen_knife;
	char broken_saw;
	char dented_metal_bat;
	char unk4;
	char shell;
	char gastropod;
	char bivalve;
	char seaweed;
	char empty_bottle;
	char driftwood;
	char pearl;
	char black_pearl;
	char crab;
	char starfish;
	char unk5[5];
	char sea_turtle_egg;
	char broken_pottery;
	char desert_rose;
	char giant_egg;
	char damascus_steel;
	char eagle_egg;
	char chicken_egg;
	char unk6;
	char mouse_tail;
	char lizard_tail;
	char unk7[3];
	char deer_antler;
};

struct Key_Items
{
	char moon_key;
	char star_key;
	char light_key;
	char darkness_key;
	char fine_flour;
	char coarse_flour;
	char perfume_bottle;
	char postmans_parcel;
	char lovers_letter;
	char water_filter;
	char royal_compass;
	char vapor_moss;
	char valley_spider_silk;
	char animal_guidebook;
	char ore_guidebook;
	char plant_guidebook;
	char red_book;
	char blue_book;
	char old_ladys_elixir;
	char old_ladys_elixir_plus;
	char parcel_for_the_aerie;
	char parcel_for_seafront;
	char cookbook;
	char parcel_for_facade;
	char maxs_herbs;
	char drifting_cargo;
	char drifting_cargo_2;
	char drifting_cargo_3;
	char drifting_cargo_4;
	char old_package;
	char mermaid_tear;
	char mandrake_leaf;
	char energizer;
	char toad_oil;
	char sleep_b_gone;
	char antidote;
	char gold_bracelet;
	char elite_kitchen_knife;
	char elevator_parts;
	char dirty_treasure_map;
	char restored_treasure_map;
	char jade_hair_ornament;
	char employee_list;
	char small_safe;
	char safe_key;
	char great_tree_root;
	char eye_of_power;
	char ribbon;
	char yonahs_ribbon;
	char bronze_key;
	char brass_key;
	char boar_tusk;
	char pressed_freesia;
	char potted_freesia;
	char freesia_delivery;
	char pile_of_junk;
	char old_gold_coin;
	char marked_map;
	char aa_keycard;
	char ka_keycard;
	char sa_keycard;
	char ta_keycard;
	char na_keycard;
	char ha_keycard;
	char ma_keycard;
	char ya_keycard;
	char ra_keycard;
	char wa_keycard;
	char cultivators_handbook;
	char red_bag;
	char lantern;
	char empty_lantern;
	char hold_key;
	char passageway_key;
	char goat_key;
	char lizard_key;
	char unlocking_procedure_memo;
	char red_jewel;
	char red_flowers;
	char apples;
};

struct Documents
{
	bool look_at_the_sky;
	bool dont_try_so_hard;
	bool my_birthday;
	bool love_letter_2_12_3340;
	bool love_letter_3_28_3340;
	bool love_letter_5_1_3340;
	bool letter_from_the_mayor;
	bool the_postmans_request;
	bool the_postmans_thanks;
	bool invitation_from_a_stranger;
	bool grand_re_opening_notice;
	bool wedding_invitation;
	bool letter_from_the_king;
	bool underground_research_record_1;
	bool underground_research_record_2;
	bool underground_research_record_3;
	bool underground_research_record_4;
	bool letter_to_the_chief;
	bool letter_to_two_brothers_weaponry;
	bool letter_to_popola;
	bool letter_to_a_faraway_lover;
	bool letter_from_emil;
	bool weapon_upgrade_notice;
	bool letter_from_the_chief_of_the_aerie;
};

struct Maps
{
	char world_map;
	char unk[2];
	char central_village_map;
	char lost_shrine_area_map;
	char lost_shrine_map;
	char the_aerie_map;
	char seafront_map;
	char desert_map;
	char facade_map;
	char barren_temple_map;
	char junk_heap_area_map;
	char junk_heap_map;
	char manor_map;
	char forest_of_myth_map;
	char underground_facility_map;
	char unk1;
	char shadowlords_castle_map;
	char unk2;
	char northern_plains_map;
	char southern_plains_map;
	char eastern_road_map;
	char beneath_the_forest_of_myth_map;
	char toyko_map;
};

enum class Weapon_Level : char
{
	Level_1 = 0x0,
	Level_2 = 0x1,
	Level_3 = 0x2,
	Level_4 = 0x3,
	Not_Owned = 0xFF,
};

struct Weapons
{
	Weapon_Level nameless_blade;
	Weapon_Level phoenix_dagger;
	Weapon_Level beastbain;
	Weapon_Level labyrinths_whisper;
	Weapon_Level fools_embrace;
	Weapon_Level ancient_overlord;
	Weapon_Level rebirth;
	Weapon_Level earth_wyrms_claw;
	Weapon_Level nirvana_dagger;
	Weapon_Level moonrise;
	Weapon_Level blade_of_treachery;
	Weapon_Level lily_leaf_sword;
	Weapon_Level faith;
	Weapon_Level iron_pipe;
	Weapon_Level kaines_sword;
	Weapon_Level virtuous_contract;
	Weapon_Level cruel_oath;
	char unk[3];
	Weapon_Level kusanagi;
	Weapon_Level phoenix_sword;
	Weapon_Level beastlord;
	Weapon_Level labyrinths_song;
	Weapon_Level fools_lament;
	Weapon_Level fang_of_the_twins;
	Weapon_Level axe_of_beheading;
	Weapon_Level vile_axe;
	Weapon_Level iron_will;
	Weapon_Level virtuous_treaty;
	char unk1[10];
	Weapon_Level transience;
	Weapon_Level phoenix_spear;
	Weapon_Level beastcurse;
	Weapon_Level labyrinths_shout;
	Weapon_Level fools_accord;
	Weapon_Level the_devil_queen;
	Weapon_Level sunrise;
	Weapon_Level spear_of_the_usurper;
	Weapon_Level dragoon_lance;
	Weapon_Level captains_holy_spear;
	Weapon_Level virtuous_dignity;
};

enum class Quests_5C0 : unsigned long long
{
	Herbal_Remedies = 1ull << 28,
	Herbal_Remedies_Completed = 1ull << 29,
	The_Gatekeepers_Errand = 1ull << 31,
	The_Gatekeepers_Errand_Completed = 1ull << 33,
	The_Lost_Eggs = 1ull << 35,
	The_Lost_Eggs_Completed = 1ull << 39,
	Old_Fashioned_Home_Cooking = 1ull << 41,
	Old_Fashioned_Home_Cooking_Completed = 1ull << 43,
	Shopping_List = 1ull << 45,
	Shopping_List_Completed = 1ull << 47,
	Book_Smarts = 1ull << 49,
	Book_Smarts_Completed = 1ull << 53,
	The_Tavern_Keepers_Grandmother = 1ull << 55,
	The_Tavern_Keepers_Grandmother_Completed = 1ull << 58,
	A_Return_to_Shopping = 1ull << 60,
	A_Return_to_Shopping_Completed = 1ull << 62,
};

enum class Quests_5C8 : unsigned long long
{
	Yonahs_Cooking = 1ull << 0,
	Yonahs_Cooking_Completed = 1ull << 1,
	Boar_Hunt = 1ull << 3,
	Boar_Hunt_Completed = 1ull << 6,
	On_the_Wings_of_Eagles = 1ull << 8,
	On_the_Wings_of_Eagles_Completed = 1ull << 12,
	Fragile_Delivery = 1ull << 14,
	Fragile_Delivery_Completed = 1ull << 18,
	Fragile_Delivery_2 = 1ull << 20,
	Fragile_Delivery_2_Completed = 1ull << 24,
	The_Fishermans_Gambit = 1ull << 26,
	The_Fishermans_Gambit_Completed = 1ull << 27,
	The_Fishermans_Gambit_Part_2 = 1ull << 29,
	The_Fishermans_Gambit_Part_2_Completed = 1ull << 30,
	The_Fishermans_Gambit_Part_3 = 1ull << 32,
	The_Fishermans_Gambit_Part_3_Completed = 1ull << 33,
	The_Fishermans_Gambit_Part_4 = 1ull << 35,
	The_Fishermans_Gambit_Part_4_Completed = 1ull << 36,
	The_Fishermans_Gambit_Part_5 = 1ull << 38,
	The_Fishermans_Gambit_Part_5_Completed = 1ull << 39,
	The_Ballad_of_the_Twins = 1ull << 41,
	The_Ballad_of_the_Twins_Completed = 1ull << 46,
	A_Dog_Astray = 1ull << 48,
	A_Dog_Astray_Completed = 1ull << 51,
	The_New_Merchant_in_Town = 1ull << 53,
	The_New_Merchant_in_Town_Completed = 1ull << 57,
};

enum class Quests_5D0 : unsigned long long
{
	Yonahs_Gift = 1ull << 4,
	Yonahs_Gift_Completed = 1ull << 11,
	Letter_to_a_Lover = 1ull << 13,
	Letter_to_a_Lover_Completed = 1ull << 16,
	A_Signature_Dish = 1ull << 18,
	A_Signature_Dish_Completed = 1ull << 20,
	Bon_Appetit = 1ull << 22,
	Bon_Appetit_Completed = 1ull << 26,
	Fragile_Delivery_3 = 1ull << 28,
	Fragile_Delivery_3_Completed = 1ull << 32,
	The_Tangled_Message = 1ull << 34,
	The_Tangled_Message_Completed = 1ull << 39,
	Item_Unknown = 1ull << 44,
	Item_Unknown_Completed = 1ull << 46,
	The_Runaway_Son = 1ull << 48,
	The_Runaway_Son_Completed = 1ull << 58,
	Apology_from_a_Fool = 1ull << 60,
};

enum class Quests_5D8 : unsigned long long
{
	Apology_from_a_Fool_Completed = 1ull << 0,
	The_Pride_of_a_Lover = 1ull << 6,
	The_Pride_of_a_Lover_Completed = 1ull << 8,
	The_Littlest_Hero = 1ull << 10,
	The_Littlest_Hero_Completed = 1ull << 13,
	The_Missing_Girl = 1ull << 15,
	The_Missing_Girl_Completed = 1ull << 19,
	A_Shade_Entombed = 1ull << 22,
	A_Shade_Entombed_Completed = 1ull << 25,
	The_Masterless_Lighthouse = 1ull << 27,
	The_Masterless_Lighthouse_Completed = 1ull << 28,
	The_Scattered_Cargo = 1ull << 30,
	The_Scattered_Cargo_Completed = 1ull << 41,
	The_Strange_Fate_of_the_Jewel = 1ull << 44,
	The_Strange_Fate_of_the_Jewel_Completed = 1ull << 52,
};

enum class Quests_5E0 : unsigned long long
{
	Thieves_in_Training = 1ull << 4,
	Learning_a_Trade = 1ull << 14,
	Learning_a_Trade_Completed = 1ull << 22,
	A_Bridge_in_Peril = 1ull << 25,
	A_Bridge_in_Peril_Completed = 1ull << 28,
	Master_of_the_Southern_Plains = 1ull << 30,
	Master_of_the_Southern_Plains_Completed = 1ull << 33,
	The_Fishermans_Gambit_Part_6 = 1ull << 35,
	The_Fishermans_Gambit_Part_6_Completed = 1ull << 36,
	The_Fishermans_Gambit_Part_7 = 1ull << 38,
	The_Fishermans_Gambit_Part_7_Completed = 1ull << 39,
	The_Fishermans_Gambit_Part_8 = 1ull << 41,
	The_Fishermans_Gambit_Part_8_Completed = 1ull << 42,
	The_Fishermans_Final_Gambit = 1ull << 44,
	The_Fishermans_Final_Gambit_Completed = 1ull << 45,
	Staying_Afloat = 1ull << 47,
	Staying_Afloat_Completed = 1ull << 49,
	Contract_for_a_Contractor = 1ull << 51,
	Contract_for_a_Contractor_Completed = 1ull << 53,
	The_Creaky_Waterwheel = 1ull << 55,
	The_Creaky_Waterwheel_Completed = 1ull << 59,
	The_Faded_Fountain = 1ull << 61,
};

enum class Quests_5E8 : unsigned long long
{
	The_Faded_Fountain_Completed = 1ull << 1,
	Bon_Appetit_2 = 1ull << 3,
	Bon_Appetit_2_Completed = 1ull << 5,
	Life_in_the_Sands = 1ull << 7,
	Life_in_the_Sands_Completed = 1ull << 9,
	The_Kings_Mask = 1ull << 11,
	The_Kings_Mask_Completed = 1ull << 13,
	A_Childs_Final_Chance = 1ull << 14,
	A_Childs_Final_Chance_Completed = 1ull << 23,
	The_Damaged_Map = 1ull << 25,
	The_Damaged_Map_Completed = 1ull << 38,
	Research_Project = 1ull << 40,
	Research_Project_Completed = 1ull << 45,
	A_Tale_of_the_Study = 1ull << 47,
	A_Tale_of_the_Study_Completed = 1ull << 50,
	The_Great_Tree = 1ull << 52,
	The_Great_Tree_Completed = 1ull << 55,
	The_Despicable_Man = 1ull << 57,
	The_Despicable_Man_Completed = 1ull << 63,
};

enum class Quests_5F0 : unsigned long long
{
	A_Memorable_Knife = 1ull << 1,
	A_Memorable_Knife_Completed = 1ull << 4,
	The_Shade_Army = 1ull << 7,
	The_Shade_Army_Completed = 1ull << 13,
	A_City_Reborn = 1ull << 15,
	A_City_Reborn_Completed = 1ull << 16,
	Nightmares_and_Dust = 1ull << 18,
	Nightmares_and_Dust_Completed = 1ull << 21,
	Disturbing_the_Sleep_of_Kings = 1ull << 23,
	Disturbing_the_Sleep_of_Kings_Completed = 1ull << 26,
	Shadows_of_the_Desert = 1ull << 28,
	Shadows_of_the_Desert_Completed = 1ull << 32,
	Search_for_the_Shade = 1ull << 34,
	Search_for_the_Shade_Completed = 1ull << 43,
	Freesia = 1ull << 45,
	Freesia_Completed = 1ull << 49,
	The_Magical_Stone = 1ull << 52,
	The_Magical_Stone_Completed = 1ull << 57,
};

enum class Quests_5F8 : unsigned long long
{
	The_Postmans_Request = 1ull << 25,
	The_Postmans_Request_Completed = 1ull << 26,
	The_Lighthouse_Ladys_Wrath = 1ull << 29,
	The_Lighthouse_Ladys_Wrath_Completed = 1ull << 39,
	Closure = 1ull << 41,
	Closure_Completed = 1ull << 42,
	Thieves_in_Training_Completed = 1ull << 57,
};

enum class Words_Uloth : unsigned long long
{
	Pah = 1ull << 0,
	Paha = 1ull << 1,
	Pahi = 1ull << 2,
	Paho = 1ull << 3,
	Pahu = 1ull << 4,
	Pahal = 1ull << 5,
	Pahil = 1ull << 6,
	Pahol = 1ull << 7,
	Pahul = 1ull << 8,
	Pahuloth = 1ull << 9,
	Var = 1ull << 10,
	Vara = 1ull << 11,
	Vari = 1ull << 12,
	Varo = 1ull << 13,
	Varu = 1ull << 14,
	Varal = 1ull << 15,
	Varil = 1ull << 16,
	Varol = 1ull << 17,
	Varul = 1ull << 18,
	Varuloth = 1ull << 19,
	Geb = 1ull << 20,
	Geba = 1ull << 21,
	Gebi = 1ull << 22,
	Gebo = 1ull << 23,
	Gebu = 1ull << 24,
	Gebal = 1ull << 25,
	Gebil = 1ull << 26,
	Gebol = 1ull << 27,
	Gebul = 1ull << 28,
	Gebuloth = 1ull << 29,
	Ul = 1ull << 30,
	Ula = 1ull << 31,
	Uli = 1ull << 32,
	Ulo = 1ull << 33,
	Ulu = 1ull << 34,
	Ulal = 1ull << 35,
	Ulil = 1ull << 36,
	Ulol = 1ull << 37,
	Ulul = 1ull << 38,
	Ululoth = 1ull << 39,
	Hod = 1ull << 40,
	Hoda = 1ull << 41,
	Hodi = 1ull << 42,
	Hodo = 1ull << 43,
	Hodu = 1ull << 44,
	Hodal = 1ull << 45,
	Hodil = 1ull << 46,
	Hodol = 1ull << 47,
	Hodul = 1ull << 48,
	Hoduloth = 1ull << 49,
	Bes = 1ull << 50,
	Besa = 1ull << 51,
	Besi = 1ull << 52,
	Beso = 1ull << 53,
	Besu = 1ull << 54,
	Besal = 1ull << 55,
	Besil = 1ull << 56,
	Besol = 1ull << 57,
	Besul = 1ull << 58,
	Besuloth = 1ull << 59,
};

enum class Words_Zarken : unsigned long long
{
	Lug = 1ull << 0,
	Lugir = 1ull << 1,
	Luges = 1ull << 2,
	Lugka = 1ull << 3,
	Lugza = 1ull << 4,
	Lugira = 1ull << 5,
	Lugesra = 1ull << 6,
	Lugkarr = 1ull << 7,
	Lugzarr = 1ull << 8,
	Lugzarken = 1ull << 9,
	Ot = 1ull << 10,
	Otir = 1ull << 11,
	Otes = 1ull << 12,
	Otka = 1ull << 13,
	Otza = 1ull << 14,
	Otira = 1ull << 15,
	Otesra = 1ull << 16,
	Otkarr = 1ull << 17,
	Otzarr = 1ull << 18,
	Otzarken = 1ull << 19,
	Mah = 1ull << 20,
	Mahir = 1ull << 21,
	Mahes = 1ull << 22,
	Mahka = 1ull << 23,
	Mahza = 1ull << 24,
	Mahira = 1ull << 25,
	Mahesra = 1ull << 26,
	Mahkarr = 1ull << 27,
	Mahzarr = 1ull << 28,
	Mahzarken = 1ull << 29,
	Ashur = 1ull << 30,
	Ashurir = 1ull << 31,
	Ashures = 1ull << 32,
	Ashurka = 1ull << 33,
	Ashurza = 1ull << 34,
	Ashurira = 1ull << 35,
	Ashuresra = 1ull << 36,
	Ashurkarr = 1ull << 37,
	Ashurzarr = 1ull << 38,
	Ashurzarken = 1ull << 39,
	Kon = 1ull << 40,
	Konir = 1ull << 41,
	Kones = 1ull << 42,
	Konka = 1ull << 43,
	Konza = 1ull << 44,
	Konira = 1ull << 45,
	Konesra = 1ull << 46,
	Konkarr = 1ull << 47,
	Konzarr = 1ull << 48,
	Konzarken = 1ull << 49,
	Sol = 1ull << 50,
	Solir = 1ull << 51,
	Soles = 1ull << 52,
	Solka = 1ull << 53,
	Solza = 1ull << 54,
	Solira = 1ull << 55,
	Solesra = 1ull << 56,
	Solkarr = 1ull << 57,
	Solzarr = 1ull << 58,
	Solzarken = 1ull << 59,
	Ashurfarra = 1ull << 60,
};

enum class Tutorials_7F0 : unsigned long long
{
	Controls = 1ull << 0,
	Combos = 1ull << 1,
	Dark_Blast = 1ull << 2,
	Dark_Phantasm = 1ull << 3,
	Dark_Hand = 1ull << 4,
	Dark_Lance = 1ull << 5,
	Dark_Whirlwind = 1ull << 6,
	Dark_Gluttony = 1ull << 7,
	Dark_Wall = 1ull << 8,
	Dark_Execution = 1ull << 9,
	Maps = 1ull << 10,
	Interactions = 1ull << 11,
	Attack_Gauges = 1ull << 12,
	Saving = 1ull << 13,
	Quests = 1ull << 14,
	Weapon_Types = 1ull << 15,
	Cultivating_Plants = 1ull << 16,
	Forging_Weapons = 1ull << 17,
	Shops = 1ull << 18,
	Mine_Carts = 1ull << 19,
	Switching_Magic_and_Abilities = 1ull << 20,
	Viewing_Letters = 1ull << 22,
	Changing_Weapons = 1ull << 23,
	Moving_Boxes = 1ull << 24,
	Charging = 1ull << 26,
	Skull_Cracker = 1ull << 28,
	Deflecting = 1ull << 29,
	Sidestepping = 1ull << 33,
	Sidestep_Attacks = 1ull << 34,
	Combo_and_Magic_Charging = 1ull << 35,
	Magic_Resistance = 1ull << 36,
	Cancels = 1ull << 37,
	Guard_Breaks = 1ull << 40,
	Heavy_Attack_Guard_Breaks = 1ull << 41,
	Earning_Money = 1ull << 42,
	Fishing_Tip = 1ull << 43,
	Fishing_Tip_2 = 1ull << 44,
	Fishing_Tip_3 = 1ull << 45,
	Fishing_Tip_4 = 1ull << 46,
	Fishing_Tip_5 = 1ull << 47,
	Armored_Enemies = 1ull << 48,
	Controlling_Boars = 1ull << 49,
	Bombs = 1ull << 50,
	Breakable_Boxes = 1ull << 51,
	Breakable_Barriers = 1ull << 52,
	Gathering_Items = 1ull << 53,
	Hidden_Items = 1ull << 54,
	Words = 1ull << 55,
	Ordering_Allies = 1ull << 56,
	Ordering_Animals = 1ull << 57,
	Item_and_Equipment_Shortcuts = 1ull << 58,
	Wall_Kicks = 1ull << 59,
	Combo_Basics = 1ull << 60,
	Deflecting_Enemy_Magic = 1ull << 61,
	Fighting_Magic_Resistant_Enemies = 1ull << 62,
	Fighting_Wolves = 1ull << 63,
};

enum class Tutorials_7F8 : unsigned long long
{
	Stronger_Dark_Blasts = 1ull << 0,
	Harvests = 1ull << 1,
	Rare_Items = 1ull << 2,
	Collecting_Materials = 1ull << 4,
	Absorbing_Blood = 1ull << 5,
	Magical_Collisions = 1ull << 6,
	Ending_B = 1ull << 7,
	Ending_C = 1ull << 8,
	Ending_D = 1ull << 9,
	Evading = 1ull << 10,
	Double_Jump = 1ull << 11,
	Weapon_Quick_Switching = 1ull << 13,
	Finishing_Blow = 1ull << 14,
	Magic_or_Ability_Quick_Switching = 1ull << 15,
	Lock_On = 1ull << 16,
	Poison = 1ull << 19,
};

enum class Quests_C4C : unsigned int
{
	The_Promised_Gift = 1u << 3,
	The_Promised_Gift_Completed = 1u << 9,
};

struct Player
{
	int corruptness;
	char map[32];
	int spawn;
	Character character;
	char name[32];
	int health;
	int health_kaine;
	int health_emil;
	float magic;
	float magic_kaine;
	float magic_emil;
	char unk3[12];
	int xp;
	char unk4[12];
	Order order_kaine;
	Order order_emil;
	Weapon active_weapon;
	Weapon selected_one_handed_sword;
	Weapon selected_two_handed_sword;
	Weapon selected_spear;
	char unk5[8];
	Ability ability_lb;
	Ability ability_rb;
	Ability ability_lt;
	Ability ability_rt;
	char unk6[12];
	int money;
	Recovery recovery;
	char unk7[7];
	Cultivation cultivation;
	char unk8[10];
	Fishing fishing;
	char unk9[5];
	Raw_Materials raw_materials;
	Key_Items key_items;
	char unk10[176];
	Documents documents;
	char unk11[168];
	Maps maps;
	char unk12[276];
	Weapons weapons;
	char unk13[225];
	Quests_5C0 quests_5c0;
	Quests_5C8 quests_5c8;
	Quests_5D0 quests_5d0;
	Quests_5D8 quests_5d8;
	Quests_5E0 quests_5e0;
	Quests_5E8 quests_5e8;
	Quests_5F0 quests_5f0;
	Quests_5F8 quests_5f8;
	char unk14[312];
	Words_Uloth words_uloth;
	Words_Zarken words_zarken;
	char unk15[168];
	Tutorials_7F0 tutorials_7f0;
	Tutorials_7F8 tutorials_7f8;
	char unk16[1100];
	Quests_C4C quests_c4c;
};