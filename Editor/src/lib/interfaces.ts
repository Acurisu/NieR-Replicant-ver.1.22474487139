export interface CultivationPlot {
  Plant: number;
  "Harvest Count": number;
  Fertilizer: number;
  "Action Flags": number;
  "Rotation Degrees": number;
}

export interface Savefile {
  Corruptness: number;
  Map: string;
  Spawn: number;
  Character: number;
  Name: string;
  Health: number;
  "Health Kaine": number;
  "Health Emil": number;
  Magic: number;
  "Magic Kaine": number;
  "Magic Emil": number;

  Level: number;
  "Level Kaine": number;
  "Level Emil": number;
  XP: number;
  "XP Kaine": number;
  "XP Emil": number;

  "Order Kaine": number;
  "Order Emil": number;
  "Active Weapon": number;
  "Selected One Handed Sword": number;
  "Selected Two Handed Sword": number;
  "Selected Spear": number;
  "Selected Young One Handed Sword": number;
  "Selected Item": number;

  "Left Bumper": number;
  "Right Bumper": number;
  "Left Trigger": number;
  "Right Trigger": number;
  "Ability Unlocks": Record<string, number>;

  Money: number;
  Recovery: Record<string, number>;

  Cultivation: Record<string, number>;

  Fishing: Record<string, number>;

  "Raw Materials": Record<string, number>;
  "Key Items": Record<string, number>;

  Documents: Record<string, number>;
  "Extra Documents": Record<string, number>;
  "Unnamed Readable 562": number;

  Maps: Record<string, number>;

  "Item Collection Flags": number[];
  "Item New Flags": number[];

  "Total Play Time": number;

  Weapons: Record<string, number>;
  "Weapon New Flags": number[];

  gameFlags500To5BF: number[];
  Quests: number[];

  "Game Counters": number[];
  "Quest Text Id": number;
  "Quest Text Item Id": number;
  "Quest Text Item Count": number;
  "Mediate Quest Id": number;
  "Quest Destination X": number;
  "Quest Destination Z": number;
  "Quest New Flags": number[];

  Words: number[];
  "Word New Flags": number[];
  "Equipped Word Slot 1": number[];
  "Equipped Word Slot 2": number[];

  Tutorials: number[];
  "Tutorial New Flags": number[];
  "Open Loading Message Flags": number;
  "Fishing Level": number;
  "Fishing Record Lengths": Record<string, number>;
  "Fishing Record Weights": Record<string, number>;
  "Cultivation Plots": CultivationPlot[];
  "Has White Book": number;
  "Castle Key Order": number[];
  "Castle Key New Flags": number;
  "Fishing Record Update Flags": number[];
  "Save Slot Copy Marker": number;

  snowGameFlagsC30: number[];
  Quest: number;
  snowGameFlagsC50: number[];
  snowGameCounters: number[];
  "Is Kaine Player": number;
  "Kaine Player Health": number;
  "Kaine Player Magic": number;
  "Kaine Player Level": number;
  "Kaine Player XP": number;

  Checksum: number;
}
