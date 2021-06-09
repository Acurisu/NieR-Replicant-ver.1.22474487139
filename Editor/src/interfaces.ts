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
  Recovery: any;

  Cultivation: any;

  Fishing: any;

  "Raw Materials": any;
  "Key Items": any;

  Documents: any;

  Maps: any;

  "Total Play Time": number;

  Weapons: any;

  Quests: number[];

  Words: number[];

  Tutorials: number[];

  Quest: number;

  Checksum: number;
}