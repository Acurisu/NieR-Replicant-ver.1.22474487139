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

struct Ability_Unlocks
{
  char unused;
  char defend;
  char evade;
  char dark_blast;
  char dark_phantasm;
  char dark_hand;
  char dark_lance;
  char dark_whirlwind;
  char dark_gluttony;
  char dark_wall;
  char dark_execution;
  char unused1;
};

struct Recovery
{
  char medicinal_herb;
  char health_salve;
  char recovery_potion;
  char unused_item_3_20[18];
  char strength_drop;
  char strength_capsule;
  char magic_drop;
  char magic_capsule;
  char defense_drop;
  char defense_capsule;
  char spirit_drop;
  char spirit_capsule;
  char unused_item_29_30[2];
  char antidotal_weed;
  char unused_item_32;
  char smelling_salts;
};

struct Cultivation
{
  char speed_fertilizer;
  char flowering_fertilizer;
  char bounty_fertilizer;
  char unused_item_44_45[2];
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
  char unused_item_66_70[5];
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
  char unused_item_104_110[7];
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

struct Fishing_Record_Measurements
{
  double aquatic_plant;
  double deadwood;
  double rusty_bucket;
  double empty_can;
  double rusted_clump;
  double sardine;
  double blowfish;
  double bream;
  double shark;
  double blue_marlin;
  double dunkleosteus;
  double carp;
  double rainbow_trout;
  double black_bass;
  double giant_catfish;
  double royal_fish;
  double hyneria;
  double sandfish;
  double rhizodont;
  double shaman_fish;
  double reserved_20;
  double reserved_21;
  double reserved_22;
  double reserved_23;
};

struct Raw_Materials
{
  char aquatic_plant;
  char deadwood;
  char rusty_bucket;
  char empty_can;
  char unused_item_135_137[3];
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
  char unused_item_149_152[4];
  char berries;
  char royal_fern;
  char tree_branch;
  char log;
  char natural_rubber;
  char ivy;
  char lichen;
  char mushroom;
  char sap;
  char unused_item_162_166[5];
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
  char unused_item_197_200[4];
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
  char unused_item_226;
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
  char unused_item_237_241[5];
  char sea_turtle_egg;
  char broken_pottery;
  char desert_rose;
  char giant_egg;
  char damascus_steel;
  char eagle_egg;
  char chicken_egg;
  char unused_item_249;
  char mouse_tail;
  char lizard_tail;
  char unused_item_252_254[3];
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

struct Extra_Documents
{
  bool project_gestalt_report_0923;
  bool project_gestalt_report_9182;
  bool project_gestalt_report_10432;
  bool project_gestalt_report_11242;
};

struct Maps
{
  char world_map;
  char unused_item_705_706[2];
  char niers_village_map;
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
  char unused_item_720;
  char shadowlords_castle_map;
  char unused_item_722;
  char northern_plains_map;
  char southern_plains_map;
  char eastern_road_map;
  char beneath_the_forest_of_myth_map;
  char tokyo_map;
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
  Weapon_Level unused_weapon_17_19[3];
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
  Weapon_Level unused_weapon_30_39[10];
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
  Weapon_Level unused_weapon_51_63[13];
};

enum class GameFlags_500 : unsigned long long
{
  Library_Jack_Of_Hearts_Battle_Checkpoint = 1ull << 22, // BOSS_JACK_04
};

enum class GameFlags_508 : unsigned long long
{
  Map_Opened_Tokyo_Prologue = 1ull << 6, // OP_C_TOKYO_FIELD_01
  Map_Opened_Act_1_Village = 1ull << 7, // OP_A_CENTER_VILLAGE_01
  Map_Opened_Act_2_Village = 1ull << 8, // OP_B_CENTER_VILLAGE_01
  Map_Opened_Act_1_Village_Library = 1ull << 9, // OP_A_CENTER_LIBRARY_01
  Map_Opened_Act_2_Village_Library = 1ull << 10, // OP_B_CENTER_LIBRARY_01
  Map_Opened_Act_1_Lost_Shrine_Interior = 1ull << 11, // OP_A_STONE_TEMPLE_01
  Map_Opened_Act_2_Lost_Shrine_Interior = 1ull << 12, // OP_B_STONE_TEMPLE_01
  Map_Opened_Act_1_Lost_Shrine_Approach = 1ull << 13, // OP_A_STONE_FIELD_01
  Map_Opened_Act_2_Lost_Shrine_Approach = 1ull << 14, // OP_B_STONE_FIELD_01
  Map_Opened_Act_1_The_Aerie_Or_Trial = 1ull << 15, // OP_A_CLIFF_VILLAGE_01; also used as OP_A_TRIAL_01
  Map_Opened_Act_2_The_Aerie = 1ull << 16, // OP_B_CLIFF_VILLAGE_01
  Map_Opened_Act_1_Seafront = 1ull << 17, // OP_A_SEASIDE_TOWN_01
  Map_Opened_Act_2_Seafront = 1ull << 18, // OP_B_SEASIDE_TOWN_01
  Map_Opened_Act_2_Desert = 1ull << 20, // OP_B_DESERT_FIELD_01
  Map_Opened_Act_1_Desert_Route_2 = 1ull << 21, // OP_A_DESERT_FIELD_02
  Map_Opened_Act_2_Desert_Route_2 = 1ull << 22, // OP_B_DESERT_FIELD_02
  Map_Opened_Act_1_Facade = 1ull << 23, // OP_A_DESERT_TOWN_01
  Map_Opened_Act_2_Facade = 1ull << 24, // OP_B_DESERT_TOWN_01
  Map_Opened_Act_1_Barren_Temple = 1ull << 25, // OP_A_DESERT_TEMPLE_01
  Map_Opened_Act_1_Barren_Temple_Second_Area = 1ull << 27, // OP_A_DESERT_TEMPLE_02
  Map_Opened_Act_1_Forest_Of_Myth = 1ull << 29, // OP_A_FOREST_FIELD_01
  Map_Opened_Act_2_Shadowlord_Castle_Field_2 = 1ull << 32, // OP_B_CASTLE_FIELD_02
  Map_Opened_Act_2_Shadowlord_Castle_Field_3 = 1ull << 33, // OP_B_CASTLE_FIELD_03
  Map_Opened_Act_1_Junk_Heap_Exterior = 1ull << 34, // OP_A_MOUNT_FIELD_01
  Map_Opened_Act_2_Junk_Heap_Exterior = 1ull << 35, // OP_B_MOUNT_FIELD_01
  Map_Opened_Act_1_Junk_Heap_Factory = 1ull << 36, // OP_A_MOUNT_ROBOT_01
  Map_Opened_Act_2_Junk_Heap_Factory = 1ull << 37, // OP_B_MOUNT_ROBOT_01
  Map_Opened_Act_1_Junk_Heap_Factory_Sub_Area = 1ull << 38, // OP_A_MOUNT_ROBOT_02
  Map_Opened_Act_2_Junk_Heap_Factory_Sub_Area = 1ull << 39, // OP_B_MOUNT_ROBOT_02
  Map_Opened_Act_1_Emils_Manor = 1ull << 40, // OP_A_SOUTH_MANSION_01
  Map_Opened_Act_2_Emils_Manor = 1ull << 41, // OP_B_SOUTH_MANSION_01
  Map_Opened_Act_1_Manor_Underground = 1ull << 42, // OP_A_SOUTH_MANSION_02
  Map_Opened_Act_2_Underground_Facility_1 = 1ull << 45, // OP_B_SOUTH_UNDERGROUND_01
  Map_Opened_Act_2_Underground_Facility_2 = 1ull << 47, // OP_B_SOUTH_UNDERGROUND_02
  Map_Opened_Act_1_Northern_Plains = 1ull << 48, // OP_A_NORTH_FIELD_01
  Map_Opened_Act_2_Northern_Plains = 1ull << 49, // OP_B_NORTH_FIELD_01
  Map_Opened_Act_1_Southern_Plains = 1ull << 50, // OP_A_SOUTH_FIELD_01
  Map_Opened_Act_2_Southern_Plains = 1ull << 51, // OP_B_SOUTH_FIELD_01
  Map_Opened_Act_1_Eastern_Road = 1ull << 52, // OP_A_EAST_FIELD_01
  Map_Opened_Act_2_Eastern_Road = 1ull << 53, // OP_B_EAST_FIELD_01
  Village_Farm_Plot_A_Unlocked = 1ull << 58, // NIER_FARM_A
  Village_Farm_Plot_B_Unlocked = 1ull << 59, // NIER_FARM_B
  Village_Farm_Plot_C_Unlocked = 1ull << 60, // NIER_FARM_C
  Kaine_Companion_Actor_Active = 1ull << 61, // KAINE_ACTIVATE_01
  Emil_Snow_Companion_Actor_Active = 1ull << 62, // SNOW_ACTIVATE_01
  Dark_Blast_Learned = 1ull << 63, // Magic_Dark_Blast_Learned
};

enum class GameFlags_510 : unsigned long long
{
  Dark_Phantasm_Learned = 1ull << 0, // Magic_Dark_Phantasm_Learned
  Dark_Hand_Learned = 1ull << 1, // Magic_Dark_Hand_Learned
  Dark_Lance_Learned = 1ull << 2, // Magic_Dark_Lance_Learned
  Dark_Whirlwind_Learned = 1ull << 3, // Magic_Dark_Whirlwind_Learned
  Dark_Gluttony_Learned = 1ull << 4, // Magic_Dark_Gluttony_Learned
  Dark_Wall_Learned = 1ull << 5, // Magic_Dark_Wall_Learned
  Dark_Execution_Learned = 1ull << 6, // Magic_Dark_Execution_Learned
  Emil_Snow_Travels_With_Player_In_Manor = 1ull << 8, // B3100_PERSON_SNOW_TOGETHER
  Force_Cloudy_Weather_Once = 1ull << 9, // SET_CLOUDY_WEATHER
  Lost_Shrine_Bronze_Key_Acquired = 1ull << 10, // A0200_KEY01
  Extra_Sheep_Hunting_Quest_Active = 1ull << 12, // START_EXTRA_QUEST
  Extra_Sheep_Hunting_Quest_Completed = 1ull << 13, // END_EXTRA_QUEST
  Lost_Shrine_West_Room_First_Talk_Seen = 1ull << 14, // West_Room_First_Talk_Seen
  Doll_Completion_Talk_Seen = 1ull << 15, // Doll_Complete_Talk_Seen
  DLC_Diary_First_Play_Talk_Seen = 1ull << 16, // DLC_FIRST_PLAY
  DLC_Cleared = 1ull << 17, // DLC_CLEAR
  Extra_Sheep_Hunting_Quest_First_Play_State_Seen = 1ull << 18, // EXTRA_QUEST_FIRST_PLAY
  Prologue_Tokyo_Cyclops_Battle_Checkpoint = 1ull << 21, // A0050_a0042g_CYCLOPS_01
  Act_1_Village_Opening_Started = 1ull << 25, // A0100S
  Village_Intro_First_Objective_Complete = 1ull << 26, // A0100_a0012
  Village_Intro_Devola_Follow_Up_Complete = 1ull << 27, // A0100_a0016g
  Popola_Starts_The_Mutton_Errand = 1ull << 28, // A0100_a0020
  Exited_Library_After_Popolas_Mutton_Briefing = 1ull << 29, // A0100_a0030_Out_Library
  Village_Library_Exit_Scene_Complete = 1ull << 30, // A0100_a0030
  Mutton_Hunt_Tutorial_Shown = 1ull << 31, // A0100_a0035_Tutorial_Hunt
  Mutton_And_Herb_Errand_Started = 1ull << 32, // SQF_0100_s0010_S
  Mutton_And_Herb_Errand_Yonah_Follow_Up_Seen = 1ull << 33, // SQF_0100_s0010_01
  Mutton_And_Herb_Errand_Mutton_Collected = 1ull << 34, // SQF_0100_s0010_02
  Mutton_And_Herb_Errand_Mutton_Handed_In = 1ull << 35, // SQF_0100_s0010_03
  Mutton_Errand_Herbs_Already_Owned_At_Hand_In = 1ull << 36, // SQF_0100_s0010_03_Had_Medicinal_Herbs
  Mutton_Errand_Boundary_Radio_Played = 1ull << 37, // SQF_0100_s0010_Radio
  Mutton_And_Herb_Errand_Complete = 1ull << 38, // SQF_0100_s0010_E
  Yonah_Home_Follow_Up_After_Errand_Started = 1ull << 39, // A0100_a0038g
  Yonah_Home_Follow_Up_Complete = 1ull << 40, // A0100_a0039g_S
  Popola_Sends_Player_To_Northern_Plains = 1ull << 41, // A0100_a0039g_01
  Northern_Plains_Shade_Encounter_Complete = 1ull << 42, // A0100_a0039g_02
  Popola_Follow_Up_After_Northern_Plains_Complete = 1ull << 43, // A0100_a0039g_E
  Yonah_Sickness_Event_Complete = 1ull << 44, // A0100_a0045g
  Popola_Starts_The_Lost_Shrine_Lead = 1ull << 45, // A0100_a0050_S
  Popola_Lost_Shrine_Lead_Follow_Up_Complete = 1ull << 46, // A0100_a0050
  Village_Important_Item_Pickup_Available = 1ull << 47, // A0100_a0055g
  Act_1_Village_Opening_Complete = 1ull << 48, // A0100E
  Savepoint_Camera_Tutorial_Seen = 1ull << 49, // Savepoint_Camera_Tutorial_Seen
  Lost_Shrine_Yonah_Search_Started = 1ull << 61, // A0200S
  Lost_Shrine_Approach_Intro_Talk_Seen = 1ull << 62, // A0200_a0007_03
  Lost_Shrine_Exterior_Intro_Scene_Complete = 1ull << 63, // A0200_a0010
};

enum class GameFlags_518 : unsigned long long
{
  Lost_Shrine_Interior_Intro_Scene_Complete = 1ull << 0, // A0200_a0012
  Lost_Shrine_Enemy_Room_Cleared = 1ull << 1, // A0200_a0015g
  Lost_Shrine_Pre_Boss_Checkpoint_Complete = 1ull << 2, // A0200_a0017
  Hansel_And_Gretel_Fight_Started = 1ull << 3, // A0200_a0050
  Hansel_And_Gretel_Phase_1_Complete = 1ull << 4, // A0200_a0050_HANGRE_01
  Hansel_And_Gretel_Phase_2_Complete = 1ull << 6, // A0200_a0060_HANGRE_02
  Hansel_And_Gretel_Phase_3_Complete = 1ull << 8, // A0200_a0070_HANGRE_03
  Hansel_And_Gretel_Final_Phase_Complete = 1ull << 9, // A0200_a0080
  Lost_Shrine_First_Visit_Complete = 1ull << 10, // A0200E
  Hansel_And_Gretel_Charge_Radio_Played = 1ull << 12, // A0200_Boss_Charge_Radio_Seen
  Lost_Shrine_Post_Intro_Talk_Seen = 1ull << 13, // A0200_a0012_2
  Lost_Shrine_Bridge_Follow_Up_Complete = 1ull << 14, // A0200_a0017_2
  Post_Lost_Shrine_Village_Debrief_Started = 1ull << 25, // A0300S
  Post_Lost_Shrine_First_Village_Talk_Complete = 1ull << 26, // A0300_a0010
  Post_Lost_Shrine_Village_Follow_Up_Started = 1ull << 27, // A0300_a0015g
  Post_Lost_Shrine_Village_Objective_Updated = 1ull << 28, // A0300_a0020
  Post_Lost_Shrine_Library_Talk_Complete = 1ull << 29, // A0300_a0030
  Post_Lost_Shrine_Village_Route_Complete = 1ull << 30, // A0300E
  Post_Lost_Shrine_Tutorial_Talk_Seen = 1ull << 32, // A0300E_02
  Post_Lost_Shrine_Northern_Plains_Radio_1_Played = 1ull << 33, // A0300E_03
  Post_Lost_Shrine_Devola_Follow_Up_Talk_Seen = 1ull << 34, // EID_0400_a0010g
  Post_Lost_Shrine_Northern_Plains_Radio_2_Played = 1ull << 35, // A0300E_04
  Post_Lost_Shrine_Village_Talk_1065_Seen = 1ull << 36, // A0300_Talk_Text_18_Seen
  First_Aerie_Assignment_Started = 1ull << 47, // A1000S
  Aerie_Entrance_Flyover_Seen = 1ull << 48, // A1000_a0010
  Aerie_Chief_House_Prompt_Seen = 1ull << 49, // A1000_Chief_House_Look_Seen
  Aerie_Chief_Spoken_To = 1ull << 50, // A1000_a0015
  Kaine_Encounter_Trigger_Reached = 1ull << 51, // A1000_a0025g
  Kaine_First_Fight_Phase_1_Started = 1ull << 52, // A1000_a0030_KAINE_01
  Kaine_First_Fight_Phase_2_Complete = 1ull << 53, // A1000_a0040_KAINE_02
  Kaine_First_Fight_Complete = 1ull << 54, // A1000_a0045g
  Hook_First_Encounter_Started = 1ull << 55, // A1000_a0050_HOOK_01
  Hook_First_Encounter_Resolved = 1ull << 56, // A1000_a0070
  First_Aerie_Assignment_Complete = 1ull << 57, // A1000E
  First_Aerie_North_Field_Return_Branch_1_Complete = 1ull << 59, // A1000_a0090_01
  First_Aerie_North_Field_Return_Branch_2_Complete = 1ull << 60, // A1000_a0090_02
  First_Aerie_North_Field_Follow_Up_Radio_Played = 1ull << 61, // A1000_a0090_03
  First_Aerie_Completion_Radio_Played = 1ull << 62, // A1000E_01
  Aerie_Early_One_Shot_Radio_1274_Played = 1ull << 63, // A1000_Talk_Text_18_Seen
};

enum class GameFlags_520 : unsigned long long
{
  Word_Tutorial_Seen = 1ull << 0, // Word_Tutorial_Seen
  Popola_Post_Aerie_Route_Choice_Started = 1ull << 12, // EID_1010_0010g_S
  Popola_Post_Aerie_Route_Choice_First_Branch_Set = 1ull << 13, // EID_1010_0010g_01
  Popola_Route_Choice_Junk_Heap_Selected = 1ull << 14, // EID_1010_0010g_02
  Popola_Route_Choice_Village_Tavern_Selected = 1ull << 15, // EID_1010_0010g_03
  Popola_Post_Aerie_Route_Choice_Complete = 1ull << 16, // EID_1010_0010g_E
  Village_Tavern_Lead_In_Started = 1ull << 19, // EID_1030_0010g_S
  Village_Tavern_Lead_In_Complete = 1ull << 20, // EID_1030_0010g_E
  Village_Tavern_Lead_In_Radio_Played = 1ull << 21, // EID_1030_0010g_01
  First_Junk_Heap_Assignment_Started = 1ull << 24, // A1200S
  Junk_Heap_Approach_Branch_1_Complete = 1ull << 25, // A1200_a0010g_010
  Junk_Heap_Approach_Branch_2_Complete = 1ull << 26, // A1200_a0010g_020
  Junk_Heap_Exterior_Intro_Complete = 1ull << 27, // A1200_a0005
  Junk_Heap_Brother_Meeting_Started = 1ull << 28, // A1200_a0015g
  First_Junk_Heap_Assignment_Complete = 1ull << 32, // A1200E
  Junk_Heap_Defense_System_Route_Started = 1ull << 45, // A1270S
  Defense_System_Phase_1_Active = 1ull << 50, // A1270_GEPPETT_01
  Defense_System_Phase_2_Active = 1ull << 51, // A1270_GEPPETT_02
  Defense_System_Defeated = 1ull << 52, // A1270_GEPPETT_END
  Defense_System_Post_Battle_Event_Complete = 1ull << 53, // A1270_a0060g
  Junk_Heap_Defense_System_Route_Complete = 1ull << 54, // A1270E
  Post_Junk_Heap_Mount_Field_Event_Complete = 1ull << 56, // EID_1280_a0010g
};

enum class GameFlags_528 : unsigned long long
{
  Village_Tavern_Side_Route_Started = 1ull << 3, // EID_1020_0010g_S
  Village_Tavern_Side_Route_Midpoint_Complete = 1ull << 4, // EID_1020_0010g_01
  Village_Tavern_Side_Route_Complete = 1ull << 5, // EID_1020_0010g_E
  Southern_Plains_Detour_Started = 1ull << 7, // EID_1025_0010g_S
  Southern_Plains_Detour_Complete = 1ull << 8, // EID_1025_0010g_E
  Seafront_Letter_Subquest_Started = 1ull << 11, // SQF_1320_s0130_S
  Seafront_Letter_Subquest_First_Checkpoint = 1ull << 12, // SQF_1320_s0130_01
  Seafront_Letter_Subquest_Second_Checkpoint = 1ull << 13, // SQF_1320_s0130_02
  Seafront_Letter_Subquest_Third_Checkpoint = 1ull << 14, // SQF_1320_s0130_03
  Seafront_Letter_Subquest_Complete = 1ull << 15, // SQF_1320_s0130_E
  First_Seafront_Route_Started = 1ull << 17, // A1320S
  Seafront_Route_First_Scene_Complete = 1ull << 18, // A1320_a0020
  Seafront_Route_Follow_Up_Complete = 1ull << 19, // A1320_a0025g
  Seafront_Route_Intermediate_Checkpoint = 1ull << 20, // A1320_a0027g
  Seafront_Route_Main_Scene_Complete = 1ull << 21, // A1320_a0030
  Seafront_Return_Branch_1_Complete = 1ull << 22, // A1320_a0100_010
  Seafront_Return_Branch_2_Complete = 1ull << 23, // A1320_a0100_020
  Seafront_Late_Route_Scene_Complete = 1ull << 24, // A1320_a0110
  Seafront_Final_Scene_Complete = 1ull << 25, // A1320_a0120
  First_Seafront_Route_Complete = 1ull << 26, // A1320E
  Post_Seafront_Southern_Plains_Radio_Played = 1ull << 28, // A1320E_01
  Village_Side_Route_1022_Started = 1ull << 38, // EID_1022_0010g_S
  Village_Side_Route_1022_First_Checkpoint = 1ull << 39, // EID_1022_0010g_01
  Village_Side_Route_1022_Second_Checkpoint = 1ull << 40, // EID_1022_0010g_02
  Village_Side_Route_1022_Complete = 1ull << 41, // EID_1022_0010g_E
  Popola_Alternate_Library_Route_Started = 1ull << 45, // EID_1040_0010g_S
  Popola_Alternate_Library_Route_Complete = 1ull << 46, // EID_1040_0010g_E
  Hook_Rematch_Route_Started = 1ull << 54, // A1050S
  Hook_Rematch_Intro_Complete = 1ull << 55, // A1050_a0020
  Hook_Rematch_Phase_1_Active = 1ull << 56, // A1050_a0020_HOOK_01
  Hook_Rematch_Phase_2_Active = 1ull << 57, // A1050_a0030_HOOK_02
  Hook_Rematch_Mid_Event_Complete = 1ull << 58, // A1050_a0035g
  Hook_Rematch_Phase_3_Active = 1ull << 59, // A1050_a0030_HOOK_03
  Hook_Rematch_Phase_4_Active = 1ull << 60, // A1050_a0040_HOOK_04
  Hook_Rematch_Late_Event_Started = 1ull << 61, // A1050_a0045g
  Hook_Rematch_Phase_5_Active = 1ull << 62, // A1050_a0050_HOOK_05
  Hook_Rematch_Phase_6_Active = 1ull << 63, // A1050_a0050_HOOK_06
};

enum class GameFlags_530 : unsigned long long
{
  Hook_Rematch_Late_Scene_Complete = 1ull << 0, // A1050_a0055g
  Hook_Rematch_Phase_7_Active = 1ull << 1, // A1050_a0060_HOOK_07
  Hook_Rematch_Resolved = 1ull << 2, // A1050_a0070
  Hook_Rematch_Route_Complete = 1ull << 3, // A1050E
  Hook_Rematch_Northern_Plains_Exit_Complete = 1ull << 5, // A1050_a0088g
  Facade_Well_Guide_Side_Event_Started = 1ull << 13, // SEID_1410_S0050_a0010_Start
  Desert_Well_Warp_1_Unlocked = 1ull << 14, // DESERT_WELL_WARP_01
  Desert_Well_Warp_2_Unlocked = 1ull << 15, // DESERT_WELL_WARP_02
  Desert_Well_Warp_3_Unlocked = 1ull << 16, // DESERT_WELL_WARP_03
  Desert_Well_Warp_4_Unlocked = 1ull << 17, // DESERT_WELL_WARP_04
  Facade_Well_Open_Side_Event_Complete = 1ull << 19, // EID_1410_a0050g
  Facade_Route_Started = 1ull << 21, // A1410S
  Facade_Route_Desert_Approach_Checkpoint = 1ull << 22, // A1410_a0020
  Facade_Sandstorm_Guide_Checkpoint = 1ull << 23, // A1410_a0040g
  Facade_Town_Guide_Checkpoint = 1ull << 24, // A1410_a0062
  Facade_Guide_Scene_015_Complete = 1ull << 25, // EID_1410_a0065g_015_End
  Facade_Guide_Scene_035_Started = 1ull << 28, // EID_1410_a0065g_035_Start
  Facade_Guide_Route_Checkpoint_Complete = 1ull << 29, // A1410_a0075g
  Facade_Boat_Guide_Skip_Branch_1_Complete = 1ull << 30, // EID_1410_a0100g_16_GuideSkip_01
  Facade_Boat_Guide_Skip_Branch_2_Complete = 1ull << 31, // EID_1410_a0100g_16_GuideSkip_02
  Facade_Boat_Guide_Sequence_Complete = 1ull << 37, // A1410_a0100g
  Facade_Route_Complete = 1ull << 38, // A1410E
  Facade_Desert_Radio_Prompt_Played = 1ull << 40, // A1410_a0010g
  Barren_Temple_Route_Started = 1ull << 47, // A1450S
  Barren_Temple_Route_First_Facade_Scene_Complete = 1ull << 48, // A1450_a0010g
  Barren_Temple_Route_Follow_Up_Complete = 1ull << 49, // A1450_a0025
  Barren_Temple_Route_Desert_Guide_Checkpoint = 1ull << 50, // A1450_a0040
  Barren_Temple_Route_Checkpoint_0050_Complete = 1ull << 51, // A1450_a0050
  Barren_Temple_Route_Checkpoint_0060_Complete = 1ull << 52, // A1450_a0060
  Barren_Temple_Route_Checkpoint_0065_Complete = 1ull << 53, // A1450_a0065
  Barren_Temple_Route_Checkpoint_0055_Complete = 1ull << 54, // A1450_a0055
  Barren_Temple_Route_Checkpoint_0070_Complete = 1ull << 55, // A1450_a0070
  Shahriyar_Fight_Phase_1_Active = 1ull << 56, // A1450_a0080_SHAHARIYARL_01
  Shahriyar_Fight_Phase_2_Checkpoint = 1ull << 57, // A1450_a0085_SHAHARIYARL_02
  Shahriyar_Fight_Phase_3_Checkpoint = 1ull << 58, // A1450_a0085_SHAHARIYARL_03
  Shahriyar_Defeated = 1ull << 59, // A1450_a0090
  Post_Shahriyar_Facade_Scene_Started = 1ull << 60, // A1450_a0095
  Post_Shahriyar_Facade_Sendoff_Complete = 1ull << 61, // A1450_a0107g
  Barren_Temple_Route_Complete = 1ull << 62, // A1450E
};

enum class GameFlags_538 : unsigned long long
{
  Barren_Temple_Room_1_Cleared = 1ull << 0, // DESERT_TEMPLE_ROOM_CLEAR_01
  Barren_Temple_Room_2_Cleared = 1ull << 1, // DESERT_TEMPLE_ROOM_CLEAR_02
  Barren_Temple_Room_3_Cleared = 1ull << 2, // DESERT_TEMPLE_ROOM_CLEAR_03
  Barren_Temple_Room_4_Cleared = 1ull << 3, // DESERT_TEMPLE_ROOM_CLEAR_04
  Barren_Temple_Room_5_Cleared = 1ull << 4, // DESERT_TEMPLE_ROOM_CLEAR_05
  Barren_Temple_Room_6_Cleared = 1ull << 5, // DESERT_TEMPLE_ROOM_CLEAR_06
  Barren_Temple_Room_7_Cleared = 1ull << 6, // DESERT_TEMPLE_ROOM_CLEAR_07
  Barren_Temple_Boss_Room_Cleared = 1ull << 7, // DESERT_TEMPLE_ROOM_CLEAR_08
  Barren_Temple_Desert_Guide_Installed = 1ull << 9, // EID_1450_a0030g_GuideSet
  Facade_Interlude_First_Checkpoint = 1ull << 14, // A1480_a0010
  Facade_Interlude_Second_Checkpoint = 1ull << 15, // A1480_a0020
  Forest_Of_Myth_Route_First_Village_State_Set = 1ull << 22, // EID_1500_a0005_010_02_Start
  Forest_Of_Myth_Route_First_Village_Scene_Complete = 1ull << 23, // EID_1500_a0005_010_01_End
  Forest_Of_Myth_Route_Yonah_Village_Follow_Up_Seen = 1ull << 24, // EID_1500_a0005_070_Start
  Forest_Of_Myth_Route_Library_Memo_Received = 1ull << 25, // EID_1500_a0005_080_Start
  Forest_Of_Myth_Magic_Tutorial_Complete = 1ull << 27, // EID_1500_a0020g_0010_End
  Forest_Of_Myth_Route_Northern_Plains_Return_Complete = 1ull << 28, // A1500_a0200_030
  Forest_Of_Myth_Route_Complete = 1ull << 29, // A1500E
  Forest_Dream_Branch_0108_Started = 1ull << 31, // EID_1500_a0108_0010_SN
  Forest_Dream_Branch_0108_And_0118_Resolved = 1ull << 35, // A1500_a0108
  Forest_Of_Myth_Important_Item_Event_Complete = 1ull << 36, // EID_1500_a0200_020_End
  Forest_Dream_NPC_Branch_0020_Complete = 1ull << 38, // EID_1500_a0020g_0020_End
  Forest_Dream_NPC_Branch_0030_Complete = 1ull << 39, // EID_1500_a0020g_0030_End
  Forest_Dream_Text_Branch_1_Complete = 1ull << 40, // SNID_1580_a0010_01_End
  Forest_Dream_Text_Branch_2_Complete = 1ull << 41, // SNID_1580_a0010_02_End
  Forest_Dream_Text_Branch_3_Complete = 1ull << 42, // SNID_1580_a0010_03_End
  Emils_Manor_Route_Started = 1ull << 51, // A1100S
  Manor_Route_First_Event_Started = 1ull << 52, // EID_1100_a0005g_010_Start
  Manor_Route_First_Event_Follow_Up_Complete = 1ull << 53, // A1100_a0005g_02
  Manor_Route_Checkpoint_0010_Complete = 1ull << 54, // A1100_a0010
  Manor_Route_Checkpoint_0020_Complete = 1ull << 55, // A1100_a0020
  Manor_Route_Checkpoint_0030_Complete = 1ull << 56, // A1100_a0030
  Manor_Route_Checkpoint_0040_Complete = 1ull << 57, // A1100_a0040
  Manor_Route_Checkpoint_0050_Complete = 1ull << 58, // A1100_a0050
  Manor_Route_Checkpoint_0055_Complete = 1ull << 59, // A1100_a0055
  Manor_Route_Checkpoint_0064_Complete = 1ull << 60, // A1100_a0064
  Manor_Route_Checkpoint_0070_Complete = 1ull << 61, // A1100_a0070
  Manor_Grimoire_Rubrum_Phase_1_Active = 1ull << 62, // A1100_RED_BOOK_01
  Manor_Grimoire_Rubrum_Phase_2_Active = 1ull << 63, // A1100_RED_BOOK_02
};

enum class GameFlags_540 : unsigned long long
{
  Manor_Late_Route_Scene_Complete = 1ull << 0, // A1100_a0090
  Manor_Route_Complete = 1ull << 1, // A1100E
  Manor_Key_Pickup_1_Collected = 1ull << 3, // GET_KEY_1
  Manor_Key_Pickup_2_Collected = 1ull << 4, // GET_KEY_2
  Manor_Key_Pickup_3_Collected = 1ull << 5, // GET_KEY_3
  Manor_Key_Pickup_4_Collected = 1ull << 6, // GET_KEY_4
  Southern_Plains_Manor_Look_Radio_Played = 1ull << 8, // SOUTH_SAG_Look_Radio
  Manor_a0035g_Scene_Started = 1ull << 10, // EID_1100_a0035g_01_Start
  Manor_Enemy_Room_Opened = 1ull << 11, // OPEN_ROOM
  Manor_Passageway_Enemy_05_Spawned = 1ull << 12, // PUT_ENEMY_PASSAGEWAY_05
  Manor_a0045g_Optional_Talk_Seen = 1ull << 14, // EID_1100_a0045g_02
  Village_Attack_Route_Started = 1ull << 21, // A2000S
  Village_Attack_Intro_Scene_Complete = 1ull << 22, // A2000_a0010
  Village_Attack_Follow_Up_Scene_Complete = 1ull << 23, // A2000_a0012
  Village_Attack_Route_a0025g_Started = 1ull << 24, // A2000_a0025g
  Village_Attack_a0025g_Start_State_Set = 1ull << 25, // A2000_a0025g_S
  Village_Attack_a0025g_End_State_Set = 1ull << 26, // A2000_a0025g_E
  Village_Attack_a0026g_Scene_Complete = 1ull << 27, // A2000_a0026g
  Village_Attack_Popola_Library_Checkpoint_Complete = 1ull << 28, // A2000_a0040
  Village_Attack_Jack_Route_Checkpoint_Complete = 1ull << 29, // A2000_a0046g
  Village_Attack_Jack_Route_a0055g_Complete = 1ull << 30, // A2000_a0055g
  Village_Jack_Of_Hearts_Phase_1_Active = 1ull << 31, // A2000_JACK_01
  Village_Jack_Of_Hearts_Phase_2_Active = 1ull << 32, // A2000_JACK_02
  Village_Jack_Route_a0065g_Complete = 1ull << 33, // A2000_a0065g
  Village_Jack_Of_Hearts_Phase_3_Active = 1ull << 34, // A2000_JACK_03
  Village_Jack_Route_a0067g_Complete = 1ull << 35, // A2000_a0067g
  Village_Jack_Of_Hearts_Phase_4_Active = 1ull << 36, // A2000_JACK_04
  Village_Attack_Route_a0087g_Complete = 1ull << 37, // A2000_a0087g
  Library_Black_Book_Lead_In_Complete = 1ull << 38, // A2000_a0090g
  Library_Black_Book_Route_Checkpoint_Complete = 1ull << 39, // A2000_a0105g
  Village_Jack_Of_Hearts_Final_Phase_Active = 1ull << 40, // A2000_JACK_07
  Library_Black_Book_Route_a0129g_Complete = 1ull << 41, // A2000_a0129g
  Black_Book_Phase_1_Active = 1ull << 42, // A2000_BLACK_01
  Black_Book_Phase_2_Active = 1ull << 43, // A2000_BLACK_02
  Village_Attack_Route_Complete = 1ull << 44, // A2000E
  Northern_Plains_A1900_Radio_1_Played = 1ull << 46, // A1900_01
  Northern_Plains_A1900_Radio_2_Played = 1ull << 47, // A1900_02
  Northern_Plains_A1900_Radio_3_Played = 1ull << 48, // A1900_03
};

enum class GameFlags_548 : unsigned long long
{
  Route_B_Barren_Temple_Law_Room_1_Cleared = 1ull << 25, // Clear_Law_Game_01
  Route_B_Barren_Temple_Law_Room_2_Cleared = 1ull << 26, // Clear_Law_Game_02
  Route_B_Barren_Temple_Law_Room_3_Cleared = 1ull << 27, // Clear_Law_Game_03
  Route_B_Barren_Temple_Law_Room_4_Cleared = 1ull << 28, // Clear_Law_Game_04
  Route_B_Barren_Temple_Law_Room_5_Cleared = 1ull << 29, // Clear_Law_Game_05
  Route_B_Barren_Temple_Law_Room_6_Cleared = 1ull << 30, // Clear_Law_Game_06
  Route_B_Barren_Temple_Law_Room_7_Cleared = 1ull << 31, // Clear_Law_Game_07
  Route_B_Barren_Temple_Law_Room_8_Cleared = 1ull << 32, // Clear_Law_Game_08
  Route_B_Lost_Shrine_Game_Room_1_Cleared = 1ull << 34, // CLEAR_GAMEROOM_01
  Route_B_Lost_Shrine_Game_Room_2_Cleared = 1ull << 35, // CLEAR_GAMEROOM_02
  Route_B_Lost_Shrine_Game_Room_3_Cleared = 1ull << 36, // CLEAR_GAMEROOM_03
  Route_B_Lost_Shrine_Game_Room_4_Cleared = 1ull << 37, // CLEAR_GAMEROOM_04
  Route_B_Lost_Shrine_Game_Room_5_Cleared = 1ull << 38, // CLEAR_GAMEROOM_05
  Route_B_Lost_Shrine_Game_Room_6_Cleared = 1ull << 39, // CLEAR_GAMEROOM_06
  Route_B_Lost_Shrine_Game_Room_7_Cleared = 1ull << 40, // CLEAR_GAMEROOM_07
  Route_B_Lost_Shrine_Game_Room_8_Cleared = 1ull << 41, // CLEAR_GAMEROOM_08
  Route_B_Village_Opening_Started = 1ull << 50, // B3000S
  Route_B_Village_Opening_a0015g_Complete = 1ull << 51, // B3000_a0015g
  Route_B_Village_Opening_a0020g_Branch_Complete = 1ull << 52, // B3000_a0020g_010
  Route_B_Village_Opening_a0035g_Complete = 1ull << 53, // B3000_a0035g
  Route_B_Library_Scene_a0038_Complete = 1ull << 54, // B3000_a0038
  Route_B_Village_Opening_Complete = 1ull << 55, // B3000E
  Route_B_Village_EID_3040_Event_Complete = 1ull << 57, // EID_3040_a0020
  Route_B_Field_Radio_State_000_Played = 1ull << 59, // B3000_000
  Route_B_Field_Radio_State_001_Played = 1ull << 60, // B3000_001
  Route_B_Field_Radio_State_002_Played = 1ull << 61, // B3000_002
};

enum class GameFlags_550 : unsigned long long
{
  Route_B_Emils_Manor_Route_Started = 1ull << 6, // B3100S
  Route_B_Manor_Approach_Event_Complete = 1ull << 7, // B3100_a0005
  Route_B_Manor_Halua_Snow_Talk_Complete = 1ull << 8, // B3100_a0010
  Route_B_Manor_a0020_Scene_Complete = 1ull << 9, // B3100_a0020
  Route_B_Underground_a0027g_Scene_Complete = 1ull << 10, // B3100_a0027g
  Route_B_Underground_a0030g_Scene_Complete = 1ull << 11, // B3100_a0030g
  Route_B_Underground_a0040g_Scene_Complete = 1ull << 12, // B3100_a0040g
  Route_B_Halua_Underground_State_Active = 1ull << 13, // B3100_HALUA_01
  Route_B_Emils_Manor_Route_Complete = 1ull << 14, // B3100E
  Route_B_Underground_B3F_Final_Door_Opened = 1ull << 25, // GM_B3F_OpenDoor
  Route_B_Underground_BL1_291_Enemy_Spawned = 1ull << 26, // snow_Enemy_BL1_291_put
  Route_B_Library_Jack_Route_Started = 1ull << 37, // B3200S
  Route_B_Library_Jack_Intro_Started = 1ull << 38, // B3200_a0010
  Route_B_Library_Jack_Phase_1_Active = 1ull << 39, // B3200_JACK_01
  Route_B_Library_Jack_a0040_Scene_Complete = 1ull << 40, // EID_3200_a0040_End
  Route_B_Village_Library_a0060_Route_Checkpoint = 1ull << 41, // B3200_a0060
  Route_B_Post_Jack_a0500g_01_Complete = 1ull << 42, // B3200_a0500g_01
  Route_B_Post_Jack_a0500g_02_Complete = 1ull << 43, // B3200_a0500g_02
  Route_B_Post_Jack_a0500g_03_Complete = 1ull << 44, // B3200_a0500g_03
  Route_B_Post_Jack_a0500g_03_Start_Callback_Seen = 1ull << 45, // EID_3200_a0500g_03_Start
  Route_B_Boatman_Sendoh_First_Talk_State_Set = 1ull << 46, // B3200_a0500g_05
  Route_B_Library_Jack_Route_Complete = 1ull << 47, // B3200E
  Route_B_Jack_Sound_Novel_Skip_Selected = 1ull << 48, // EID_3200_Novel_Skip
  Route_B_Devola_Song_Layer_Enabled = 1ull << 49, // B3200_Debol_Song_Layer
  Route_B_Lost_Shrine_Route_Started = 1ull << 57, // B4100S
  Route_B_Lost_Shrine_Approach_a0005g_Complete = 1ull << 58, // B4100_a0005g
  Route_B_Lost_Shrine_Approach_a0007_Complete = 1ull << 59, // B4100_a0007
  Route_B_Lost_Shrine_a0010_Complete = 1ull << 60, // B4100_a0010
  Route_B_Lost_Shrine_a0030_Complete = 1ull << 61, // B4100_a0030
  Route_B_Lost_Shrine_Door_Branch_010_Complete = 1ull << 62, // B4100_a0020g_010
  Route_B_Lost_Shrine_Door_Branch_020_Complete = 1ull << 63, // B4100_a0020g_020
};

enum class GameFlags_558 : unsigned long long
{
  Route_B_Lost_Shrine_a0040g_Complete = 1ull << 0, // B4100_a0040g
  Route_B_Lost_Shrine_a0050_Complete = 1ull << 1, // B4100_a0050
  Route_B_Lost_Shrine_a0060g_Complete = 1ull << 2, // B4100_a0060g
  Route_B_Gretel_Phase_1_Active = 1ull << 3, // B4100_GRETEL_01
  Route_B_Gretel_Phase_2_Active = 1ull << 4, // B4100_GRETEL_02
  Route_B_Kaine_Lost_Shrine_Scene_Active = 1ull << 5, // B4100_KAINE_01
  Route_B_Lost_Shrine_a0100_Complete = 1ull << 6, // B4100_a0100
  Route_B_Lost_Shrine_a0120_Complete = 1ull << 7, // B4100_a0120
  Route_B_Lost_Shrine_Route_Complete = 1ull << 8, // B4100E
  Route_B_Junk_Heap_Robot_Route_Started = 1ull << 23, // B4030S
  Route_B_Junk_Heap_a0020_Complete = 1ull << 24, // B4030_a0020
  Route_B_Junk_Heap_a0025g_Complete = 1ull << 25, // B4030_a0025g
  Route_B_Junk_Heap_a0030_Complete = 1ull << 26, // B4030_a0030
  Route_B_Junk_Heap_a0040_Complete = 1ull << 27, // B4030_a0040
  Route_B_Junk_Heap_a0050_Complete = 1ull << 28, // B4030_a0050
  Route_B_Junk_Heap_a0075g_Collection_Phase_Active = 1ull << 29, // B4030_a0075g
  Route_B_Junk_Heap_Memory_Alloy_Branch_010_Complete = 1ull << 30, // B4030_a0075g_010
  Route_B_Junk_Heap_a0075g_Radio_02_Played = 1ull << 32, // B4030_a0075g_RW02
  Route_B_Junk_Heap_a0080_Complete = 1ull << 33, // B4030_a0080
  Route_B_Junk_Heap_First_Half_Complete = 1ull << 34, // B4030_a0085
  Route_B_Junk_Heap_Second_Half_Started = 1ull << 35, // B4030_a0086
  Route_B_Junk_Heap_a0087_Complete = 1ull << 36, // B4030_a0087
  Route_B_Junk_Heap_P33010_Enemy_Defeated = 1ull << 37, // B4030_P33010_01
  Route_B_Junk_Heap_P33020_Enemy_Defeated = 1ull << 38, // B4030_P33020_01
  Route_B_Junk_Heap_Cleo_State_Active = 1ull << 39, // B4030_CLEO_01
  Route_B_Junk_Heap_a0130_Complete = 1ull << 40, // B4030_a0130
  Route_B_Junk_Heap_Route_Complete = 1ull << 41, // B4030E
  Route_B_Junk_Heap_P32_Room_1_Cleared = 1ull << 42, // B4030_P32_01
  Route_B_Junk_Heap_P32_Room_2_Cleared = 1ull << 43, // B4030_P32_02
  Route_B_Junk_Heap_P32_Room_3_Cleared = 1ull << 44, // B4030_P32_03
  Route_B_Junk_Heap_a0089g_Start_Callback_Seen = 1ull << 45, // EID_4030_a0089g_Start
  Route_B_Desert_Wolf_Route_a0005g_010_Complete = 1ull << 61, // B4230_a0005g_010
  Route_B_Desert_Wolf_Route_a0005g_020_Complete = 1ull << 62, // B4230_a0005g_020
  Route_B_Desert_Wolf_Route_a0005g_030_Complete = 1ull << 63, // B4230_a0005g_030
};

enum class GameFlags_560 : unsigned long long
{
  Route_B_Desert_Wolf_Route_Started = 1ull << 0, // B4230S
  Route_B_Desert_Field_a0010_Complete = 1ull << 1, // B4230_a0010
  Route_B_Facade_a0020_Complete = 1ull << 2, // B4230_a0020
  Route_B_Desert_Field_a0030_Complete = 1ull << 3, // B4230_a0030
  Route_B_Facade_a0045g_Talk_Complete = 1ull << 4, // B4230_a0045g
  Route_B_Facade_a0050_Complete = 1ull << 5, // B4230_a0050
  Route_B_Desert_Field_a0070_Complete = 1ull << 6, // B4230_a0070
  Route_B_Facade_a0085g_Complete = 1ull << 7, // B4230_a0085g
  Route_B_Village_a0097g_Bridge_Complete = 1ull << 9, // B4230_a0097g
  Route_B_Facade_a0098_Complete = 1ull << 10, // B4230_a0098
  Route_B_Desert_Field_a0110_Complete = 1ull << 11, // B4230_a0110
  Route_B_Roc_Battle_Started = 1ull << 12, // B4230_ROC_01
  Route_B_Roc_Battle_Won = 1ull << 13, // B4230_a0160
  Route_B_Desert_Wolf_Route_Complete = 1ull << 14, // B4230E
  Route_B_Facade_a0082_Event_Complete = 1ull << 16, // EID_4230_a0082_End
  Route_B_Desert_Field_Radio_000_Played = 1ull << 18, // B4230_000
  Route_B_Desert_Field_Radio_001_Played = 1ull << 19, // B4230_001
  Route_B_Desert_Field_a0010g_Talk_Complete = 1ull << 21, // EID_4230_a0010g_End
  Route_B_Desert_Field_a0020g_Talk_Complete = 1ull << 22, // EID_4230_a0020g_End
  Route_B_Wendy_Aerie_Route_Started = 1ull << 27, // B4430S
  Route_B_Wendy_Village_a0005g_Complete = 1ull << 28, // B4430_a0005g
  Route_B_Wendy_North_Field_a0005g_02_Complete = 1ull << 29, // B4430_a0005g_02
  Route_B_Wendy_a0010_Complete = 1ull << 30, // B4430_a0010
  Route_B_Wendy_a0020g_Complete = 1ull << 31, // EID_4430_a0020g_01_End
  Route_B_Wendy_a0060_Started = 1ull << 32, // EID_4430_a0060_01_Start
  Route_B_Wendy_Battle_Setup_Started = 1ull << 33, // EID_4430_a0080_01_Start
  Route_B_Wendy_Battle_Continue_State_Set = 1ull << 34, // EID_4430_a0080_Continue
  Emil_Snow_Staged_For_Wendy_Battle = 1ull << 35, // SNOW_SET
  Wendy_Battle_Continue_Checkpoint_03_Set = 1ull << 36, // BOSS_MODE02
  Route_B_Wendy_Battle_Post_Event_Complete = 1ull << 37, // EID_4430_a0084_01_End
  Route_B_Wendy_a0110g_Complete = 1ull << 38, // B4430_a0110g
  Route_B_Wendy_Aerie_Route_Complete = 1ull << 39, // B4430E
  Route_B_Forest_Route_Started = 1ull << 57, // B4500S
  Route_B_Forest_Checkpoint_020_Complete = 1ull << 59, // B4500_020
  Route_B_Forest_Route_Complete = 1ull << 60, // B4500E
  Route_B_Forest_Radio_000_Played = 1ull << 62, // B4500_000
};

enum class GameFlags_568 : unsigned long long
{
  Route_B_Final_Departure_Started = 1ull << 8, // B5000S
  Route_B_Final_Departure_a0020_Complete = 1ull << 9, // B5000_a0020
  Route_B_Final_Departure_a0030_Complete = 1ull << 10, // B5000_a0030
  Route_B_Final_Departure_Complete = 1ull << 11, // B5000E
  Route_B_Final_Departure_Radio_Played = 1ull << 13, // EID_5000_a0015_Radio01
  Shadowlords_Castle_Route_Started = 1ull << 23, // B6000S
  Shadowlords_Castle_a0005g_010_Complete = 1ull << 24, // B6000_a0005g_010
  Shadowlords_Castle_a0005g_020_Complete = 1ull << 25, // B6000_a0005g_020
  Shadowlords_Castle_Bird_Question_Setup_Seen = 1ull << 26, // B6000_a0015g_005
  Shadowlords_Castle_Passage_Frontyard_Checkpoint_Set = 1ull << 27, // B6000_a0015g_010
  Shadowlords_Castle_Bird_Question_Succeeded = 1ull << 28, // B6000_a0015g
  Shadowlords_Castle_Bird_Question_Failed = 1ull << 29, // B6000_a0015g_020
  Shadowlords_Castle_Devola_Popola_Checkpoint_1 = 1ull << 31, // B6000_DEPOPO_01
  Shadowlords_Castle_Devola_Popola_Checkpoint_2 = 1ull << 32, // B6000_DEPOPO_02
  Shadowlords_Castle_Goose_Intro_Complete = 1ull << 33, // B6000_a0066g
  Goose_Battle_Continue_Checkpoint_1 = 1ull << 34, // GOOSE_CONTINUE_01
  Goose_Battle_Continue_Checkpoint_2 = 1ull << 35, // GOOSE_CONTINUE_02
  Goose_Battle_Continue_Checkpoint_3 = 1ull << 36, // GOOSE_CONTINUE_03
  Goose_Battle_Continue_Checkpoint_4 = 1ull << 37, // GOOSE_CONTINUE_04
  Goose_Battle_Continue_Checkpoint_5 = 1ull << 38, // GOOSE_CONTINUE_05
  Shadowlords_Castle_Post_Goose_a0100_Complete = 1ull << 39, // EID_6000_a0100_01_End
  Shadowlords_Castle_Devola_Battle_Complete = 1ull << 40, // B6000_DEBOL_01
  Shadowlords_Castle_Popola_Battle_Complete = 1ull << 41, // EID_6000_a0122_01_End
  Shadowlords_Castle_Late_a0125_Event_Complete = 1ull << 42, // EID_6000_a0125_01_End
  Shadowlords_Castle_Late_a0130_Event_Complete = 1ull << 43, // EID_6000_a0130_01_End
  Shadowlords_Castle_Post_Yonah_Checkpoint_Set = 1ull << 44, // EID_6000_a0150_01_End
  Black_Book_Placement_Guard_Set = 1ull << 45, // PUT_BLACK
  Black_Book_Battle_Started = 1ull << 46, // Black_Book_Battle_Start
  Shadowlord_Phase_1_Started = 1ull << 47, // KING_MODE_01
  Shadowlord_Phase_2_Started = 1ull << 48, // KING_MODE_02
  Shadowlord_Phase_3_Started = 1ull << 49, // KING_MODE_03
  Shadowlords_Castle_Route_Complete = 1ull << 50, // B6000E
  Shadowlords_Castle_Goose_Skip_End_Checkpoint_Set = 1ull << 52, // EID_6000_a0060_01_SkipEnd
  Shadowlords_Castle_a0065_Event_Complete = 1ull << 53, // EID_6000_a0065_01_End
};

enum class GameFlags_570 : unsigned long long
{
  Late_Kaine_Battle_Checkpoint_1 = 1ull << 8, // B9000_KAINE_01
  Late_Kaine_Battle_Checkpoint_2 = 1ull << 9, // B9000_KAINE_02
  Late_Kaine_Battle_Complete = 1ull << 10, // B9000_KAINE_END
  Ending_A_Cleared = 1ull << 22, // B7000E
  Ending_B_Cleared = 1ull << 23, // B8000E
  Ending_C_Cleared = 1ull << 24, // B9000E
  Ending_D_Cleared = 1ull << 25, // B9100E
  DLC_Costume_1_Unlock_Message_Seen = 1ull << 32, // DLC_Costume_1_Unlock_Info_Seen
  DLC_Costume_2_Unlock_Message_Seen = 1ull << 33, // DLC_Costume_2_Unlock_Info_Seen
  DLC_Costume_1_Unlocked = 1ull << 34, // DLC_Costume_1_Unlocked
  DLC_Costume_2_Unlocked = 1ull << 35, // DLC_Costume_2_Unlocked
  DLC_Final_Clear_Bonus_Received = 1ull << 36, // DLC_Final_Clear_Bonus_Received
};

enum class GameFlags_580 : unsigned long long
{
  Route_B_Wendy_North_Field_a0005g_03_Complete = 1ull << 31, // B4430_a0005g_03
  Savepoint_Locked_By_Nearby_Enemies = 1ull << 39, // Savepoint_Locked_By_Nearby_Enemies
};

enum class GameFlags_5A0 : unsigned long long
{
  Next_Route_Junk_Heap_First_Half = 1ull << 6, // TO_EID_4030_010
  Next_Route_Junk_Heap_Second_Half = 1ull << 7, // TO_EID_4030_020
  Next_Route_Desert_Wolves_First_Half = 1ull << 8, // TO_EID_4230_010
  Next_Route_Desert_Wolves_Second_Half = 1ull << 9, // TO_EID_4230_020
  Next_Route_Wendy_Aerie = 1ull << 10, // TO_EID_4430
  Next_Route_Forest_Of_Myth = 1ull << 11, // TO_EID_4500
  Junk_Heap_First_Half_Route_Complete = 1ull << 12, // TO_EID_4030_010_END
  Junk_Heap_Second_Half_Route_Available = 1ull << 13, // TO_EID_4030_020_START
  Main_Quest_Selection_Return_Guard = 1ull << 14, // SELECTION_LOOK
  Next_Event_A0100_a0016g = 1ull << 19, // TO_EID_0100_a0016g
  Next_Event_A0100_a0038g = 1ull << 20, // TO_EID_0100_a0038g
  Next_Event_A0100_a0045g = 1ull << 21, // TO_EID_0100_a0045g
  Next_Event_A0100_a0055g = 1ull << 22, // TO_EID_0100_a0055g
  Next_Event_A0100_a0060 = 1ull << 23, // TO_EID_0100_a0060
  Next_Event_A0300_a0015g = 1ull << 24, // TO_EID_0300_a0015g
  Next_Event_A0300_a0020 = 1ull << 25, // TO_EID_0300_a0020
  Next_Event_A1050_a0005g = 1ull << 26, // TO_EID_1050_a0005g
  Next_Event_A1050_a0035g = 1ull << 27, // TO_EID_1050_a0035g
  Next_Event_A1050_a0045g = 1ull << 28, // TO_EID_1050_a0045g
  Next_Event_A1050_a0055g = 1ull << 29, // TO_EID_1050_a0055g
  Next_Event_A1050_a0070 = 1ull << 30, // TO_EID_1050_a0070
  Next_Event_A1100_a0005g = 1ull << 31, // TO_EID_1100_a0005g
  Next_Event_A1240_a0020g = 1ull << 33, // TO_EID_1240_a0020g
  Next_Event_A1270_a0010 = 1ull << 34, // TO_EID_1270_a0010
  Next_Event_A1320_a0005 = 1ull << 35, // TO_EID_1320_a0005
  Next_Event_A1320_a0020 = 1ull << 36, // TO_EID_1320_a0020
  Next_Event_A1320_a0025g = 1ull << 37, // TO_EID_1320_a0025g
  Next_Event_A1350_a0005g = 1ull << 39, // TO_EID_1350_a0005g
  Next_Event_A1350_a0010g = 1ull << 40, // TO_EID_1350_a0010g
  Next_Event_A1350_a0020 = 1ull << 41, // TO_EID_1350_a0020
  Next_Event_A1350_a0034 = 1ull << 42, // TO_EID_1350_a0034
  Next_Event_A1410_a0010g = 1ull << 43, // TO_EID_1410_a0010g
  Next_Event_A1450_a0005g = 1ull << 44, // TO_EID_1450_a0005g
  Next_Event_A1450_a0025 = 1ull << 45, // TO_EID_1450_a0025
  Next_Event_A1450_a0095 = 1ull << 46, // TO_EID_1450_a0095
  Next_Event_A2000_a0012 = 1ull << 47, // TO_EID_2000_a0012
  Next_Event_A2000_a0025g = 1ull << 48, // TO_EID_2000_a0025g
  Next_Event_A1330_a0100 = 1ull << 49, // TO_EID_1330_a0100
  Next_Event_A1340_a0100 = 1ull << 50, // TO_EID_1340_a0100
  Next_Route_B_Event_B3000_a0035g = 1ull << 51, // TO_EID_3000_a0035g
  Next_Route_B_Event_B3000_a0040 = 1ull << 52, // TO_EID_3000_a0040
  Next_Route_B_Event_B3200_a0060 = 1ull << 54, // TO_EID_3200_a0060
  Next_Route_B_Event_B4030_a0005g = 1ull << 55, // TO_EID_4030_a0005g
  Next_Route_B_Event_B4030_a0050 = 1ull << 56, // TO_EID_4030_a0050
  Next_Route_B_Event_B4030_a0075g = 1ull << 57, // TO_EID_4030_a0075g
  Next_Route_B_Event_B4230_a0097g = 1ull << 61, // TO_EID_4230_a0097g
  Next_Route_B_Event_B4230_a0105 = 1ull << 62, // TO_EID_4230_a0105
  Next_Route_B_Event_B4430_a0005g = 1ull << 63, // TO_EID_4430_a0005g
};

enum class GameFlags_5A8 : unsigned long long
{
  Next_Route_B_Event_B4430_a0083g = 1ull << 0, // TO_EID_4430_a0083g
  Next_Route_B_Event_B4430_a0084g = 1ull << 1, // TO_EID_4430_a0084g
  Next_Route_B_Event_B5000_a0010 = 1ull << 2, // TO_EID_5000_a0010
  Next_Route_B_Event_B5000_a0020 = 1ull << 3, // TO_EID_5000_a0020
  Next_Route_B_Event_B4030_a0087 = 1ull << 4, // TO_EID_4030_a0087
  Current_Nier_House_Item_Reward_1_Collected = 1ull << 11, // Nier_House_Item_Current_Set_Reward_1_Collected
  Current_Nier_House_Item_Reward_2_Collected = 1ull << 12, // Nier_House_Item_Current_Set_Reward_2_Collected
  Current_Nier_House_Item_Reward_3_Collected = 1ull << 13, // Nier_House_Item_Current_Set_Reward_3_Collected
  Current_Nier_House_Item_Reward_4_Collected = 1ull << 14, // Nier_House_Item_Current_Set_Reward_4_Collected
  Nier_House_Item_Set_01_Initialized = 1ull << 16, // Nier_House_Item_Set_01_Initialized
  Nier_House_Item_Set_02_Initialized = 1ull << 17, // Nier_House_Item_Set_02_Initialized
  Nier_House_Item_Set_03_Initialized = 1ull << 18, // Nier_House_Item_Set_03_Initialized
  Nier_House_Item_Set_04_Initialized = 1ull << 19, // Nier_House_Item_Set_04_Initialized
  Nier_House_Item_Set_05_Initialized = 1ull << 20, // Nier_House_Item_Set_05_Initialized
  Nier_House_Item_Set_06_Initialized = 1ull << 21, // Nier_House_Item_Set_06_Initialized
  Nier_House_Item_Set_07_Initialized = 1ull << 22, // Nier_House_Item_Set_07_Initialized
  Nier_House_Item_Set_08_Initialized = 1ull << 23, // Nier_House_Item_Set_08_Initialized
  Nier_House_Item_Set_09_Initialized = 1ull << 24, // Nier_House_Item_Set_09_Initialized
  Nier_House_Item_Set_10_Initialized = 1ull << 25, // Nier_House_Item_Set_10_Initialized
  Nier_House_Item_Set_11_Initialized = 1ull << 26, // Nier_House_Item_Set_11_Initialized
  Nier_House_Item_Set_12_Initialized = 1ull << 27, // Nier_House_Item_Set_12_Initialized
  Nier_House_Item_Set_13_Initialized = 1ull << 28, // Nier_House_Item_Set_13_Initialized
  Nier_House_Item_Set_14_Initialized = 1ull << 29, // Nier_House_Item_Set_14_Initialized
  Nier_House_Item_Set_15_Initialized = 1ull << 30, // Nier_House_Item_Set_15_Initialized
  Nier_House_Item_Set_16_Initialized = 1ull << 31, // Nier_House_Item_Set_16_Initialized
  Nier_House_Item_Set_17_Initialized = 1ull << 32, // Nier_House_Item_Set_17_Initialized
  Seafront_Lighthouse_Item_Placed = 1ull << 41, // Lighthouse_Item01
  Retry_Checkpoint_001 = 1ull << 57, // RETRY_FLAG_001
  Retry_Checkpoint_002 = 1ull << 58, // RETRY_FLAG_002
  Retry_Checkpoint_003 = 1ull << 59, // RETRY_FLAG_003
  Retry_Checkpoint_004 = 1ull << 60, // RETRY_FLAG_004
  Retry_Checkpoint_005 = 1ull << 61, // RETRY_FLAG_005
  Retry_Checkpoint_006 = 1ull << 62, // RETRY_FLAG_006
  Retry_Checkpoint_007 = 1ull << 63, // RETRY_FLAG_007
};

enum class GameFlags_5B0 : unsigned long long
{
  Retry_Checkpoint_008 = 1ull << 0, // RETRY_FLAG_008
  Retry_Checkpoint_009 = 1ull << 1, // RETRY_FLAG_009
  Retry_Checkpoint_010 = 1ull << 2, // RETRY_FLAG_010
  Retry_Checkpoint_011 = 1ull << 3, // RETRY_FLAG_011
  Retry_Checkpoint_012 = 1ull << 4, // RETRY_FLAG_012
  Retry_Checkpoint_013 = 1ull << 5, // RETRY_FLAG_013
  Retry_Checkpoint_014 = 1ull << 6, // RETRY_FLAG_014
  Retry_Checkpoint_015 = 1ull << 7, // RETRY_FLAG_015
  Temporary_Flag_01 = 1ull << 24, // TempFlag01
  Temporary_Flag_02 = 1ull << 25, // TempFlag02
  Temporary_Flag_05 = 1ull << 28, // TempFlag05
};

enum class GameFlags_5B8 : unsigned long long
{
  Player_Name_Check_Succeeded = 1ull << 59, // Name_Judge_Success
};

enum class GameFlags_5C0 : unsigned long long
{
  Herbal_Remedies = 1ull << 28, // SQF_0100_s0020_S
  Herbal_Remedies_Completed = 1ull << 29, // SQF_0100_s0020_E
  The_Gatekeepers_Errand = 1ull << 31, // SQF_0100_s0050_S
  The_Gatekeepers_Errand_Completed = 1ull << 33, // SQF_0100_s0050_E
  The_Lost_Eggs = 1ull << 35, // SQF_0100_s0070_S
  The_Lost_Eggs_Stage_01 = 1ull << 36, // SQF_0100_s0070_01
  The_Lost_Eggs_Completed = 1ull << 39, // SQF_0100_s0070_E
  Old_Fashioned_Home_Cooking = 1ull << 41, // SQF_0300_s0010_S
  Old_Fashioned_Home_Cooking_Completed = 1ull << 43, // SQF_0300_s0010_E
  Shopping_List = 1ull << 45, // SQF_0300_s0020_S
  Shopping_List_Completed = 1ull << 47, // SQF_0300_s0020_E
  Book_Smarts = 1ull << 49, // SQF_0300_s0030
  Book_Smarts_Stage_01 = 1ull << 50, // SQF_0300_s0030_01
  Book_Smarts_Stage_02 = 1ull << 51, // SQF_0300_s0030_02
  Book_Smarts_Stage_03 = 1ull << 52, // SQF_0300_s0030_03
  Book_Smarts_Completed = 1ull << 53, // SQF_0300_s0030_E
  The_Tavern_Keepers_Grandmother_Start_Radio = 1ull << 54, // SQF_0300_s0040_SRA
  The_Tavern_Keepers_Grandmother = 1ull << 55, // SQF_0300_s0040_S
  The_Tavern_Keepers_Grandmother_Stage_01 = 1ull << 56, // SQF_0300_s0040_01
  The_Tavern_Keepers_Grandmother_Completed = 1ull << 58, // SQF_0300_s0040_E
  A_Return_to_Shopping = 1ull << 60, // SQF_0300_s0080_S
  A_Return_to_Shopping_Completed = 1ull << 62, // SQF_0300_s0080_E
  Yonahs_Cooking_Start_Radio = 1ull << 63, // SQF_0300_s0090_SRA
};

enum class GameFlags_5C8 : unsigned long long
{
  Yonahs_Cooking = 1ull << 0, // SQF_0300_s0090_S
  Yonahs_Cooking_Completed = 1ull << 1, // SQF_0300_s0090_E
  Boar_Hunt = 1ull << 3, // SQF_9900_s0010
  Boar_Hunt_Stage_01 = 1ull << 4, // SQF_9900_s0010_01
  Boar_Hunt_Stage_02 = 1ull << 5, // SQF_9900_s0010_02
  Boar_Hunt_Completed = 1ull << 6, // SQF_9900_s0010_E
  On_the_Wings_of_Eagles = 1ull << 8, // SQF_1000_s0010_S
  On_the_Wings_of_Eagles_Stage_01 = 1ull << 9, // SQF_1000_s0010_01
  On_the_Wings_of_Eagles_Stage_02 = 1ull << 10, // SQF_1000_s0010_02
  On_the_Wings_of_Eagles_Completed = 1ull << 12, // SQF_1000_s0010_E
  Fragile_Delivery = 1ull << 14, // SQF_1000_s0020
  Fragile_Delivery_Stage_02 = 1ull << 16, // SQF_1000_s0020_02
  Fragile_Delivery_Completed = 1ull << 18, // SQF_1000_s0020_E
  Fragile_Delivery_2_Available = 1ull << 19, // SQF_1320_s0010_O
  Fragile_Delivery_2 = 1ull << 20, // SQF_1320_s0010
  Fragile_Delivery_2_Stage_02 = 1ull << 22, // SQF_1320_s0010_02
  Fragile_Delivery_2_Stage_03 = 1ull << 23, // SQF_1320_s0010_03
  Fragile_Delivery_2_Completed = 1ull << 24, // SQF_1320_s0010_E
  The_Fishermans_Gambit = 1ull << 26, // SQF_1320_s0020_S
  The_Fishermans_Gambit_Completed = 1ull << 27, // SQF_1320_s0020_E
  The_Fishermans_Gambit_Part_2 = 1ull << 29, // SQF_1320_s0040_S
  The_Fishermans_Gambit_Part_2_Completed = 1ull << 30, // SQF_1320_s0040_E
  The_Fishermans_Gambit_Part_3 = 1ull << 32, // SQF_1320_s0140_S
  The_Fishermans_Gambit_Part_3_Completed = 1ull << 33, // SQF_1320_s0140_E
  The_Fishermans_Gambit_Part_4 = 1ull << 35, // SQF_1320_s0150_S
  The_Fishermans_Gambit_Part_4_Completed = 1ull << 36, // SQF_1320_s0150_E
  The_Fishermans_Gambit_Part_5 = 1ull << 38, // SQF_1320_s0160_S
  The_Fishermans_Gambit_Part_5_Completed = 1ull << 39, // SQF_1320_s0160_E
  The_Ballad_of_the_Twins_Stage_05 = 1ull << 40, // SQF_1320_s0210_05
  The_Ballad_of_the_Twins = 1ull << 41, // SQF_1320_s0210
  The_Ballad_of_the_Twins_Stage_01 = 1ull << 42, // SQF_1320_s0210_01
  The_Ballad_of_the_Twins_Stage_02 = 1ull << 43, // SQF_1320_s0210_02
  The_Ballad_of_the_Twins_Stage_03 = 1ull << 44, // SQF_1320_s0210_03
  The_Ballad_of_the_Twins_Stage_04 = 1ull << 45, // SQF_1320_s0210_04
  The_Ballad_of_the_Twins_Completed = 1ull << 46, // SQF_1320_s0210_E
  A_Dog_Astray = 1ull << 48, // SQF_1320_s0220
  A_Dog_Astray_Stage_01 = 1ull << 49, // SQF_1320_s0220_01
  A_Dog_Astray_Stage_02 = 1ull << 50, // SQF_1320_s0220_02
  A_Dog_Astray_Completed = 1ull << 51, // SQF_1320_s0220_E
  The_New_Merchant_in_Town = 1ull << 53, // SQF_1320_s0230
  The_New_Merchant_in_Town_Stage_01 = 1ull << 54, // SQF_1320_s0230_01
  The_New_Merchant_in_Town_Stage_02 = 1ull << 55, // SQF_1320_s0230_02
  The_New_Merchant_in_Town_Stage_03 = 1ull << 56, // SQF_1320_s0230_03
  The_New_Merchant_in_Town_Completed = 1ull << 57, // SQF_1320_s0230_E
  Seafront_Subquest_1350_0010_Stage_01 = 1ull << 60, // SQF_1350_s0010_01
  Seafront_Subquest_1350_0010_Stage_02 = 1ull << 61, // SQF_1350_s0010_02
  Seafront_Subquest_1350_0010_Completed = 1ull << 62, // SQF_1350_s0010_E
};

enum class GameFlags_5D0 : unsigned long long
{
  Seafront_Subquest_1350_0011_Stage_01 = 1ull << 1, // SQF_1350_s0011_01
  Seafront_Subquest_1350_0011_Completed = 1ull << 2, // SQF_1350_s0011_E
  Yonahs_Gift_Available = 1ull << 3, // SQF_1050_s0060_O
  Yonahs_Gift = 1ull << 4, // SQF_1050_s0060
  Yonahs_Gift_Stage_03 = 1ull << 7, // SQF_1050_s0060_03
  Yonahs_Gift_Stage_05 = 1ull << 9, // SQF_1050_s0060_05
  Yonahs_Gift_Completed = 1ull << 11, // SQF_1050_s0060_E
  Letter_to_a_Lover = 1ull << 13, // SQF_1050_s0070
  Letter_to_a_Lover_Stage_01 = 1ull << 14, // SQF_1050_s0070_01
  Letter_to_a_Lover_Stage_02 = 1ull << 15, // SQF_1050_s0070_02
  Letter_to_a_Lover_Completed = 1ull << 16, // SQF_1050_s0070_E
  A_Signature_Dish_Radio = 1ull << 17, // SQF_1350_s0020_RA
  A_Signature_Dish = 1ull << 18, // SQF_1350_s0020_S
  A_Signature_Dish_Completed = 1ull << 20, // SQF_1350_s0020_E
  Bon_Appetit = 1ull << 22, // SQF_1350_s0030_S
  Bon_Appetit_Stage_01 = 1ull << 23, // SQF_1350_s0030_01
  Bon_Appetit_Stage_02 = 1ull << 24, // SQF_1350_s0030_02
  Bon_Appetit_Stage_02_Radio = 1ull << 25, // SQF_1350_s0030_02RA
  Bon_Appetit_Completed = 1ull << 26, // SQF_1350_s0030_E
  Fragile_Delivery_3_Available = 1ull << 27, // SQF_1410_s0020_O
  Fragile_Delivery_3 = 1ull << 28, // SQF_1410_s0020
  Fragile_Delivery_3_Stage_02 = 1ull << 30, // SQF_1410_s0020_02
  Fragile_Delivery_3_Stage_03 = 1ull << 31, // SQF_1410_s0020_03
  Fragile_Delivery_3_Completed = 1ull << 32, // SQF_1410_s0020_E
  The_Tangled_Message_Stage_00 = 1ull << 33, // SQF_1410_s0030_00
  The_Tangled_Message = 1ull << 34, // SQF_1410_s0030
  The_Tangled_Message_Stage_01 = 1ull << 35, // SQF_1410_s0030_01
  The_Tangled_Message_Stage_02 = 1ull << 36, // SQF_1410_s0030_02
  The_Tangled_Message_Stage_03 = 1ull << 37, // SQF_1410_s0030_03
  The_Tangled_Message_Stage_04 = 1ull << 38, // SQF_1410_s0030_04
  The_Tangled_Message_Completed = 1ull << 39, // SQF_1410_s0030_E
  Item_Unknown = 1ull << 44, // SQF_1410_s0070_S
  Item_Unknown_Completed = 1ull << 46, // SQF_1410_s0070_E
  The_Runaway_Son = 1ull << 48, // SQF_1410_s0130
  The_Runaway_Son_Stage_01 = 1ull << 49, // SQF_1410_s0130_01
  The_Runaway_Son_Stage_02 = 1ull << 50, // SQF_1410_s0130_02
  The_Runaway_Son_Stage_03 = 1ull << 51, // SQF_1410_s0130_03
  The_Runaway_Son_Stage_04 = 1ull << 52, // SQF_1410_s0130_04
  The_Runaway_Son_Stage_05 = 1ull << 53, // SQF_1410_s0130_05
  The_Runaway_Son_Stage_06 = 1ull << 54, // SQF_1410_s0130_06
  The_Runaway_Son_Stage_07 = 1ull << 55, // SQF_1410_s0130_07
  The_Runaway_Son_Stage_08 = 1ull << 56, // SQF_1410_s0130_08
  The_Runaway_Son_Stage_09 = 1ull << 57, // SQF_1410_s0130_09
  The_Runaway_Son_Completed = 1ull << 58, // SQF_1410_s0130_E
  Apology_from_a_Fool = 1ull << 60, // SQF_1450_s0070_S
  Apology_from_a_Fool_Stage_01 = 1ull << 61, // SQF_1450_s0070_01
  Apology_from_a_Fool_Stage_02 = 1ull << 62, // SQF_1450_s0070_02
  Apology_from_a_Fool_Stage_03 = 1ull << 63, // SQF_1450_s0070_03
};

enum class GameFlags_5D8 : unsigned long long
{
  Apology_from_a_Fool_Completed = 1ull << 0, // SQF_1450_s0070_E
  The_Pride_of_a_Lover_Stage_06 = 1ull << 1, // SQF_1450_s0130_06
  The_Pride_of_a_Lover_Stage_01 = 1ull << 2, // SQF_1450_s0130_01
  The_Pride_of_a_Lover_Stage_02 = 1ull << 3, // SQF_1450_s0130_02
  The_Pride_of_a_Lover_Stage_03 = 1ull << 4, // SQF_1450_s0130_03
  The_Pride_of_a_Lover_Stage_04 = 1ull << 5, // SQF_1450_s0130_04
  The_Pride_of_a_Lover = 1ull << 6, // SQF_1450_s0130
  The_Pride_of_a_Lover_Stage_05 = 1ull << 7, // SQF_1450_s0130_05
  The_Pride_of_a_Lover_Completed = 1ull << 8, // SQF_1450_s0130_E
  The_Littlest_Hero = 1ull << 10, // SQF_1450_s0160
  The_Littlest_Hero_Stage_01 = 1ull << 11, // SQF_1450_s0160_01
  The_Littlest_Hero_Stage_02 = 1ull << 12, // SQF_1450_s0160_02
  The_Littlest_Hero_Completed = 1ull << 13, // SQF_1450_s0160_E
  The_Missing_Girl_End_Radio_A = 1ull << 14, // SQF_1450_s0170_ERA
  The_Missing_Girl = 1ull << 15, // SQF_1450_s0170
  The_Missing_Girl_Stage_01 = 1ull << 16, // SQF_1450_s0170_01
  The_Missing_Girl_Stage_02 = 1ull << 17, // SQF_1450_s0170_02
  The_Missing_Girl_Stage_03 = 1ull << 18, // SQF_1450_s0170_03
  The_Missing_Girl_Completed = 1ull << 19, // SQF_1450_s0170_E
  The_Missing_Girl_Aftermath = 1ull << 20, // SQF_1450_s0170_A
  A_Shade_Entombed_Start_Radio = 1ull << 21, // SQF_1450_s0180_SRA
  A_Shade_Entombed = 1ull << 22, // SQF_1450_s0180
  A_Shade_Entombed_Stage_01 = 1ull << 23, // SQF_1450_s0180_01
  A_Shade_Entombed_Stage_02 = 1ull << 24, // SQF_1450_s0180_02
  A_Shade_Entombed_Completed = 1ull << 25, // SQF_1450_s0180_E
  The_Masterless_Lighthouse_Stage_01 = 1ull << 26, // SQF_3000_s0080_01
  The_Masterless_Lighthouse = 1ull << 27, // SQF_3000_s0080_S
  The_Masterless_Lighthouse_Completed = 1ull << 28, // SQF_3000_s0080_E
  The_Scattered_Cargo = 1ull << 30, // SQF_3000_s0170
  The_Scattered_Cargo_Stage_01 = 1ull << 31, // SQF_3000_s0170_01
  The_Scattered_Cargo_Stage_02 = 1ull << 32, // SQF_3000_s0170_02
  The_Scattered_Cargo_Stage_03 = 1ull << 33, // SQF_3000_s0170_03
  The_Scattered_Cargo_Stage_04 = 1ull << 34, // SQF_3000_s0170_04
  The_Scattered_Cargo_Stage_05 = 1ull << 35, // SQF_3000_s0170_05
  The_Scattered_Cargo_Stage_06 = 1ull << 36, // SQF_3000_s0170_06
  The_Scattered_Cargo_Stage_07 = 1ull << 37, // SQF_3000_s0170_07
  The_Scattered_Cargo_Stage_08 = 1ull << 38, // SQF_3000_s0170_08
  The_Scattered_Cargo_Stage_09 = 1ull << 39, // SQF_3000_s0170_09
  The_Scattered_Cargo_Stage_10 = 1ull << 40, // SQF_3000_s0170_10
  The_Scattered_Cargo_Completed = 1ull << 41, // SQF_3000_s0170_E
  The_Strange_Fate_of_the_Jewel = 1ull << 44, // SQF_3000_s0180
  The_Strange_Fate_of_the_Jewel_Stage_01 = 1ull << 45, // SQF_3000_s0180_01
  The_Strange_Fate_of_the_Jewel_Stage_02 = 1ull << 46, // SQF_3000_s0180_02
  The_Strange_Fate_of_the_Jewel_Stage_03 = 1ull << 47, // SQF_3000_s0180_03
  The_Strange_Fate_of_the_Jewel_Stage_04 = 1ull << 48, // SQF_3000_s0180_04
  The_Strange_Fate_of_the_Jewel_Stage_05 = 1ull << 49, // SQF_3000_s0180_05
  The_Strange_Fate_of_the_Jewel_Stage_06 = 1ull << 50, // SQF_3000_s0180_06
  The_Strange_Fate_of_the_Jewel_Stage_07 = 1ull << 51, // SQF_3000_s0180_07
  The_Strange_Fate_of_the_Jewel_Completed = 1ull << 52, // SQF_3000_s0180_E
};

enum class GameFlags_5E0 : unsigned long long
{
  Thieves_in_Training_Stage_08 = 1ull << 3, // SQF_3000_s0200_08
  Thieves_in_Training = 1ull << 4, // SQF_3000_s0200
  Thieves_in_Training_Stage_01 = 1ull << 5, // SQF_3000_s0200_01
  Thieves_in_Training_Stage_02 = 1ull << 6, // SQF_3000_s0200_02
  Thieves_in_Training_Stage_03 = 1ull << 7, // SQF_3000_s0200_03
  Thieves_in_Training_Stage_04 = 1ull << 8, // SQF_3000_s0200_04
  Thieves_in_Training_Stage_05 = 1ull << 9, // SQF_3000_s0200_05
  Thieves_in_Training_Stage_06 = 1ull << 10, // SQF_3000_s0200_06
  Thieves_in_Training_Stage_07 = 1ull << 11, // SQF_3000_s0200_07
  Thieves_in_Training_Aftermath = 1ull << 12, // SQF_3000_s0200_A
  Learning_a_Trade_Available = 1ull << 13, // SQF_3000_s0210_O
  Learning_a_Trade = 1ull << 14, // SQF_3000_s0210
  Learning_a_Trade_Stage_01 = 1ull << 15, // SQF_3000_s0210_01
  Learning_a_Trade_Stage_02 = 1ull << 16, // SQF_3000_s0210_02
  Learning_a_Trade_Stage_03 = 1ull << 17, // SQF_3000_s0210_03
  Learning_a_Trade_Stage_04 = 1ull << 18, // SQF_3000_s0210_04
  Learning_a_Trade_Stage_05 = 1ull << 19, // SQF_3000_s0210_05
  Learning_a_Trade_Stage_06 = 1ull << 20, // SQF_3000_s0210_06
  Learning_a_Trade_Stage_07 = 1ull << 21, // SQF_3000_s0210_07
  Learning_a_Trade_Completed = 1ull << 22, // SQF_3000_s0210_E
  A_Bridge_in_Peril = 1ull << 25, // SQF_3000_s0220
  A_Bridge_in_Peril_Stage_01 = 1ull << 26, // SQF_3000_s0220_01
  A_Bridge_in_Peril_Stage_02 = 1ull << 27, // SQF_3000_s0220_02
  A_Bridge_in_Peril_Completed = 1ull << 28, // SQF_3000_s0220_E
  Master_of_the_Southern_Plains = 1ull << 30, // SQF_3000_s0230
  Master_of_the_Southern_Plains_Stage_01 = 1ull << 31, // SQF_3000_s0230_01
  Master_of_the_Southern_Plains_Stage_02 = 1ull << 32, // SQF_3000_s0230_02
  Master_of_the_Southern_Plains_Completed = 1ull << 33, // SQF_3000_s0230_E
  The_Fishermans_Gambit_Part_6 = 1ull << 35, // SQF_3000_s0240_S
  The_Fishermans_Gambit_Part_6_Completed = 1ull << 36, // SQF_3000_s0240_E
  The_Fishermans_Gambit_Part_7 = 1ull << 38, // SQF_3000_s0250_S
  The_Fishermans_Gambit_Part_7_Completed = 1ull << 39, // SQF_3000_s0250_E
  The_Fishermans_Gambit_Part_8 = 1ull << 41, // SQF_3000_s0260_S
  The_Fishermans_Gambit_Part_8_Completed = 1ull << 42, // SQF_3000_s0260_E
  The_Fishermans_Final_Gambit = 1ull << 44, // SQF_3000_s0270_S
  The_Fishermans_Final_Gambit_Completed = 1ull << 45, // SQF_3000_s0270_E
  Staying_Afloat = 1ull << 47, // SQF_3000_s0280_S
  Staying_Afloat_Completed = 1ull << 49, // SQF_3000_s0280_E
  Contract_for_a_Contractor_Start_Radio = 1ull << 50, // SQF_3000_s0290_SRA
  Contract_for_a_Contractor = 1ull << 51, // SQF_3000_s0290_S
  Contract_for_a_Contractor_Completed = 1ull << 53, // SQF_3000_s0290_E
  The_Creaky_Waterwheel = 1ull << 55, // SQF_3000_s0300_S
  The_Creaky_Waterwheel_Stage_01 = 1ull << 56, // SQF_3000_s0300_01
  The_Creaky_Waterwheel_Stage_02 = 1ull << 57, // SQF_3000_s0300_02
  The_Creaky_Waterwheel_Completed = 1ull << 59, // SQF_3000_s0300_E
  The_Faded_Fountain = 1ull << 61, // SQF_3000_s0310_S
  The_Faded_Fountain_Stage_01 = 1ull << 62, // SQF_3000_s0310_01
  The_Faded_Fountain_Stage_02 = 1ull << 63, // SQF_3000_s0310_02
};

enum class GameFlags_5E8 : unsigned long long
{
  The_Faded_Fountain_Stage_03 = 1ull << 0, // SQF_3000_s0310_03
  The_Faded_Fountain_Completed = 1ull << 1, // SQF_3000_s0310_E
  Bon_Appetit_2_Available = 1ull << 2, // SQF_3000_s0320_O
  Bon_Appetit_2 = 1ull << 3, // SQF_3000_s0320_S
  Bon_Appetit_2_Stage_01 = 1ull << 4, // SQF_3000_s0320_01
  Bon_Appetit_2_Completed = 1ull << 5, // SQF_3000_s0320_E
  Life_in_the_Sands = 1ull << 7, // SQF_3000_s0330_S
  Life_in_the_Sands_Stage_01 = 1ull << 8, // SQF_3000_s0330_01
  Life_in_the_Sands_Completed = 1ull << 9, // SQF_3000_s0330_E
  The_Kings_Mask = 1ull << 11, // SQF_3000_s0340_S
  The_Kings_Mask_Stage_01 = 1ull << 12, // SQF_3000_s0340_01
  The_Kings_Mask_Completed = 1ull << 13, // SQF_3000_s0340_E
  A_Childs_Final_Chance = 1ull << 14, // SQF_3200_s0010
  A_Childs_Final_Chance_Stage_01 = 1ull << 15, // SQF_3200_s0010_01
  A_Childs_Final_Chance_Stage_02 = 1ull << 16, // SQF_3200_s0010_02
  A_Childs_Final_Chance_Stage_03 = 1ull << 17, // SQF_3200_s0010_03
  A_Childs_Final_Chance_Stage_04 = 1ull << 18, // SQF_3200_s0010_04
  A_Childs_Final_Chance_Stage_05 = 1ull << 19, // SQF_3200_s0010_05
  A_Childs_Final_Chance_Stage_06 = 1ull << 20, // SQF_3200_s0010_06
  A_Childs_Final_Chance_Stage_07 = 1ull << 21, // SQF_3200_s0010_07
  A_Childs_Final_Chance_Stage_08 = 1ull << 22, // SQF_3200_s0010_08
  A_Childs_Final_Chance_Completed = 1ull << 23, // SQF_3200_s0010_E
  The_Damaged_Map = 1ull << 25, // SQF_4100_s0010
  The_Damaged_Map_Stage_01 = 1ull << 26, // SQF_4100_s0010_01
  The_Damaged_Map_Stage_02 = 1ull << 27, // SQF_4100_s0010_02
  The_Damaged_Map_Stage_03 = 1ull << 28, // SQF_4100_s0010_03
  The_Damaged_Map_Stage_04 = 1ull << 29, // SQF_4100_s0010_04
  The_Damaged_Map_Stage_05 = 1ull << 30, // SQF_4100_s0010_05
  The_Damaged_Map_Stage_06 = 1ull << 31, // SQF_4100_s0010_06
  The_Damaged_Map_Stage_07 = 1ull << 32, // SQF_4100_s0010_07
  The_Damaged_Map_Stage_08 = 1ull << 33, // SQF_4100_s0010_08
  The_Damaged_Map_Stage_09 = 1ull << 34, // SQF_4100_s0010_09
  The_Damaged_Map_Stage_10 = 1ull << 35, // SQF_4100_s0010_10
  The_Damaged_Map_Stage_11 = 1ull << 36, // SQF_4100_s0010_11
  The_Damaged_Map_Stage_12 = 1ull << 37, // SQF_4100_s0010_12
  The_Damaged_Map_Completed = 1ull << 38, // SQF_4100_s0010_E
  Research_Project = 1ull << 40, // SQF_4100_s0020
  Research_Project_Stage_01 = 1ull << 41, // SQF_4100_s0020_01
  Research_Project_Stage_02 = 1ull << 42, // SQF_4100_s0020_02
  Research_Project_Stage_03 = 1ull << 43, // SQF_4100_s0020_03
  Research_Project_Stage_04 = 1ull << 44, // SQF_4100_s0020_04
  Research_Project_Completed = 1ull << 45, // SQF_4100_s0020_E
  A_Tale_of_the_Study_Aftermath = 1ull << 46, // SQF_4100_s0030_A
  A_Tale_of_the_Study = 1ull << 47, // SQF_4100_s0030
  A_Tale_of_the_Study_Stage_01 = 1ull << 48, // SQF_4100_s0030_01
  A_Tale_of_the_Study_Stage_02 = 1ull << 49, // SQF_4100_s0030_02
  A_Tale_of_the_Study_Completed = 1ull << 50, // SQF_4100_s0030_E
  The_Great_Tree_Stage_03 = 1ull << 51, // SQF_4100_s0040_03
  The_Great_Tree = 1ull << 52, // SQF_4100_s0040
  The_Great_Tree_Stage_01 = 1ull << 53, // SQF_4100_s0040_01
  The_Great_Tree_Stage_02 = 1ull << 54, // SQF_4100_s0040_02
  The_Great_Tree_Completed = 1ull << 55, // SQF_4100_s0040_E
  The_Despicable_Man_Stage_04_Radio = 1ull << 56, // SQF_4030_s0010_04RA
  The_Despicable_Man = 1ull << 57, // SQF_4030_s0010
  The_Despicable_Man_Stage_01 = 1ull << 58, // SQF_4030_s0010_01
  The_Despicable_Man_Stage_02 = 1ull << 59, // SQF_4030_s0010_02
  The_Despicable_Man_Stage_03 = 1ull << 60, // SQF_4030_s0010_03
  The_Despicable_Man_Stage_04 = 1ull << 61, // SQF_4030_s0010_04
  The_Despicable_Man_Stage_05 = 1ull << 62, // SQF_4030_s0010_05
  The_Despicable_Man_Completed = 1ull << 63, // SQF_4030_s0010_E
};

enum class GameFlags_5F0 : unsigned long long
{
  A_Memorable_Knife_Start_Radio = 1ull << 0, // SQF_4030_s0020_SRA
  A_Memorable_Knife = 1ull << 1, // SQF_4030_s0020
  A_Memorable_Knife_Stage_01 = 1ull << 2, // SQF_4030_s0020_01
  A_Memorable_Knife_Stage_02 = 1ull << 3, // SQF_4030_s0020_02
  A_Memorable_Knife_Completed = 1ull << 4, // SQF_4030_s0020_E
  The_Shade_Army_Stage_01 = 1ull << 6, // SQF_4030_s0030_01
  The_Shade_Army = 1ull << 7, // SQF_4030_s0030
  The_Shade_Army_Stage_02 = 1ull << 8, // SQF_4030_s0030_02
  The_Shade_Army_Stage_03 = 1ull << 9, // SQF_4030_s0030_03
  The_Shade_Army_Stage_04 = 1ull << 10, // SQF_4030_s0030_04
  The_Shade_Army_Stage_05 = 1ull << 11, // SQF_4030_s0030_05
  The_Shade_Army_Stage_06 = 1ull << 12, // SQF_4030_s0030_06
  The_Shade_Army_Completed = 1ull << 13, // SQF_4030_s0030_E
  A_City_Reborn_Stage_01 = 1ull << 14, // SQF_4230_s0020_01
  A_City_Reborn = 1ull << 15, // SQF_4230_s0020_S
  A_City_Reborn_Completed = 1ull << 16, // SQF_4230_s0020_E
  Nightmares_and_Dust = 1ull << 18, // SQF_4230_s0070
  Nightmares_and_Dust_Stage_01 = 1ull << 19, // SQF_4230_s0070_01
  Nightmares_and_Dust_Stage_02 = 1ull << 20, // SQF_4230_s0070_02
  Nightmares_and_Dust_Completed = 1ull << 21, // SQF_4230_s0070_E
  Disturbing_the_Sleep_of_Kings_Available = 1ull << 22, // SQF_4230_s0080_O
  Disturbing_the_Sleep_of_Kings = 1ull << 23, // SQF_4230_s0080
  Disturbing_the_Sleep_of_Kings_Stage_01 = 1ull << 24, // SQF_4230_s0080_01
  Disturbing_the_Sleep_of_Kings_Stage_02 = 1ull << 25, // SQF_4230_s0080_02
  Disturbing_the_Sleep_of_Kings_Completed = 1ull << 26, // SQF_4230_s0080_E
  Shadows_of_the_Desert_Available = 1ull << 27, // SQF_4430_s0010_O
  Shadows_of_the_Desert = 1ull << 28, // SQF_4430_s0010
  Shadows_of_the_Desert_Stage_01 = 1ull << 29, // SQF_4430_s0010_01
  Shadows_of_the_Desert_Stage_02 = 1ull << 30, // SQF_4430_s0010_02
  Shadows_of_the_Desert_Stage_03 = 1ull << 31, // SQF_4430_s0010_03
  Shadows_of_the_Desert_Completed = 1ull << 32, // SQF_4430_s0010_E
  Search_for_the_Shade_Stage_00 = 1ull << 33, // SQF_4430_s0020_00
  Search_for_the_Shade = 1ull << 34, // SQF_4430_s0020
  Search_for_the_Shade_Stage_01 = 1ull << 35, // SQF_4430_s0020_01
  Search_for_the_Shade_Stage_02 = 1ull << 36, // SQF_4430_s0020_02
  Search_for_the_Shade_Stage_03 = 1ull << 37, // SQF_4430_s0020_03
  Search_for_the_Shade_Stage_04 = 1ull << 38, // SQF_4430_s0020_04
  Search_for_the_Shade_Stage_05 = 1ull << 39, // SQF_4430_s0020_05
  Search_for_the_Shade_Stage_06 = 1ull << 40, // SQF_4430_s0020_06
  Search_for_the_Shade_Stage_07 = 1ull << 41, // SQF_4430_s0020_07
  Search_for_the_Shade_Stage_08 = 1ull << 42, // SQF_4430_s0020_08
  Search_for_the_Shade_Completed = 1ull << 43, // SQF_4430_s0020_E
  Freesia_Available = 1ull << 44, // SQF_4430_s0030_O
  Freesia = 1ull << 45, // SQF_4430_s0030
  Freesia_Stage_01 = 1ull << 46, // SQF_4430_s0030_01
  Freesia_Stage_03 = 1ull << 48, // SQF_4430_s0030_03
  Freesia_Completed = 1ull << 49, // SQF_4430_s0030_E
  Freesia_Aftermath = 1ull << 50, // SQF_4430_s0030_A
  The_Magical_Stone = 1ull << 52, // SQF_5000_s0020
  The_Magical_Stone_Stage_01 = 1ull << 53, // SQF_5000_s0020_01
  The_Magical_Stone_Stage_02 = 1ull << 54, // SQF_5000_s0020_02
  The_Magical_Stone_Stage_03 = 1ull << 55, // SQF_5000_s0020_03
  The_Magical_Stone_Stage_04 = 1ull << 56, // SQF_5000_s0020_04
  The_Magical_Stone_Completed = 1ull << 57, // SQF_5000_s0020_E
};

enum class GameFlags_5F8 : unsigned long long
{
  The_Missing_Girl_Stage_00_00 = 1ull << 14, // SQF_1450_s0170_00_00
  The_Missing_Girl_Stage_00_01 = 1ull << 15, // SQF_1450_s0170_00_01
  The_Missing_Girl_Stage_00_02 = 1ull << 16, // SQF_1450_s0170_00_02
  Search_for_the_Shade_Stage_07_00 = 1ull << 18, // SQF_4430_s0020_07_00
  The_Missing_Girl_Stage_00_03 = 1ull << 19, // SQF_1450_s0170_00_03
  The_Missing_Girl_Aftermath_2 = 1ull << 24, // SQF_1450_s0170_A02
  The_Postmans_Request = 1ull << 25, // SQF_1320_s0300
  The_Postmans_Request_Completed = 1ull << 26, // SQF_1320_s0300_E
  The_Postmans_Request_Stage_01 = 1ull << 27, // SQF_1320_s0300_01
  The_Lighthouse_Ladys_Wrath_Stage_00 = 1ull << 28, // SQF_1320_s0310_00
  The_Lighthouse_Ladys_Wrath = 1ull << 29, // SQF_1320_s0310
  The_Lighthouse_Ladys_Wrath_Stage_01 = 1ull << 30, // SQF_1320_s0310_01
  The_Lighthouse_Ladys_Wrath_Stage_02 = 1ull << 31, // SQF_1320_s0310_02
  The_Lighthouse_Ladys_Wrath_Stage_03 = 1ull << 32, // SQF_1320_s0310_03
  The_Lighthouse_Ladys_Wrath_Stage_04 = 1ull << 33, // SQF_1320_s0310_04
  The_Lighthouse_Ladys_Wrath_Stage_05 = 1ull << 34, // SQF_1320_s0310_05
  The_Lighthouse_Ladys_Wrath_Stage_06 = 1ull << 35, // SQF_1320_s0310_06
  The_Lighthouse_Ladys_Wrath_Stage_07 = 1ull << 36, // SQF_1320_s0310_07
  The_Lighthouse_Ladys_Wrath_Stage_08 = 1ull << 37, // SQF_1320_s0310_08
  The_Lighthouse_Ladys_Wrath_Stage_09 = 1ull << 38, // SQF_1320_s0310_09
  The_Lighthouse_Ladys_Wrath_Completed = 1ull << 39, // SQF_1320_s0310_E
  Closure = 1ull << 41, // SQF_1320_s0320_S
  Closure_Completed = 1ull << 42, // SQF_1320_s0320_E
  Closure_Aftermath = 1ull << 43, // SQF_1320_s0320_A
  Yonahs_Gift_Stage_05_Radio = 1ull << 45, // SQF_1050_s0060_05RA
  The_Ballad_of_the_Twins_Stage_04_Radio = 1ull << 46, // SQF_1320_s0210_04RA
  A_Childs_Final_Chance_Stage_06_Radio = 1ull << 47, // SQF_3200_s0010_06RA
  A_Memorable_Knife_Stage_02_Radio = 1ull << 48, // SQF_4030_s0020_02RA
  Freesia_Start_Radio = 1ull << 49, // SQF_4430_s0030_SRA
  The_Despicable_Man_Stage_05_Radio = 1ull << 50, // SQF_4030_s0010_05RA
  The_Scattered_Cargo_Collection_1_Item_1 = 1ull << 51, // SQF_3000_s0170_Collection1_1
  The_Scattered_Cargo_Collection_1_Item_2 = 1ull << 52, // SQF_3000_s0170_Collection1_2
  The_Scattered_Cargo_Collection_2_Item_1 = 1ull << 53, // SQF_3000_s0170_Collection2_1
  The_Scattered_Cargo_Collection_2_Item_2 = 1ull << 54, // SQF_3000_s0170_Collection2_2
  Thieves_in_Training_Stage_09 = 1ull << 56, // SQF_3000_s0200_09
  Thieves_in_Training_Completed = 1ull << 57, // SQF_3000_s0200_E
  Search_for_the_Shade_Stage_06_02 = 1ull << 58, // SQF_4430_s0020_06_02
  Thieves_in_Training_Stage_06_02 = 1ull << 59, // SQF_3000_s0200_06_02
  The_Fishermans_Final_Gambit_Stage_03 = 1ull << 60, // SQF_3000_s0270_03
  The_Fishermans_Gambit_Part_6_Available = 1ull << 61, // SQF_3000_s0240_O
  Freesia_Aftermath_2 = 1ull << 62, // SQF_4430_s0030_A02
  The_Despicable_Man_Stage_05_02 = 1ull << 63, // SQF_4030_s0010_05_02
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

enum class Cultivation_Plant : signed char
{
  Empty = -1,
  Tomato = 0,
  Eggplant = 1,
  Bell_Pepper = 2,
  Beans = 3,
  Pumpkin = 4,
  Watermelon = 5,
  Melon = 6,
  Gourd = 7,
  Wheat = 8,
  Rice = 9,
  Dahlia = 10,
  Tulip = 11,
  Freesia = 12,
  Red_Moonflower = 13,
  Gold_Moonflower = 14,
  Peach_Moonflower = 15,
  Pink_Moonflower = 16,
  Blue_Moonflower = 17,
  Indigo_Moonflower = 18,
  White_Moonflower = 19,
};

enum class Cultivation_Fertilizer : int
{
  None = 0,
  Speed = 1,
  Flowering = 2,
  Bounty = 3,
};

enum class Cultivation_Action_Flags : unsigned char
{
  None = 0,
  Stage_1 = 1u << 0,
  Stage_2 = 1u << 1,
  Stage_3 = 1u << 2,
  Stage_4 = 1u << 3,
  Stage_5 = 1u << 4,
};

struct Cultivation_Plot
{
  Cultivation_Plant plant_id;
  unsigned char harvest_count;
  char reserved_02[2];
  Cultivation_Fertilizer fertilizer_type;
  Cultivation_Action_Flags action_flags;
  char reserved_09[3];
  float rotation_degrees;
  unsigned long long planted_time;
};

enum class SnowGameFlags_C30 : unsigned long long
{
  Mermaid_Radio_Setup_State = 1ull << 0,
  Weather_Force_Evening = 1ull << 2, // LIB_SetupWeatherSetting
  Weather_Force_Morning = 1ull << 3, // LIB_SetupWeatherSetting
  Snow_Flag_0005_EID_9400_a0010_End = 1ull << 5,
  Remaster_Chunk_Installation_Complete = 1ull << 8, // LIB_Chunk_Installation_End
  Snow_Flag_0011_EID_9300_a0010g_0010_End = 1ull << 11, // EID_9300_a0010g_0010_End
  Snow_Flag_0012_RA_EID_9300_a0010g_0020_Set = 1ull << 12, // RA_EID_9300_a0010g_0020_Set
  Snow_Flag_0014_EID_9300_a0020g_0010_End = 1ull << 14, // EID_9300_a0020g_0010_End
  Snow_Flag_0015_EID_9300_a0020g_0040_End = 1ull << 15, // EID_9300_a0020g_0040_End
  Snow_Flag_0016_EID_9300_a0020g_0060_End = 1ull << 16, // EID_9300_a0020g_0060_End
  Mermaid_Red_Bag_Obtained = 1ull << 18, // Red_Bag_Get
  Snow_Flag_0019_EID_9300_a0050_0010_End = 1ull << 19, // EID_9300_a0050_0010_End
  Snow_Flag_0020_EID_9300_a0050_0250_Start = 1ull << 20, // EID_9300_a0050_0250_Start
  Snow_Flag_0021_RA_EID_9300_a0080g_0010_Start = 1ull << 21, // RA_EID_9300_a0080g_0010_Start
  Snow_Flag_0022_EID_9300_a0060g_0010_End = 1ull << 22, // EID_9300_a0060g_0010_End
  Open_Loading_Message_023 = 1ull << 23, // _SetOpenLoadingMessage(23)
  Open_Loading_Message_024 = 1ull << 24, // _SetOpenLoadingMessage(24)
  Open_Loading_Message_025 = 1ull << 25, // _SetOpenLoadingMessage(25)
  Open_Loading_Message_026 = 1ull << 26, // _SetOpenLoadingMessage(26)
  Open_Loading_Message_027 = 1ull << 27, // _SetOpenLoadingMessage(27)
  Open_Loading_Message_028 = 1ull << 28, // _SetOpenLoadingMessage(28)
  Open_Loading_Message_029 = 1ull << 29, // _SetOpenLoadingMessage(29)
  Open_Loading_Message_030 = 1ull << 30, // _SetOpenLoadingMessage(30)
  Open_Loading_Message_031 = 1ull << 31, // _SetOpenLoadingMessage(31)
  Open_Loading_Message_032 = 1ull << 32, // _SetOpenLoadingMessage(32)
  Open_Loading_Message_033 = 1ull << 33, // _SetOpenLoadingMessage(33)
  Open_Loading_Message_034 = 1ull << 34, // _SetOpenLoadingMessage(34)
  Open_Loading_Message_035 = 1ull << 35, // _SetOpenLoadingMessage(35)
  Open_Loading_Message_036 = 1ull << 36, // _SetOpenLoadingMessage(36)
  Open_Loading_Message_037 = 1ull << 37, // _SetOpenLoadingMessage(37)
  Open_Loading_Message_038 = 1ull << 38, // _SetOpenLoadingMessage(38)
  Open_Loading_Message_039 = 1ull << 39, // _SetOpenLoadingMessage(39)
  Open_Loading_Message_040 = 1ull << 40, // _SetOpenLoadingMessage(40)
  Open_Loading_Message_041 = 1ull << 41, // _SetOpenLoadingMessage(41)
  Open_Loading_Message_042 = 1ull << 42, // _SetOpenLoadingMessage(42)
  Open_Loading_Message_043 = 1ull << 43, // _SetOpenLoadingMessage(43)
  Open_Loading_Message_044 = 1ull << 44, // _SetOpenLoadingMessage(44)
  Open_Loading_Message_045 = 1ull << 45, // _SetOpenLoadingMessage(45)
  Open_Loading_Message_046 = 1ull << 46, // _SetOpenLoadingMessage(46)
  Open_Loading_Message_047 = 1ull << 47, // _SetOpenLoadingMessage(47)
  Open_Loading_Message_048 = 1ull << 48, // _SetOpenLoadingMessage(48)
  Open_Loading_Message_049 = 1ull << 49, // _SetOpenLoadingMessage(49)
  Open_Loading_Message_050 = 1ull << 50, // _SetOpenLoadingMessage(50)
  Open_Loading_Message_051 = 1ull << 51, // _SetOpenLoadingMessage(51)
  Open_Loading_Message_052 = 1ull << 52, // _SetOpenLoadingMessage(52)
  Open_Loading_Message_053 = 1ull << 53, // _SetOpenLoadingMessage(53)
  Open_Loading_Message_054 = 1ull << 54, // _SetOpenLoadingMessage(54)
  Open_Loading_Message_055 = 1ull << 55, // _SetOpenLoadingMessage(55)
  Open_Loading_Message_056 = 1ull << 56, // _SetOpenLoadingMessage(56)
  Open_Loading_Message_057 = 1ull << 57, // _SetOpenLoadingMessage(57)
  Open_Loading_Message_058 = 1ull << 58, // _SetOpenLoadingMessage(58)
  Open_Loading_Message_059 = 1ull << 59, // _SetOpenLoadingMessage(59)
  Open_Loading_Message_060 = 1ull << 60, // _SetOpenLoadingMessage(60)
  Open_Loading_Message_061 = 1ull << 61, // _SetOpenLoadingMessage(61)
  Open_Loading_Message_062 = 1ull << 62, // _SetOpenLoadingMessage(62)
  Open_Loading_Message_063 = 1ull << 63, // _SetOpenLoadingMessage(63)
};

enum class SnowGameFlags_C38 : unsigned long long
{
  Open_Loading_Message_064 = 1ull << 0, // _SetOpenLoadingMessage(64)
  Open_Loading_Message_065 = 1ull << 1, // _SetOpenLoadingMessage(65)
  Open_Loading_Message_066 = 1ull << 2, // _SetOpenLoadingMessage(66)
  Open_Loading_Message_067 = 1ull << 3, // _SetOpenLoadingMessage(67)
  Open_Loading_Message_068 = 1ull << 4, // _SetOpenLoadingMessage(68)
  Open_Loading_Message_069 = 1ull << 5, // _SetOpenLoadingMessage(69)
  Open_Loading_Message_070 = 1ull << 6, // _SetOpenLoadingMessage(70)
  Open_Loading_Message_071 = 1ull << 7, // _SetOpenLoadingMessage(71)
  Snow_Flag_0073_room04 = 1ull << 9, // room04
  Snow_Flag_0075_EID_9320_a0200g_0140_Start = 1ull << 11, // EID_9320_a0200g_0140_Start
  Snow_Flag_0079_EID_9320_a0210_0010_Start = 1ull << 15, // EID_9320_a0210_0010_Start
  Snow_Flag_0080_EID_9320_a0200g_1320_Start = 1ull << 16, // EID_9320_a0200g_1320_Start
  Snow_Flag_0082_EID_9320_a0200g_1340_Set = 1ull << 18, // EID_9320_a0200g_1340_Set
  Snow_Flag_0087_EID_9320_a0200_1640_Next_03 = 1ull << 23, // EID_9320_a0200_1640_Next_03
  Snow_Flag_0088_room05_b_02 = 1ull << 24, // room05_b_02
  Mermaid_Shipwreck_Door_Key_1_Obtained = 1ull << 25, // Get_DoorKey_1
  Snow_Flag_0090_snow_Back_Radio = 1ull << 26, // snow_Back_Radio
  Snow_Flag_0092_RA_EID_9320_a0220g_0100_Start = 1ull << 28, // RA_EID_9320_a0220g_0100_Start
  Snow_Flag_0093_snow_Confluence = 1ull << 29, // snow_Confluence
  Snow_Flag_0094_snow_Kaban_Hint_Next_3 = 1ull << 30, // snow_Kaban_Hint_Next_3
  Mermaid_Shipwreck_Hidden_Room_Radio_Played = 1ull << 31, // snow_Hidden_Room_Radio
  Mermaid_Shipwreck_Captain_Room_Opened = 1ull << 32, // CaptainRoom_OpenSet
  Mermaid_Shipwreck_Storehouse_Radio_Played = 1ull << 33, // snow_Storehouse_Radio
  Snow_Flag_0099_EID_9320_a0240_0010_Start = 1ull << 35, // EID_9320_a0240_0010_Start
  Snow_Flag_0100_snow_Message = 1ull << 36, // snow_Message
  Snow_Flag_0101_snow_Confluence = 1ull << 37, // snow_Confluence
  Snow_Flag_0102_Goal = 1ull << 38, // Goal
  Snow_Flag_0103_Goal = 1ull << 39, // Goal
  Mermaid_Shipwreck_Door_12_Blocked_Message_Seen = 1ull << 40, // No_Open_Door_12
  Snow_Flag_0105_STAGE_SELECT_01 = 1ull << 41, // STAGE_SELECT_01
  Snow_Flag_0109_Escape_Battle_Start_01_1 = 1ull << 45, // Escape_Battle_Start_01_1
  Snow_Flag_0110_room06_b = 1ull << 46, // room06_b
  Snow_Flag_0111_room01_02 = 1ull << 47, // room01_02
  Snow_Flag_0112_room05_b_02 = 1ull << 48, // room05_b_02
  Mermaid_Shipwreck_Hawk_Door_Opened = 1ull << 49, // Opne_HawkDoor2
  Mermaid_Shipwreck_Return_Radio_1_Played = 1ull << 50, // SNOW_Radio_Return_01
  Snow_Flag_0115_STAGE_SELECT_01 = 1ull << 51, // STAGE_SELECT_01
  Mermaid_Shipwreck_Deck_Reached = 1ull << 53, // Deck_Start
  Snow_Flag_0118_RA_EID_9320_a0260g_0010_Start = 1ull << 54, // RA_EID_9320_a0260g_0010_Start
  Mermaid_Shipwreck_Lock_Box_State = 1ull << 56, // snow_Lock_Box
  Mermaid_Shipwreck_Item_1B_Obtained = 1ull << 62, // snow_Item_1b
  Mermaid_Shipwreck_Item_2B_Obtained = 1ull << 63, // snow_Item_2b
};

enum class SnowGameFlags_C40 : unsigned long long
{
  Snow_Flag_0132_RA_EID_9320_a0280g_0040_Start = 1ull << 4, // RA_EID_9320_a0280g_0040_Start
  Snow_Flag_0133_RA_EID_9320_a0280g_0045_Start = 1ull << 5, // RA_EID_9320_a0280g_0045_Start
  Snow_Flag_0135_EID_9320_a0290_Start = 1ull << 7, // EID_9320_a0290_Start
  Snow_Flag_0142_RA_EID_9320_a0300g_0030_Start = 1ull << 14, // RA_EID_9320_a0300g_0030_Start
  Mermaid_Cave_Stomp_Started = 1ull << 22, // snow_Cave3_Stomp_Start
  Mermaid_Game_Over_Started = 1ull << 24, // GameOver_Start
  Snow_Flag_0157_Referenced = 1ull << 29,
  Snow_Flag_0164_STAGE_SELECT_05 = 1ull << 36, // STAGE_SELECT_05
  Snow_Flag_0171_EID_9320_a0080g_Next = 1ull << 43, // EID_9320_a0080g_Next
  Snow_Flag_0173_EID_9320_a0370_Normal_Start = 1ull << 45, // EID_9320_a0370_Normal_Start
  Snow_Flag_0174_EID_9320_a0370_Bunki_Start = 1ull << 46, // EID_9320_a0370_Bunki_Start
  Snow_Flag_0175_EID_9320_a0380_Start = 1ull << 47, // EID_9320_a0380_Start
  Snow_Flag_0176_EID_9320_a0380_Start = 1ull << 48, // EID_9320_a0380_Start
  Snow_Flag_0177_EID_9320_a0400_0031_end = 1ull << 49, // EID_9320_a0400_0031_end
  Snow_Flag_0178_EID_9320_a0410_Start = 1ull << 50, // EID_9320_a0410_Start
  Snow_Flag_0179_EID_9320_a0420_End = 1ull << 51, // EID_9320_a0420_End
  Snow_Flag_0180_EID_9320_a0430_End = 1ull << 52, // EID_9320_a0430_End
  Mermaid_Red_Bag_Search_In_Progress = 1ull << 53,
  Snow_Flag_0182_EID_9320_a0450_Start = 1ull << 54, // EID_9320_a0450_Start
  Snow_Flag_0183_EID_9320_a0450_Radio = 1ull << 55, // EID_9320_a0450_Radio
  Snow_Flag_0185_EID_9320_a0425_End = 1ull << 57, // EID_9320_a0425_End
  Snow_Flag_0186_EID_9320_a0425_End = 1ull << 58, // EID_9320_a0425_End
  Snow_Flag_0188_EID_9320_a0400_0031_end = 1ull << 60, // EID_9320_a0400_0031_end
  Snow_Flag_0189_EID_9320_a0400_0041_end = 1ull << 61, // EID_9320_a0400_0041_end
};

enum class SnowGameFlags_C48 : unsigned long long
{
  Snow_Flag_0193_mapsetting = 1ull << 1,
  Snow_Flag_0194_mapsetting = 1ull << 2,
  Snow_Flag_0195_Referenced = 1ull << 3,
  Snow_Flag_0196_Referenced = 1ull << 4,
  Snow_Flag_0197_start_destination = 1ull << 5,
  Snow_Flag_0198_flagcheck = 1ull << 6,
  Snow_Flag_0199_RetryPointSet = 1ull << 7,
  Snow_Flag_0200_Cutscene_Viewer_State = 1ull << 8,
  Snow_Flag_0201_Cutscene_Viewer_State = 1ull << 9,
  Snow_Flag_0202_snow_Return_B = 1ull << 10, // snow_Return_B
  Snow_Flag_0204_mapsetting = 1ull << 12,
  Snow_Flag_0207_mapsetting = 1ull << 15,
  Mermaid_Shipwreck_Long_Door_Accessed = 1ull << 19, // Door_Long_Access
  Mermaid_Route_To_EID_9320_010 = 1ull << 22, // TO_EID_9320_010
  Mermaid_Shipwreck_Dying_Message_1_Seen = 1ull << 24, // snow_Dieing
  Mermaid_Shipwreck_Dying_Message_2_Seen = 1ull << 25, // snow_Dieing2
  Mermaid_Shipwreck_Dying_Message_3_Seen = 1ull << 26, // snow_Dieing3
  Mermaid_Shipwreck_Dying_Message_4_Seen = 1ull << 27, // snow_Dieing4
  Mermaid_Shipwreck_Dying_Message_5_Seen = 1ull << 28, // snow_Dieing5
  Mermaid_Louise_Last_Event_Seen = 1ull << 29, // snow_Snow_Last
  Mermaid_Kaine_Last_Event_Seen = 1ull << 30, // snow_Kaine_Last
  Promised_Gift_Bar_Talk_Seen = 1ull << 34, // SEID_9320_S0010_Bar
  The_Promised_Gift = 1ull << 35,
  The_Promised_Gift_Canceled = 1ull << 36, // Quest_Cancel
  The_Promised_Gift_Question_2_Answer_1 = 1ull << 37, // Answer2_1
  The_Promised_Gift_Question_2_Answer_2 = 1ull << 38, // Answer2_2
  The_Promised_Gift_Question_2_Answer_3 = 1ull << 39, // Answer2_3
  The_Promised_Gift_Item_Obtained = 1ull << 40, // snow_Quest_ItemGet
  The_Promised_Gift_Completed = 1ull << 41,
  The_Promised_Gift_Boatman_Lost_State = 1ull << 42, // SEID_9320_S0010_BOATMAN_Lost2
  The_Promised_Gift_Boatman_Lost2_Seen = 1ull << 43, // SEID_9320_S0010_BOATMAN_Lost2
  The_Promised_Gift_Radio_2_Played = 1ull << 44, // snow_SQST_Radio2
  The_Promised_Gift_Radio_3_Played = 1ull << 45, // snow_SQST_Radio3
  The_Promised_Gift_Seafront_Radio_Played = 1ull << 46, // SEID_9320_S0010_Seaside_Radio
  Snow_Flag_0240_DLC_GAME_START_05 = 1ull << 48, // DLC_GAME_START_05
  Snow_Flag_0243_EID_4030_a0087_Tie = 1ull << 51, // EID_4030_a0087_Tie
  Snow_Flag_0252_EID_4430_a0100_01_End = 1ull << 60, // EID_4430_a0100_01_End
};

enum class SnowGameFlags_C50 : unsigned long long
{
  Snow_Flag_0270_B3F_Door_Number07 = 1ull << 14, // B3F_Door_Number07
  Snow_Flag_0300_mapsetting = 1ull << 44,
};

enum class SnowGameFlags_C68 : unsigned long long
{
  Ending_E_Northern_Plains_Flower_Talk_Seen = 1ull << 45, // snow_Flower_Talk
  Ending_E_Aerie_Kaine_Talk_Seen = 1ull << 46, // snow_Cane_Talk
  Ending_E_First_Savepoint_Used = 1ull << 52, // FIRST_SAVEPOINT
  Ending_E_Kaine_Home_Left = 1ull << 54, // Kaine_Home_OUT
  Ending_E_Aerie_Talk_Seen = 1ull << 55, // EEND_TALK_CLIFF_01
  Ending_E_Aerie_Radio_Played = 1ull << 56, // EEND_RADIO_CLIFF_01
  Ending_E_Northern_Plains_Event_Seen = 1ull << 57, // EEND_EVENT_NORTH_01
  Ending_E_Forest_Radio_1_Played = 1ull << 59, // EEND_RADIO_FOREST_01_01_radio
  Snow_Flag_0508_EID_9400_a0050g_0100_End = 1ull << 60, // EID_9400_a0050g_0100_End
  Ending_E_Forest_Area_A_Started = 1ull << 61, // snow_Area_A_Start
  Ending_E_Forest_Area_B_Started = 1ull << 62, // snow_Area_B_Start
  Ending_E_Forest_02_Event_04_Seen = 1ull << 63, // EEND_EVENT_FOREST_02_04
};

enum class SnowGameFlags_C70 : unsigned long long
{
  Ending_E_Forest_Radio_Set = 1ull << 0, // snow_E_Radio_Set
  Ending_E_Forest_02_Event_06_Seen = 1ull << 1, // EEND_EVENT_FOREST_02_06
  Ending_E_Forest_03_Event_06_Seen = 1ull << 2, // EEND_EVENT_FOREST_03_06
  Ending_E_Data_Hook_Started = 1ull << 3, // DataHookStart
  Ending_E_Debug_Novel_Ended = 1ull << 6, // snow_Debug_Novel_End
  Snow_Flag_0519_EID_9400_a0230_End_Start = 1ull << 7, // EID_9400_a0230_End_Start
  Ending_E_Forest_Info_Event_Seen = 1ull << 8, // EEND_INFO_FOREST_03_01
  Snow_Flag_0521_Cutscene_Viewer_State = 1ull << 9,
  Ending_E_Forest_Area_D1_Started = 1ull << 10, // snow_Start_Area_D1
  Ending_E_Forest_Access_Corpse_Event_Seen = 1ull << 11, // EEND_EVENT_FOREST_ACCESS_Corpse
  Ending_E_Forest_01_Event_03_Seen = 1ull << 12, // EEND_EVENT_FOREST_01_03
  Ending_E_Forest_Area_C_Started = 1ull << 13, // snow_Start_Area_C
  Ending_E_Forest_01_Event_01_Seen = 1ull << 14, // EEND_EVENT_FOREST_01_01
  Ending_E_Forest_Hook_Radio_Played = 1ull << 15, // EEND_HOOK_FOREST_03_10
  Snow_Flag_0529_RA_EID_9400_a0060g_0050_Start = 1ull << 17, // RA_EID_9400_a0060g_0050_Start
  Snow_Flag_0535_Cutscene_Viewer_State = 1ull << 23,
  Snow_Flag_0536_Cutscene_Viewer_State = 1ull << 24,
  Ending_E_Northern_Plains_Stone_Radio_Played = 1ull << 38, // snow_Radio_Stone
  Ending_E_Northern_Plains_Enemy_Radio_Played = 1ull << 39, // snow_Radio_Enemy
  Ending_E_Northern_Plains_Attack_Radio_Played = 1ull << 40, // snow_Radio_Attack
  Ending_E_Northern_Plains_Attack_Radio_Set = 1ull << 41, // snow_Radio_Attack_Set
  Snow_Flag_0554_SetFlag_B9400_A0056 = 1ull << 42, // SetFlag_B9400_A0056
  Ending_E_White_Book_Location_None = 1ull << 58,
};

enum class SnowGameFlags_C78 : unsigned long long
{
  Shadowlords_Castle_EID_6000_a0135_Novel_State = 1ull << 24, // EID_6000_a0135_Novel
};

enum class SnowGameFlags_C80 : unsigned long long
{
  BGM_B_Center_Library_Fade_State = 1ull << 60, // BGM_B_CENTER_LIBRARY_FO
  BGM_EID_3200_a0020_Fade_Check_State = 1ull << 61, // BGM_EID_3200_a0020
};

enum class SnowGameFlags_C90 : unsigned long long
{
  Promised_Gift_Seafront_Setup_Ready = 1ull << 0, // SEID_9320_S0010_SEASIDE_Set
};

enum class SnowGameFlags_CA8 : unsigned long long
{
  Route_B_EID_9500_a0010_State_01 = 1ull << 42, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_02 = 1ull << 43, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_03 = 1ull << 44, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_04 = 1ull << 45, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_05 = 1ull << 46, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_06 = 1ull << 47, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_07 = 1ull << 48, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_08 = 1ull << 49, // EID_9500_a0010
  Route_B_EID_9500_a0010_State_09 = 1ull << 50, // EID_9500_a0010
  Route_B_EID_9500_a0020_0030_State_01 = 1ull << 51, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_02 = 1ull << 52, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_03 = 1ull << 53, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_04 = 1ull << 54, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_05 = 1ull << 55, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_06 = 1ull << 56, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_07 = 1ull << 57, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_08 = 1ull << 58, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_09 = 1ull << 59, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_10 = 1ull << 60, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_11 = 1ull << 61, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_12 = 1ull << 62, // EID_9500_a0020/EID_9500_a0030
  Route_B_EID_9500_a0020_0030_State_13 = 1ull << 63, // EID_9500_a0020/EID_9500_a0030
};

enum class SnowGameFlags_CB0 : unsigned long long
{
  Route_B_EID_9600_a0010_State = 1ull << 0, // EID_9600_a0010
  Snow_Flag_1028_EID_9600_a0020_End = 1ull << 4, // EID_9600_a0020_End
  Snow_Flag_1029_EID_4030_a0140_End = 1ull << 5, // EID_4030_a0140_End
  Snow_Flag_1032_EID_9600_a0030_01_End = 1ull << 8, // EID_9600_a0030_01_End
  Route_B_Lost_Shrine_Radio_1652_Played = 1ull << 9,
  Snow_Flag_1034_JUMP_MAP_01 = 1ull << 10, // JUMP_MAP_01
  Snow_Flag_1035_JUMP_MAP_01 = 1ull << 11, // JUMP_MAP_01
  Snow_Flag_1036_Referenced = 1ull << 12,
  Route_A_Water_Drown_Radio_1_Played = 1ull << 14, // Drown_Radio_Water
  Route_A_Water_Drown_Radio_2_Played = 1ull << 15, // Drown_Radio_Water
  Route_A_Water_Drown_Radio_3_Played = 1ull << 16, // Drown_Radio_Water
  Route_A_Sand_Drown_Radio_1_Played = 1ull << 17, // Drown_Radio_Sand
  Route_A_Sand_Drown_Radio_2_Played = 1ull << 18, // Drown_Radio_Sand
  Route_A_Sand_Drown_Radio_3_Played = 1ull << 19, // Drown_Radio_Sand
  Route_B_Water_Drown_Radio_1_Played = 1ull << 20, // Drown_Radio_Water
  Route_B_Water_Drown_Radio_2_Played = 1ull << 21, // Drown_Radio_Water
  Route_B_Water_Drown_Radio_3_Played = 1ull << 22, // Drown_Radio_Water
  Route_B_Sand_Drown_Radio_1_Played = 1ull << 23, // Drown_Radio_Sand
  Route_B_Sand_Drown_Radio_2_Played = 1ull << 24, // Drown_Radio_Sand
  Route_B_Sand_Drown_Radio_3_Played = 1ull << 25, // Drown_Radio_Sand
  Manor_Blood_Pool_Scare_Seen = 1ull << 26, // Nier_Scream
  Junk_Heap_Snow_Talk_Text_02_Seen = 1ull << 27, // snow_Talk_Text02
  Act_1_North_Field_Right_Area_Tutorial_Seen = 1ull << 28, // Disp_Tutorial_00
  Act_1_North_Field_Double_Jump_Tutorial_Seen = 1ull << 29, // Disp_Tutorial_00
  Yonah_White_Book_Talk_Seen = 1ull << 30, // YONA_WHITEBOOK_TALK
  Act_1_North_Field_Right_Area_Radio_Seen = 1ull << 32, // Talk_Text_00_02
  Mermaid_Event_Global_State = 1ull << 33, // snow_Mermaid_Eventset
  White_Book_Location_Change_Disabled = 1ull << 37, // SetWhiteBookChangeLocationDisable
  Manor_Scare_Conversation_Alt_State = 1ull << 38,
  Manor_EID_1100_a0045g_01_Seen = 1ull << 40, // EID_1100_a0045g_01
  Manor_Red_Book_Radio_Text_Seen = 1ull << 41, // Radio_Text_01
  Junk_Heap_EID_4030_a0040_State = 1ull << 42, // EID_4030_a0040_Start
  Snow_Player_Just_Guard_Stage_1_Seen = 1ull << 43, // Snow_Player_Just_Guard
  Snow_Player_Just_Guard_Stage_2_Seen = 1ull << 44, // Snow_Player_Just_Guard
  Snow_Player_Just_Guard_Stage_3_Seen = 1ull << 45, // Snow_Player_Just_Guard
  Library_EID_2000_a0105g_Radio_1208_Played = 1ull << 46, // snow_RA_EID_2000_a0105g_020
  Library_EID_2000_a0105g_Radio_1209_Played = 1ull << 47, // EID_2000_a0105g_Radio_02
  Detoxification_Tutorial_Seen = 1ull << 49, // LIB_DetoxificationTutorial
  Route_B_Manor_EID_3100_a0015g_02_Seen = 1ull << 50, // EID_3100_a0015g_02
  Route_B_Manor_Shake_Camera_X_Open_State = 1ull << 51, // SHAKE_CAMERA_X_OPEN
  Route_B_Manor_EID_3100_a0015g_01_Seen = 1ull << 52, // EID_3100_a0015g_01
  Ending_E_Selection_Event_State = 1ull << 53, // LIB_EID3900_SELECTION_START
  Ending_E_Shadowlord_Defeated_State = 1ull << 56, // EID_6000_a0195g
  Black_Pearl_Pickup_State = 1ull << 57, // Snow_Get_BlackPearl
  Route_A_NPC02_End_Talk_Seen = 1ull << 58, // EID_1500_a0020g_0020_End_Talk_NPC02
  Route_A_NPC03_End_Talk_Seen = 1ull << 59, // EID_1500_a0020g_0020_End_Talk_NPC03
  Snow_Flag_1084_A_NORTH_FIELD_01_Nier_is_in_RIGHT_AREA_03 = 1ull << 60,
  Village_EID_0300_a0015g_010_Talk_Text_04_Seen = 1ull << 61, // Talk_Text_04
};

enum class SnowGameFlags_CB8 : unsigned long long
{
  Second_Play_Start_Flag = 1ull << 12, // SECOND_PLAY_START_FLAG_ON
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
  int level;
  int level_kaine;
  int level_emil;
  int xp;
  int xp_kaine;
  int xp_emil;
  char unk4[4];
  Order order_kaine;
  Order order_emil;
  Weapon active_weapon;
  Weapon selected_one_handed_sword;
  Weapon selected_two_handed_sword;
  Weapon selected_spear;
  Weapon selected_young_one_handed_sword;
  int selected_item;
  Ability ability_lb;
  Ability ability_rb;
  Ability ability_lt;
  Ability ability_rt;
  Ability_Unlocks ability_unlocks;
  int money;
  Recovery recovery;
  char unused_item_34_40[7];
  Cultivation cultivation;
  char unused_item_91_100[10];
  Fishing fishing;
  char unused_item_126_130[5];
  Raw_Materials raw_materials;
  Key_Items key_items;
  char unused_item_336_511[176];
  Documents documents;
  char unused_item_536_543[8];
  Extra_Documents extra_documents;
  char unused_item_548_561[14];
  bool unnamed_readable_562;
  char unused_item_563_703[141];
  Maps maps;
  char unused_item_728_767[40];
  unsigned long long item_collection_flags[12]; // bitfield based on item id
  unsigned long long item_new_flags[12]; // bitfield based on item id
  unsigned long long unused_item_flag_tail[4];
  double total_play_time;
  char reserved_04a8[4];
  Weapons weapons;
  char reserved_04ec[4];
  unsigned long long unused_weapon_flags_04f0;
  unsigned long long weapon_new_flags;
  GameFlags_500 game_flags_500;
  GameFlags_508 game_flags_508;
  GameFlags_510 game_flags_510;
  GameFlags_518 game_flags_518;
  GameFlags_520 game_flags_520;
  GameFlags_528 game_flags_528;
  GameFlags_530 game_flags_530;
  GameFlags_538 game_flags_538;
  GameFlags_540 game_flags_540;
  GameFlags_548 game_flags_548;
  GameFlags_550 game_flags_550;
  GameFlags_558 game_flags_558;
  GameFlags_560 game_flags_560;
  GameFlags_568 game_flags_568;
  GameFlags_570 game_flags_570;
  unsigned long long unused_game_flags_578;
  GameFlags_580 game_flags_580;
  unsigned long long unused_game_flags_588[3];
  GameFlags_5A0 game_flags_5a0;
  GameFlags_5A8 game_flags_5a8;
  GameFlags_5B0 game_flags_5b0;
  GameFlags_5B8 game_flags_5b8;
  GameFlags_5C0 game_flags_5c0;
  GameFlags_5C8 game_flags_5c8;
  GameFlags_5D0 game_flags_5d0;
  GameFlags_5D8 game_flags_5d8;
  GameFlags_5E0 game_flags_5e0;
  GameFlags_5E8 game_flags_5e8;
  GameFlags_5F0 game_flags_5f0;
  GameFlags_5F8 game_flags_5f8;
  unsigned char game_counters[256];
  int quest_text_id;
  int quest_text_item_id;
  unsigned char quest_text_item_count;
  char reserved_0709[3];
  int mediate_quest_id;
  float quest_destination_x;
  float quest_destination_z;
  unsigned long long quest_new_flags[4];
  Words_Uloth words_uloth;
  Words_Zarken words_zarken;
  unsigned long long word_new_flags[2];
  unsigned char equipped_word_slot_1[74];
  unsigned char equipped_word_slot_2[74];
  char reserved_07ec[4];
  Tutorials_7F0 tutorials_7f0;
  Tutorials_7F8 tutorials_7f8;
  unsigned long long tutorial_new_flags[2];
  unsigned int open_loading_message_flags;
  int fishing_level;
  Fishing_Record_Measurements fishing_record_lengths;
  Fishing_Record_Measurements fishing_record_weights;
  Cultivation_Plot cultivation_plots[15];
  bool has_white_book;
  char reserved_0b01[167];
  unsigned char castle_key_order[5];
  unsigned char castle_key_new_flags;
  char reserved_0bae[10];
  unsigned char fishing_record_update_flags[24];
  char reserved_0bd0[8];
  unsigned char save_slot_copy_marker;
  char reserved_0bd9[71];
  char reserved_0c20[4];
  char reserved_0c24[12];
  SnowGameFlags_C30 snow_game_flags_c30;
  SnowGameFlags_C38 snow_game_flags_c38;
  SnowGameFlags_C40 snow_game_flags_c40;
  SnowGameFlags_C48 snow_game_flags_c48;
  SnowGameFlags_C50 snow_game_flags_c50;
  unsigned long long snow_game_flags_0c58[2];
  SnowGameFlags_C68 snow_game_flags_c68;
  SnowGameFlags_C70 snow_game_flags_c70;
  SnowGameFlags_C78 snow_game_flags_c78;
  SnowGameFlags_C80 snow_game_flags_c80;
  unsigned long long snow_game_flags_0c88;
  SnowGameFlags_C90 snow_game_flags_c90;
  unsigned long long snow_game_flags_0c98[2];
  SnowGameFlags_CA8 snow_game_flags_ca8;
  SnowGameFlags_CB0 snow_game_flags_cb0;
  SnowGameFlags_CB8 snow_game_flags_cb8;
  unsigned long long snow_game_flags_0cc0[14];
  unsigned char snow_game_counters[256];
  int is_kaine_player;
  int kaine_player_health;
  float kaine_player_magic;
  int kaine_player_level;
  int kaine_player_xp;
};
