export module Player;

enum Order : int
{
	Attack_All = 0x0,
	Attack_Focus = 0x1,
	Defend_Only = 0x2,
};

enum Weapon : int
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

enum Ability : int
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
	char venision;
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
	char field_78[3];
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
	char drifting_cargo_5;
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
	bool letter_to_two_brothers;
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

enum Weapon_Level : char
{
	Level_1 = 0x0,
	Level_2 = 0x1,
	Level_3 = 0x2,
	Level_4 = 0x3,
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

export struct Player
{
	int unk;
	char map[24];
	char unk1[16];
	char name[10];
	char unk2[22];
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
	char unk13[1849];
};