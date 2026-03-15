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
  XP: number;

  "Order Kaine": number;
  "Order Emil": number;
  "Active Weapon": number;
  "Selected One Handed Sword": number;
  "Selected Two Handed Sword": number;
  "Selected Spear": number;

  "Left Bumper": number;
  "Right Bumper": number;
  "Left Trigger": number;
  "Right Trigger": number;

  Money: number;
  Recovery: Record<string, number>;

  Cultivation: Record<string, number>;

  Fishing: Record<string, number>;

  "Raw Materials": Record<string, number>;
  "Key Items": Record<string, number>;

  Documents: Record<string, number>;

  Maps: Record<string, number>;

  "Total Play Time": number;

  Weapons: Record<string, number>;

  Quests: number[];

  Words: number[];

  Tutorials: number[];

  Quest: number;

  Checksum: number;
}
