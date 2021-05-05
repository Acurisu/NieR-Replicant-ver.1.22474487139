export module Player;

export enum Character : int
{
	Nier_Young = 0x0,
	Nier_Prologue = 0x1,
	Nier_Old = 0x2,
	Nier_Gestalt = 0x3,
	Kaine = 0x4,
};

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

export struct Cultivation
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

export enum Weapon_Level : char
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

enum Quests_5C0 : unsigned long long
{
	Herbal_Remedies = 0x10000000,
	Herbal_Remedies_Completed = 0x20000000,
	The_Gatekeepers_Errand = 0x80000000,
	The_Gatekeepers_Errand_Completed = 0x200000000,
	The_Lost_Eggs = 0x800000000,
	The_Lost_Eggs_Completed = 0x8000000000,
	Old_Fashioned_Home_Cooking = 0x20000000000,
	Old_Fashioned_Home_Cooking_Completed = 0x80000000000,
	Shopping_List = 0x200000000000,
	Shopping_List_Completed = 0x800000000000,
	Book_Smarts = 0x2000000000000,
	Book_Smarts_Completed = 0x20000000000000,
	The_Tavern_Keepers_Grandmother = 0x80000000000000,
	The_Tavern_Keepers_Grandmother_Completed = 0x400000000000000,
	A_Return_to_Shopping = 0x1000000000000000,
	A_Return_to_Shopping_Completed = 0x4000000000000000,
};

enum Quests_5C8 : unsigned long long
{
	Yonahs_Cooking = 0x1,
	Yonahs_Cooking_Completed = 0x2,
	Boar_Hunt = 0x8,
	Boar_Hunt_Completed = 0x40,
	On_the_Wings_of_Eagles = 0x100,
	On_the_Wings_of_Eagles_Completed = 0x1000,
	Fragile_Delivery = 0x4000,
	Fragile_Delivery_Completed = 0x40000,
	Fragile_Delivery_2 = 0x100000,
	Fragile_Delivery_2_Completed = 0x1000000,
	The_Fishermans_Gambit = 0x4000000,
	The_Fishermans_Gambit_Completed = 0x8000000,
	The_Fishermans_Gambit_Part_2 = 0x20000000,
	The_Fishermans_Gambit_Part_2_Completed = 0x40000000,
	The_Fishermans_Gambit_Part_3 = 0x100000000,
	The_Fishermans_Gambit_Part_3_Completed = 0x200000000,
	The_Fishermans_Gambit_Part_4 = 0x800000000,
	The_Fishermans_Gambit_Part_4_Completed = 0x1000000000,
	The_Fishermans_Gambit_Part_5 = 0x4000000000,
	The_Fishermans_Gambit_Part_5_Completed = 0x8000000000,
	The_Ballad_of_the_Twins = 0x20000000000,
	The_Ballad_of_the_Twins_Completed = 0x400000000000,
	A_Dog_Astray = 0x1000000000000,
	A_Dog_Astray_Completed = 0x8000000000000,
	The_New_Merchant_in_Town = 0x20000000000000,
	The_New_Merchant_in_Town_Completed = 0x200000000000000,
};

enum Quests_5D0 : unsigned long long
{
	Yonahs_Gift = 0x10,
	Yonahs_Gift_Completed = 0x800,
	Letter_to_a_Lover = 0x2000,
	Letter_to_a_Lover_Completed = 0x10000,
	A_Signature_Dish = 0x40000,
	A_Signature_Dish_Completed = 0x100000,
	Bon_Appetit = 0x400000,
	Bon_Appetit_Completed = 0x4000000,
	Fragile_Delivery_3 = 0x10000000,
	Fragile_Delivery_3_Completed = 0x100000000,
	The_Tangled_Message = 0x400000000,
	The_Tangled_Message_Completed = 0x8000000000,
	Item_Unknown = 0x100000000000,
	Item_Unknown_Completed = 0x400000000000,
	The_Runaway_Son = 0x1000000000000,
	The_Runaway_Son_Completed = 0x400000000000000,
	Apology_from_a_Fool = 0x1000000000000000,
};

enum Quests_5D8 : unsigned long long
{
	Apology_from_a_Fool_Completed = 0x1,
	The_Pride_of_a_Lover = 0x40,
	The_Pride_of_a_Lover_Completed = 0x100,
	The_Littlest_Hero = 0x400,
	The_Littlest_Hero_Completed = 0x2000,
	The_Missing_Girl = 0x8000,
	The_Missing_Girl_Completed = 0x80000,
	A_Shade_Entombed = 0x400000,
	A_Shade_Entombed_Completed = 0x2000000,
	The_Masterless_Lighthouse = 0x8000000,
	The_Masterless_Lighthouse_Completed = 0x10000000,
	The_Scattered_Cargo = 0x40000000,
	The_Scattered_Cargo_Completed = 0x20000000000,
	The_Strange_Fate_of_the_Jewel = 0x100000000000,
	The_Strange_Fate_of_the_Jewel_Completed = 0x10000000000000,
};

enum Quests_5E0 : unsigned long long
{
	Thieves_in_Training = 0x10,
	Learning_a_Trade = 0x4000,
	Learning_a_Trade_Completed = 0x400000,
	A_Bridge_in_Peril = 0x2000000,
	A_Bridge_in_Peril_Completed = 0x10000000,
	Master_of_the_Southern_Plains = 0x40000000,
	Master_of_the_Southern_Plains_Completed = 0x200000000,
	The_Fishermans_Gambit_Part_6 = 0x800000000,
	The_Fishermans_Gambit_Part_6_Completed = 0x1000000000,
	The_Fishermans_Gambit_Part_7 = 0x4000000000,
	The_Fishermans_Gambit_Part_7_Completed = 0x8000000000,
	The_Fishermans_Gambit_Part_8 = 0x20000000000,
	The_Fishermans_Gambit_Part_8_Completed = 0x40000000000,
	The_Fishermans_Final_Gambit = 0x100000000000,
	The_Fishermans_Final_Gambit_Completed = 0x200000000000,
	Staying_Afloat = 0x800000000000,
	Staying_Afloat_Completed = 0x2000000000000,
	Contract_for_a_Contractor = 0x8000000000000,
	Contract_for_a_Contractor_Completed = 0x20000000000000,
	The_Creaky_Waterwheel = 0x80000000000000,
	The_Creaky_Waterwheel_Completed = 0x800000000000000,
	The_Faded_Fountain = 0x2000000000000000,
};

enum Quests_5E8 : unsigned long long
{
	The_Faded_Fountain_Completed = 0x2,
	Bon_Appetit_2 = 0x8,
	Bon_Appetit_2_Completed = 0x20,
	Life_in_the_Sands = 0x80,
	Life_in_the_Sands_Completed = 0x200,
	The_Kings_Mask = 0x800,
	The_Kings_Mask_Completed = 0x2000,
	A_Childs_Final_Chance = 0x4000,
	A_Childs_Final_Chance_Completed = 0x800000,
	The_Damaged_Map = 0x2000000,
	The_Damaged_Map_Completed = 0x4000000000,
	Research_Project = 0x10000000000,
	Research_Project_Completed = 0x200000000000,
	A_Tale_of_the_Study = 0x800000000000,
	A_Tale_of_the_Study_Completed = 0x4000000000000,
	The_Great_Tree = 0x10000000000000,
	The_Great_Tree_Completed = 0x80000000000000,
	The_Despicable_Man = 0x200000000000000,
	The_Despicable_Man_Completed = 0x8000000000000000,
};

enum Quests_5F0 : unsigned long long
{
	A_Memorable_Knife = 0x2,
	A_Memorable_Knife_Completed = 0x10,
	The_Shade_Army = 0x80,
	The_Shade_Army_Completed = 0x2000,
	A_City_Reborn = 0x8000,
	A_City_Reborn_Completed = 0x10000,
	Nightmares_and_Dust = 0x40000,
	Nightmares_and_Dust_Completed = 0x200000,
	Disturbing_the_Sleep_of_Kings = 0x800000,
	Disturbing_the_Sleep_of_Kings_Completed = 0x4000000,
	Shadows_of_the_Desert = 0x10000000,
	Shadows_of_the_Desert_Completed = 0x100000000,
	Search_for_the_Shade = 0x400000000,
	Search_for_the_Shade_Completed = 0x80000000000,
	Freesia = 0x200000000000,
	Freesia_Completed = 0x2000000000000,
	The_Magical_Stone = 0x10000000000000,
	The_Magical_Stone_Completed = 0x200000000000000,
};

enum Quests_5F8 : unsigned long long
{
	The_Postmans_Request = 0x2000000,
	The_Postmans_Request_Completed = 0x4000000,
	The_Lighthouse_Ladys_Wrath = 0x20000000,
	The_Lighthouse_Ladys_Wrath_Completed = 0x8000000000,
	Closure = 0x20000000000,
	Closure_Completed = 0x40000000000,
	Thieves_in_Training_Completed = 0x200000000000000,
};

export enum Words_Uloth : unsigned long long
{
	Pah = 0x1,
	Paha = 0x2,
	Pahi = 0x4,
	Paho = 0x8,
	Pahu = 0x10,
	Pahal = 0x20,
	Pahil = 0x40,
	Pahol = 0x80,
	Pahul = 0x100,
	Pahuloth = 0x200,
	Var = 0x400,
	Vara = 0x800,
	Vari = 0x1000,
	Varo = 0x2000,
	Varu = 0x4000,
	Varal = 0x8000,
	Varil = 0x10000,
	Varol = 0x20000,
	Varul = 0x40000,
	Varuloth = 0x80000,
	Geb = 0x100000,
	Geba = 0x200000,
	Gebi = 0x400000,
	Gebo = 0x800000,
	Gebu = 0x1000000,
	Gebal = 0x2000000,
	Gebil = 0x4000000,
	Gebol = 0x8000000,
	Gebul = 0x10000000,
	Gebuloth = 0x20000000,
	Ul = 0x40000000,
	Ula = 0x80000000,
	Uli = 0x100000000,
	Ulo = 0x200000000,
	Ulu = 0x400000000,
	Ulal = 0x800000000,
	Ulil = 0x1000000000,
	Ulol = 0x2000000000,
	Ulul = 0x4000000000,
	Ululoth = 0x8000000000,
	Hod = 0x10000000000,
	Hoda = 0x20000000000,
	Hodi = 0x40000000000,
	Hodo = 0x80000000000,
	Hodu = 0x100000000000,
	Hodal = 0x200000000000,
	Hodil = 0x400000000000,
	Hodol = 0x800000000000,
	Hodul = 0x1000000000000,
	Hoduloth = 0x2000000000000,
	Bes = 0x4000000000000,
	Besa = 0x8000000000000,
	Besi = 0x10000000000000,
	Beso = 0x20000000000000,
	Besu = 0x40000000000000,
	Besal = 0x80000000000000,
	Besil = 0x100000000000000,
	Besol = 0x200000000000000,
	Besul = 0x400000000000000,
	Besuloth = 0x800000000000000,
};

export enum Words_Zarken : unsigned long long
{
	Lug = 0x1,
	Lugir = 0x2,
	Luges = 0x4,
	Lugka = 0x8,
	Lugza = 0x10,
	Lugira = 0x20,
	Lugesra = 0x40,
	Lugkarr = 0x80,
	Lugzarr = 0x100,
	Lugzarken = 0x200,
	Ot = 0x400,
	Otir = 0x800,
	Otes = 0x1000,
	Otka = 0x2000,
	Otza = 0x4000,
	Otira = 0x8000,
	Otesra = 0x10000,
	Otkarr = 0x20000,
	Otzarr = 0x40000,
	Otzarken = 0x80000,
	Mah = 0x100000,
	Mahir = 0x200000,
	Mahes = 0x400000,
	Mahka = 0x800000,
	Mahza = 0x1000000,
	Mahira = 0x2000000,
	Mahesra = 0x4000000,
	Mahkarr = 0x8000000,
	Mahzarr = 0x10000000,
	Mahzarken = 0x20000000,
	Ashur = 0x40000000,
	Ashurir = 0x80000000,
	Ashures = 0x100000000,
	Ashurka = 0x200000000,
	Ashurza = 0x400000000,
	Ashurira = 0x800000000,
	Ashuresra = 0x1000000000,
	Ashurkarr = 0x2000000000,
	Ashurzarr = 0x4000000000,
	Ashurzarken = 0x8000000000,
	Kon = 0x10000000000,
	Konir = 0x20000000000,
	Kones = 0x40000000000,
	Konka = 0x80000000000,
	Konza = 0x100000000000,
	Konira = 0x200000000000,
	Konesra = 0x400000000000,
	Konkarr = 0x800000000000,
	Konzarr = 0x1000000000000,
	Konzarken = 0x2000000000000,
	Sol = 0x4000000000000,
	Solir = 0x8000000000000,
	Soles = 0x10000000000000,
	Solka = 0x20000000000000,
	Solza = 0x40000000000000,
	Solira = 0x80000000000000,
	Solesra = 0x100000000000000,
	Solkarr = 0x200000000000000,
	Solzarr = 0x400000000000000,
	Solzarken = 0x800000000000000,
	Ashurfarra = 0x1000000000000000,
};

export enum Quests_C4C : unsigned int
{
	The_Promised_Gift = 0x8,
	The_Promised_Gift_Completed = 0x200,
};

export struct Player
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
	char unk15[1284];
	Quests_C4C quests_c4c;
};