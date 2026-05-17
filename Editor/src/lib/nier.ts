export const cksum = (buffer: DataView, idx: number) => {
  const result = new Uint32Array(4).fill(0);

  for (let i = idx; i < idx + 0xc20; i += 8) {
    result[0] += buffer.getUint8(i) + buffer.getUint8(i + 4);
    result[1] += buffer.getUint8(i + 1) + buffer.getUint8(i + 5);
    result[2] += buffer.getUint8(i + 2) + buffer.getUint8(i + 6);
    result[3] += buffer.getUint8(i + 3) + buffer.getUint8(i + 7);
  }

  result[0] += result[2];
  result[1] += result[3];

  return result[0] + result[1];
};

export const savefile = {
  GAMEDATA: {
    unk: ["skip", 0x8160],
    "Slot 1": "Savefile",
    "Slot 2": "Savefile",
    "Slot 3": "Savefile",
    unk2: ["skip", 0x24980],
  },

  Savefile: {
    Corruptness: "uint32",
    Map: ["string0", 32],
    Spawn: "uint32",
    Character: "uint32",
    Name: ["string0", 32],
    Health: "int32",
    "Health Kaine": "int32",
    "Health Emil": "int32",
    Magic: "float32",
    "Magic Kaine": "float32",
    "Magic Emil": "float32",
    Level: "int32",
    "Level Kaine": "int32",
    "Level Emil": "int32",
    XP: "int32",
    "XP Kaine": "int32",
    "XP Emil": "int32",
    unk4: ["skip", 4],
    "Order Kaine": "uint32",
    "Order Emil": "uint32",
    "Active Weapon": "uint32",
    "Selected One Handed Sword": "uint32",
    "Selected Two Handed Sword": "uint32",
    "Selected Spear": "uint32",
    "Selected Young One Handed Sword": "uint32",
    "Selected Item": "int32",
    "Left Bumper": "uint32",
    "Right Bumper": "uint32",
    "Left Trigger": "uint32",
    "Right Trigger": "uint32",
    "Ability Unlocks": "Ability Unlocks",
    Money: "int32",
    Recovery: "Recovery",
    unusedItem34To40: ["skip", 7],
    Cultivation: "Cultivation",
    unusedItem91To100: ["skip", 10],
    Fishing: "Fishing",
    unusedItem126To130: ["skip", 5],
    "Raw Materials": "Raw Materials",
    "Key Items": "Key Items",
    unusedItem336To511: ["skip", 176],
    Documents: "Documents",
    unusedItem536To543: ["skip", 8],
    "Extra Documents": "Extra Documents",
    unusedItem548To561: ["skip", 14],
    "Unnamed Readable 562": "uint8",
    unusedItem563To703: ["skip", 141],
    Maps: "Maps",
    unusedItem728To767: ["skip", 40],
    "Item Collection Flags": "Item Collection Flags",
    "Item New Flags": "Item New Flags",
    unusedItemFlagTail: ["skip", 32],
    "Total Play Time": "double",
    reserved04A8: ["skip", 4],
    Weapons: "Weapons",
    reserved04EC: ["skip", 4],
    unusedWeaponFlags04F0: ["skip", 8],
    "Weapon New Flags": ["array", "uint32", 2],
    gameFlags500To5BF: ["array", "uint32", 48],
    Quests: ["array", "uint32", 16],
    "Game Counters": ["array", "uint8", 256],
    "Quest Text Id": "uint32",
    "Quest Text Item Id": "int32",
    "Quest Text Item Count": "uint8",
    reserved0709: ["skip", 3],
    "Mediate Quest Id": "int32",
    "Quest Destination X": "float32",
    "Quest Destination Z": "float32",
    "Quest New Flags": ["array", "uint32", 8],
    Words: ["array", "uint32", 4],
    "Word New Flags": ["array", "uint32", 4],
    "Equipped Word Slot 1": ["array", "uint8", 74],
    "Equipped Word Slot 2": ["array", "uint8", 74],
    reserved07EC: ["skip", 4],
    Tutorials: ["array", "uint32", 4],
    "Tutorial New Flags": ["array", "uint32", 4],
    "Open Loading Message Flags": "uint32",
    "Fishing Level": "int32",
    "Fishing Record Lengths": "Fishing Record Measurements",
    "Fishing Record Weights": "Fishing Record Measurements",
    "Cultivation Plots": ["array", "Cultivation Plot", 15],
    "Has White Book": "uint8",
    reserved0B01: ["skip", 167],
    "Castle Key Order": ["array", "uint8", 5],
    "Castle Key New Flags": "uint8",
    reserved0BAE: ["skip", 10],
    "Fishing Record Update Flags": ["array", "uint8", 24],
    reserved0BD0: ["skip", 8],
    "Save Slot Copy Marker": "uint8",
    reserved0BD9: ["skip", 71],
    reserved0C20: ["skip", 4],
    reserved0C24: ["skip", 12],
    snowGameFlagsC30: ["array", "uint32", 7],
    Quest: "uint32",
    snowGameFlagsC50: ["array", "uint32", 56],
    snowGameCounters: ["array", "uint8", 256],
    "Is Kaine Player": "uint32",
    "Kaine Player Health": "int32",
    "Kaine Player Magic": "float32",
    "Kaine Player Level": "int32",
    "Kaine Player XP": "int32",
    unk18b: ["skip", 0x840c],
    Checksum: "uint32",
    unk19: ["skip", 0xc],
  },

  "Ability Unlocks": {
    unused: ["skip", 1],
    Defend: "uint8",
    Evade: "uint8",
    "Dark Blast": "uint8",
    "Dark Phantasm": "uint8",
    "Dark Hand": "uint8",
    "Dark Lance": "uint8",
    "Dark Whirlwind": "uint8",
    "Dark Gluttony": "uint8",
    "Dark Wall": "uint8",
    "Dark Execution": "uint8",
    unused1: ["skip", 1],
  },

  Recovery: {
    "Medicinal Herb": "uint8",
    "Health Salve": "uint8",
    "Recovery Potion": "uint8",
    unusedItem3To20: ["skip", 18],
    "Strength Drop": "uint8",
    "Strength Capsule": "uint8",
    "Magic Drop": "uint8",
    "Magic Capsule": "uint8",
    "Defense Drop": "uint8",
    "Defense Capsule": "uint8",
    "Spirit Drop": "uint8",
    "Spirit Capsule": "uint8",
    unusedItem29To30: ["skip", 2],
    "Antidotal Weed": "uint8",
    unusedItem32: ["skip", 1],
    "Smelling Salts": "uint8",
  },

  Cultivation: {
    "Speed Fertilizer": "uint8",
    "Flowering Fertilizer": "uint8",
    "Bounty Fertilizer": "uint8",
    unusedItem44To45: ["skip", 2],
    "Pumpkin Seed": "uint8",
    "Watermelon Seed": "uint8",
    "Melon Seed": "uint8",
    "Gourd Seed": "uint8",
    "Tomato Seed": "uint8",
    "Eggplant Seed": "uint8",
    "Bell Pepper Seed": "uint8",
    "Bean Seed": "uint8",
    "Wheat Seedling": "uint8",
    "Rice Plant Seedling": "uint8",
    "Dahlia Bulb": "uint8",
    "Tulip Bulb": "uint8",
    "Freesia Bulb": "uint8",
    "Red Moonflower Seed": "uint8",
    "Gold Moonflower Seed": "uint8",
    "Peach Moonflower Seed": "uint8",
    "Pink Moonflower Seed": "uint8",
    "Blue Moonflower Seed": "uint8",
    "Indigo Moonflower Seed": "uint8",
    "White Moonflower Seed": "uint8",
    unusedItem66To70: ["skip", 5],
    Pumpkin: "uint8",
    Watermelon: "uint8",
    Melon: "uint8",
    Gourd: "uint8",
    Tomato: "uint8",
    Eggplant: "uint8",
    "Bell Pepper": "uint8",
    Beans: "uint8",
    Wheat: "uint8",
    Rice: "uint8",
    Dahlia: "uint8",
    Tulip: "uint8",
    Freesia: "uint8",
    "Red Moonflower": "uint8",
    "Gold Moonflower": "uint8",
    "Peach Moonflower": "uint8",
    "Pink Moonflower": "uint8",
    "Blue Moonflower": "uint8",
    "Indigo Moonflower": "uint8",
    "White Moonflower": "uint8",
  },

  Fishing: {
    Lugworm: "uint8",
    Earthworm: "uint8",
    Lure: "uint8",
    unusedItem104To110: ["skip", 7],
    Sardine: "uint8",
    Carp: "uint8",
    Blowfish: "uint8",
    Bream: "uint8",
    Shark: "uint8",
    "Blue Marlin": "uint8",
    Dunkleosteus: "uint8",
    "Rainbow Trout": "uint8",
    "Black Bass": "uint8",
    "Giant Catfish": "uint8",
    "Royal Fish": "uint8",
    Hyneria: "uint8",
    Sandfish: "uint8",
    Rhizodont: "uint8",
    "Shaman Fish": "uint8",
  },

  "Fishing Record Measurements": {
    "Aquatic Plant": "double",
    Deadwood: "double",
    "Rusty Bucket": "double",
    "Empty Can": "double",
    "Rusted Clump": "double",
    Sardine: "double",
    Blowfish: "double",
    Bream: "double",
    Shark: "double",
    "Blue Marlin": "double",
    Dunkleosteus: "double",
    Carp: "double",
    "Rainbow Trout": "double",
    "Black Bass": "double",
    "Giant Catfish": "double",
    "Royal Fish": "double",
    Hyneria: "double",
    Sandfish: "double",
    Rhizodont: "double",
    "Shaman Fish": "double",
    reservedRecord20To23: ["skip", 32],
  },

  "Cultivation Plot": {
    Plant: "int8",
    "Harvest Count": "uint8",
    reserved02: ["skip", 2],
    Fertilizer: "int32",
    "Action Flags": "uint8",
    reserved09: ["skip", 3],
    "Rotation Degrees": "float32",
    plantedTime: ["skip", 8],
  },

  "Raw Materials": {
    "Aquatic Plant": "uint8",
    Deadwood: "uint8",
    "Rusty Bucket": "uint8",
    "Empty Can": "uint8",
    unusedItem135To137: ["skip", 3],
    "Gold Ore": "uint8",
    "Silver Ore": "uint8",
    "Copper Ore": "uint8",
    "Iron Ore": "uint8",
    Crystal: "uint8",
    Pyrite: "uint8",
    Moldavite: "uint8",
    Meteorite: "uint8",
    Amber: "uint8",
    Fluorite: "uint8",
    Clay: "uint8",
    unusedItem149To152: ["skip", 4],
    Berries: "uint8",
    "Royal Fern": "uint8",
    "Tree Branch": "uint8",
    Log: "uint8",
    "Natural Rubber": "uint8",
    Ivy: "uint8",
    Lichen: "uint8",
    Mushroom: "uint8",
    Sap: "uint8",
    unusedItem162To166: ["skip", 5],
    Mutton: "uint8",
    "Boar Meat": "uint8",
    Wool: "uint8",
    "Boar Hide": "uint8",
    "Wolf Hide": "uint8",
    "Wolf Fang": "uint8",
    "Giant Spider Silk": "uint8",
    "Bat Fang": "uint8",
    "Bat Wing": "uint8",
    "Goat Meat": "uint8",
    "Goat Hide": "uint8",
    Venison: "uint8",
    "Rainbow Spider Silk": "uint8",
    "Boar Liver": "uint8",
    "Scorpion Claw": "uint8",
    "Scorpion Tail": "uint8",
    "Dented Metal Board": "uint8",
    "Stripped Bolt": "uint8",
    "Broken Lens": "uint8",
    "Severed Cable": "uint8",
    "Broken Arm": "uint8",
    "Broken Antenna": "uint8",
    "Broken Motor": "uint8",
    "Broken Battery": "uint8",
    "Mysterious Switch": "uint8",
    "Large Gear": "uint8",
    "Titanium Alloy": "uint8",
    "Memory Alloy": "uint8",
    "Rusted Clump": "uint8",
    "Machine Oil": "uint8",
    unusedItem197To200: ["skip", 4],
    "Forlorn Necklace": "uint8",
    "Twisted Ring": "uint8",
    "Broken Earring": "uint8",
    "Pretty Choker": "uint8",
    "Metal Piercing": "uint8",
    "Subdued Bracelet": "uint8",
    "Technical Guide": "uint8",
    "Grubby Book": "uint8",
    "Thick Dictionary": "uint8",
    "Closed Book": "uint8",
    "Used Coloring Book": "uint8",
    "Old Schoolbook": "uint8",
    "Dirty Bag": "uint8",
    "Flashy Hat": "uint8",
    "Leather Gloves": "uint8",
    "Silk Handkerchief": "uint8",
    "Leather Boots": "uint8",
    "Complex Machine": "uint8",
    "Elaborate Machine": "uint8",
    "Simple Machine": "uint8",
    "Stopped Clock": "uint8",
    "Broken Wristwatch": "uint8",
    "Rusty Kitchen Knife": "uint8",
    "Broken Saw": "uint8",
    "Dented Metal Bat": "uint8",
    unusedItem226: ["skip", 1],
    Shell: "uint8",
    Gastropod: "uint8",
    Bivalve: "uint8",
    Seaweed: "uint8",
    "Empty Bottle": "uint8",
    Driftwood: "uint8",
    Pearl: "uint8",
    "Black Pearl": "uint8",
    Crab: "uint8",
    Starfish: "uint8",
    unusedItem237To241: ["skip", 5],
    "Sea Turtle Egg": "uint8",
    "Broken Pottery": "uint8",
    "Desert Rose": "uint8",
    "Giant Egg": "uint8",
    "Damascus Steel": "uint8",
    "Eagle Egg": "uint8",
    "Chicken Egg": "uint8",
    unusedItem249: ["skip", 1],
    "Mouse Tail": "uint8",
    "Lizard Tail": "uint8",
    unusedItem252To254: ["skip", 3],
    "Deer Antler": "uint8",
  },

  "Key Items": {
    "Moon Key": "uint8",
    "Star Key": "uint8",
    "Light Key": "uint8",
    "Darkness Key": "uint8",
    "Fine Flour": "uint8",
    "Coarse Flour": "uint8",
    "Perfume Bottle": "uint8",
    "Postman's Parcel": "uint8",
    "Lover's Letter": "uint8",
    "Water Filter": "uint8",
    "Royal Compass": "uint8",
    "Vapor Moss": "uint8",
    "Valley Spider Silk": "uint8",
    "Animal Guidebook": "uint8",
    "Ore Guidebook": "uint8",
    "Plant Guidebook": "uint8",
    "Red Book": "uint8",
    "Blue Book": "uint8",
    "Old Lady's Elixir": "uint8",
    "Old Lady's Elixir+": "uint8",
    "Parcel for The Aerie": "uint8",
    "Parcel for Seafront": "uint8",
    Cookbook: "uint8",
    "Parcel for Facade": "uint8",
    "Max's Herbs": "uint8",
    "Drifting Cargo": "uint8",
    "Drifting Cargo 2": "uint8",
    "Drifting Cargo 3": "uint8",
    "Drifting Cargo 4": "uint8",
    "Old Package": "uint8",
    "Mermaid Tear": "uint8",
    "Mandrake Leaf": "uint8",
    Energizer: "uint8",
    "Toad Oil": "uint8",
    "Sleep-B-Gone": "uint8",
    Antidote: "uint8",
    "Gold Bracelet": "uint8",
    "Elite Kitchen Knife": "uint8",
    "Elevator Parts": "uint8",
    "Dirty Treasure Map": "uint8",
    "Restored Treasure Map": "uint8",
    "Jade Hair Ornament": "uint8",
    "Employee List": "uint8",
    "Small Safe": "uint8",
    "Safe Key": "uint8",
    "Great Tree Root": "uint8",
    "Eye of Power": "uint8",
    Ribbon: "uint8",
    "Yonah's Ribbon": "uint8",
    "Bronze Key": "uint8",
    "Brass Key": "uint8",
    "Boar Tusk": "uint8",
    "Pressed Freesia": "uint8",
    "Potted Freesia": "uint8",
    "Freesia (Delivery)": "uint8",
    "Pile of Junk": "uint8",
    "Old Gold Coin": "uint8",
    "Marked Map": "uint8",
    "AA Keycard": "uint8",
    "KA Keycard": "uint8",
    "SA Keycard": "uint8",
    "TA Keycard": "uint8",
    "NA Keycard": "uint8",
    "HA Keycard": "uint8",
    "MA Keycard": "uint8",
    "YA Keycard": "uint8",
    "RA Keycard": "uint8",
    "WA Keycard": "uint8",
    "Cultivator's Handbook": "uint8",
    "Red Bag": "uint8",
    Lantern: "uint8",
    "Empty Lantern": "uint8",
    "Hold Key": "uint8",
    "Passageway Key": "uint8",
    "Goat Key": "uint8",
    "Lizard Key": "uint8",
    "Unlocking Procedure Memo": "uint8",
    "Red Jewel?": "uint8",
    "Red Flowers": "uint8",
    Apples: "uint8",
  },

  Documents: {
    "Look at the Sky": "uint8",
    "Don't try so hard": "uint8",
    "My Birthday!": "uint8",
    "Love Letter 2/12/3340": "uint8",
    "Love Letter 3/28/3340": "uint8",
    "Love Letter 5/1/3340": "uint8",
    "Letter from the Mayor": "uint8",
    "The Postman's Request": "uint8",
    "The Postman's Thanks": "uint8",
    "Invitation from a Stranger": "uint8",
    "Grand Re-Opening Notice": "uint8",
    "Wedding Invitation": "uint8",
    "Letter from the King": "uint8",
    "Underground Research Record 1": "uint8",
    "Underground Research Record 2": "uint8",
    "Underground Research Record 3": "uint8",
    "Underground Research Record 4": "uint8",
    "Letter to the Chief": "uint8",
    "Letter to two Brothers Weaponry": "uint8",
    "Letter to Popola": "uint8",
    "Letter to a Faraway Lover": "uint8",
    "Letter from Emil": "uint8",
    "Weapon Upgrade Notice": "uint8",
    "Letter from the Chief of The Aerie": "uint8",
  },

  "Extra Documents": {
    "Project Gestalt Report 0923": "uint8",
    "Project Gestalt Report 9182": "uint8",
    "Project Gestalt Report 10432": "uint8",
    "Project Gestalt Report 11242": "uint8",
  },

  Maps: {
    "World Map": "uint8",
    unusedItem705To706: ["skip", 2],
    "<NIER>'s Village Map": "uint8",
    "Lost Shrine Area Map": "uint8",
    "Lost Shrine Map": "uint8",
    "The Aerie Map": "uint8",
    "Seafront Map": "uint8",
    "Desert Map": "uint8",
    "Facade Map": "uint8",
    "Barren Temple Map": "uint8",
    "Junk Heap Area Map": "uint8",
    "Junk Heap Map": "uint8",
    "Manor Map": "uint8",
    "Forest of Myth Map": "uint8",
    "Underground Facility Map": "uint8",
    unusedItem720: ["skip", 1],
    "Shadowlord's Castle Map": "uint8",
    unusedItem722: ["skip", 1],
    "Northern Plains Map": "uint8",
    "Southern Plains Map": "uint8",
    "Eastern Road Map": "uint8",
    "Beneath the Forest of Myth Map": "uint8",
    "Tokyo Map": "uint8",
  },

  "Item Collection Flags": ["array", "uint32", 24],

  "Item New Flags": ["array", "uint32", 24],

  Weapons: {
    "Nameless Blade": "uint8",
    "Phoenix Dagger": "uint8",
    Beastbain: "uint8",
    "Labyrinth's Whisper": "uint8",
    "Fool's Embrace": "uint8",
    "Ancient Overlord": "uint8",
    Rebirth: "uint8",
    "Earth Wyrm's Claw": "uint8",
    "Nirvana Dagger": "uint8",
    Moonrise: "uint8",
    "Blade of Treachery": "uint8",
    "Lily-Leaf Sword": "uint8",
    Faith: "uint8",
    "Iron Pipe": "uint8",
    "Kainé's Sword": "uint8",
    "Virtuous Contract": "uint8",
    "Cruel Oath": "uint8",
    unusedWeapon17To19: ["skip", 3],
    Kusanagi: "uint8",
    "Phoenix Sword": "uint8",
    Beastlord: "uint8",
    "Labyrinth's Song": "uint8",
    "Fool's Lament": "uint8",
    "Fang of the Twins": "uint8",
    "Axe of Beheading": "uint8",
    "Vile Axe": "uint8",
    "Iron Will": "uint8",
    "Virtuous Treaty": "uint8",
    unusedWeapon30To39: ["skip", 10],
    Transience: "uint8",
    "Phoenix Spear": "uint8",
    Beastcurse: "uint8",
    "Labyrinth's Shout": "uint8",
    "Fool's Accord": "uint8",
    "The Devil Queen": "uint8",
    Sunrise: "uint8",
    "Spear of the Usurper": "uint8",
    "Dragoon Lance": "uint8",
    "Captain's Holy Spear": "uint8",
    "Virtuous Dignity": "uint8",
    unusedWeapon51To63: ["skip", 13],
  },
};

type PrimitiveType =
  | "uint8"
  | "int8"
  | "uint32"
  | "int32"
  | "float32"
  | "double";
type SkipDescriptor = ["skip", number];
type StringDescriptor = ["string0", number];
type ArrayDescriptor = ["array", TypeDescriptor, number];
interface SchemaObject {
  [key: string]:
    | PrimitiveType
    | SkipDescriptor
    | StringDescriptor
    | ArrayDescriptor
    | SchemaObject
    | string;
}
type TypeDescriptor =
  | PrimitiveType
  | SkipDescriptor
  | StringDescriptor
  | ArrayDescriptor
  | SchemaObject
  | string;

class BinaryEditor {
  buffer: ArrayBuffer;
  view: DataView;

  private readonly decoder = new TextDecoder();
  private readonly encoder = new TextEncoder();

  constructor(buffer: ArrayBuffer) {
    this.buffer = buffer;
    this.view = new DataView(buffer);
  }

  readAll() {
    const cursor = { offset: 0 };
    return this.readDescriptor("GAMEDATA", cursor);
  }

  writeAll(data: unknown) {
    const cursor = { offset: 0 };
    this.writeDescriptor("GAMEDATA", cursor, data);
  }

  saveAs(fileName: string) {
    const blob = new Blob([this.buffer], {
      type: "application/octet-stream",
    });
    const url = URL.createObjectURL(blob);
    const link = document.createElement("a");

    link.href = url;
    link.download = fileName;
    link.click();

    setTimeout(() => URL.revokeObjectURL(url), 0);
  }

  private resolveNamedType(name: string): TypeDescriptor {
    const descriptor = (savefile as unknown as Record<string, TypeDescriptor>)[name];

    if (!descriptor) {
      throw new Error(`Unknown schema type: ${name}`);
    }

    return descriptor;
  }

  private readDescriptor(
    descriptor: TypeDescriptor,
    cursor: { offset: number }
  ): unknown {
    if (typeof descriptor === "string") {
      if (
        descriptor === "uint8" ||
        descriptor === "int8" ||
        descriptor === "uint32" ||
        descriptor === "int32" ||
        descriptor === "float32" ||
        descriptor === "double"
      ) {
        return this.readPrimitive(descriptor, cursor);
      }

      return this.readDescriptor(this.resolveNamedType(descriptor), cursor);
    }

    if (Array.isArray(descriptor)) {
      const kind = descriptor[0];

      if (kind === "skip") {
        const [, size] = descriptor as SkipDescriptor;
        cursor.offset += size;
        return undefined;
      }

      if (kind === "string0") {
        const [, size] = descriptor as StringDescriptor;
        const bytes = new Uint8Array(this.buffer, cursor.offset, size);
        cursor.offset += size;

        const end = bytes.indexOf(0);
        return this.decoder.decode(end === -1 ? bytes : bytes.slice(0, end));
      }

      const [, entry, count] = descriptor as ArrayDescriptor;
      return Array.from({ length: count }, () =>
        this.readDescriptor(entry, cursor)
      );
    }

    const result: Record<string, unknown> = {};

    Object.entries(descriptor).forEach(([key, value]) => {
      if (Array.isArray(value) && value[0] === "skip") {
        cursor.offset += value[1];
        return;
      }

      result[key] = this.readDescriptor(value, cursor);
    });

    return result;
  }

  private writeDescriptor(
    descriptor: TypeDescriptor,
    cursor: { offset: number },
    value: unknown
  ) {
    if (typeof descriptor === "string") {
      if (
        descriptor === "uint8" ||
        descriptor === "int8" ||
        descriptor === "uint32" ||
        descriptor === "int32" ||
        descriptor === "float32" ||
        descriptor === "double"
      ) {
        this.writePrimitive(descriptor, cursor, value as number);
        return;
      }

      this.writeDescriptor(this.resolveNamedType(descriptor), cursor, value);
      return;
    }

    if (Array.isArray(descriptor)) {
      const kind = descriptor[0];

      if (kind === "skip") {
        const [, size] = descriptor as SkipDescriptor;
        cursor.offset += size;
        return;
      }

      if (kind === "string0") {
        const [, size] = descriptor as StringDescriptor;
        const bytes = new Uint8Array(this.buffer, cursor.offset, size);
        bytes.fill(0);

        const encoded = this.encoder.encode(String(value ?? ""));
        bytes.set(encoded.slice(0, Math.max(0, size - 1)));
        cursor.offset += size;
        return;
      }

      const [, entry, count] = descriptor as ArrayDescriptor;
      const items = Array.isArray(value) ? value : [];

      for (let index = 0; index < count; index += 1) {
        this.writeDescriptor(entry, cursor, items[index]);
      }

      return;
    }

    const objectValue = (value ?? {}) as Record<string, unknown>;

    Object.entries(descriptor).forEach(([key, entry]) => {
      if (Array.isArray(entry) && entry[0] === "skip") {
        cursor.offset += entry[1];
        return;
      }

      this.writeDescriptor(entry, cursor, objectValue[key]);
    });
  }

  private readPrimitive(
    type: PrimitiveType,
    cursor: { offset: number }
  ): number {
    const offset = cursor.offset;

    switch (type) {
      case "uint8":
        cursor.offset += 1;
        return this.view.getUint8(offset);
      case "int8":
        cursor.offset += 1;
        return this.view.getInt8(offset);
      case "uint32":
        cursor.offset += 4;
        return this.view.getUint32(offset, true);
      case "int32":
        cursor.offset += 4;
        return this.view.getInt32(offset, true);
      case "float32":
        cursor.offset += 4;
        return this.view.getFloat32(offset, true);
      case "double":
        cursor.offset += 8;
        return this.view.getFloat64(offset, true);
    }
  }

  private writePrimitive(
    type: PrimitiveType,
    cursor: { offset: number },
    value: number
  ) {
    const offset = cursor.offset;
    const safeValue = Number.isFinite(value) ? value : 0;

    switch (type) {
      case "uint8":
        this.view.setUint8(offset, safeValue);
        cursor.offset += 1;
        return;
      case "int8":
        this.view.setInt8(offset, safeValue);
        cursor.offset += 1;
        return;
      case "uint32":
        this.view.setUint32(offset, safeValue >>> 0, true);
        cursor.offset += 4;
        return;
      case "int32":
        this.view.setInt32(offset, safeValue | 0, true);
        cursor.offset += 4;
        return;
      case "float32":
        this.view.setFloat32(offset, safeValue, true);
        cursor.offset += 4;
        return;
      case "double":
        this.view.setFloat64(offset, safeValue, true);
        cursor.offset += 8;
        return;
    }
  }
}

export class Gamedata {
  binary: BinaryEditor;
  gamedata: Record<string, unknown>;

  slots = ["Slot 1", "Slot 2", "Slot 3"];

  constructor(buffer: ArrayBuffer) {
    this.binary = new BinaryEditor(buffer);
    this.gamedata = this.binary.readAll() as Record<string, unknown>;
    const slot1 = this.gamedata["Slot 1"] as { Corruptness: number };
    const slot2 = this.gamedata["Slot 2"] as { Corruptness: number };
    const slot3 = this.gamedata["Slot 3"] as { Corruptness: number };

    if (
      slot1.Corruptness !== 200 ||
      slot2.Corruptness !== 200 ||
      slot3.Corruptness !== 200
    )
      throw new Error("At least one slot did not pass the corruptness check");
  }
}

export const maps: string[] = [
  "NO_IMAGE_AREA_00",
  "B_CASTLE_FIELD_01",
  "B_CASTLE_FIELD_011_D",
  "B_CASTLE_FIELD_02",
  "B_CASTLE_FIELD_021_D",
  "B_CASTLE_FIELD_03",
  "B_CASTLE_FIELD_04",
  "B_CASTLE_FIELD_041_D",
  "B_CASTLE_FIELD_10",
  "B_CENTER_LIBRARY_01",
  "B_CENTER_LIBRARY_011_D",
  "A_CENTER_VILLAGE_01",
  "B_CENTER_VILLAGE_01",
  "A_CENTER_VILLAGE_21",
  "A_CLIFF_VILLAGE_01",
  "B_CLIFF_VILLAGE_01",
  "E_CLIFF_VILLAGE_01",
  "B_CLIFF_VILLAGE_02",
  "B_CLIFF_VILLAGE_21",
  "A_DESERT_FIELD_01",
  "B_DESERT_FIELD_01",
  "A_DESERT_FIELD_02",
  "B_DESERT_FIELD_02",
  "A_DESERT_TEMPLE_01",
  "B_DESERT_TEMPLE_01",
  "B_DESERT_TEMPLE_011_D",
  "B_DESERT_TEMPLE_012_D",
  "B_DESERT_TEMPLE_013_D",
  "B_DESERT_TEMPLE_014_D",
  "A_DESERT_TEMPLE_02",
  "B_DESERT_TEMPLE_02",
  "A_DESERT_TOWN_01",
  "B_DESERT_TOWN_01",
  "B_DESERT_TOWN_011_D",
  "A_EAST_FIELD_01",
  "B_EAST_FIELD_01",
  "A_FOREST_FIELD_01",
  "B_FOREST_FIELD_01",
  "C_FOREST_FIELD_01",
  "D_FOREST_FIELD_01",
  "E_FOREST_FIELD_01",
  "E_FOREST_FIELD_02",
  "E_FOREST_FIELD_03",
  "E_FOREST_FIELD_04",
  "B_MERMAID_FIELD_01",
  "B_MERMAID_FIELD_02",
  "B_MERMAID_FIELD_03",
  "A_MOUNT_FIELD_01",
  "B_MOUNT_FIELD_01",
  "A_MOUNT_ROBOT_01",
  "B_MOUNT_ROBOT_01",
  "A_MOUNT_ROBOT_01_1",
  "A_MOUNT_ROBOT_01_2",
  "A_MOUNT_ROBOT_02",
  "B_MOUNT_ROBOT_02",
  "A_MOUNT_ROBOT_03",
  "B_MOUNT_ROBOT_03",
  "A_MOUNT_ROBOT_04",
  "B_MOUNT_ROBOT_04",
  "B_MOUNT_ROBOT_041_D",
  "A_MOUNT_ROBOT_10",
  "B_MOUNT_ROBOT_10",
  "B_MOUNT_ROBOT_101_D",
  "A_MOUNT_ROBOT_10_1",
  "A_MOUNT_ROBOT_10_2",
  "A_MOUNT_ROBOT_10_3",
  "A_NORTH_FIELD_01",
  "B_NORTH_FIELD_01",
  "E_NORTH_FIELD_01",
  "A_NORTH_FIELD_21",
  "A_SEASIDE_TOWN_01",
  "B_SEASIDE_TOWN_01",
  "B_SEASIDE_TOWN_011_D",
  "A_SOUTH_FIELD_01",
  "B_SOUTH_FIELD_01",
  "B_SOUTH_FIELD_011_D",
  "A_SOUTH_FIELD_21",
  "A_SOUTH_MANSION_01",
  "B_SOUTH_MANSION_01",
  "A_SOUTH_MANSION_02",
  "B_SOUTH_MANSION_02",
  "B_SOUTH_MANSION_021_D",
  "B_SOUTH_UNDERGROUND_01",
  "B_SOUTH_UNDERGROUND_01_1",
  "B_SOUTH_UNDERGROUND_01_2",
  "B_SOUTH_UNDERGROUND_01_3",
  "B_SOUTH_UNDERGROUND_02",
  "B_SOUTH_UNDERGROUND_021_D",
  "A_STONE_FIELD_01",
  "B_STONE_FIELD_01",
  "A_STONE_FIELD_01_1",
  "A_STONE_FIELD_01_2",
  "A_STONE_FIELD_02",
  "B_STONE_FIELD_02",
  "B_STONE_FIELD_021_D",
  "A_STONE_TEMPLE_01",
  "B_STONE_TEMPLE_01",
  "A_STONE_TEMPLE_01_1",
  "A_STONE_TEMPLE_01_2",
  "A_STONE_TEMPLE_01_3",
  "C_TOKYO_FIELD_01",
];

export const buttons: string[] = [
  "Left Bumper",
  "Right Bumper",
  "Left Trigger",
  "Right Trigger",
];

export const abilities: string[] = [
  "None",
  "Defend",
  "Evade",
  "Dark Blast",
  "Dark Phantasm",
  "Dark Hand",
  "Dark Lance",
  "Dark Whirlwind",
  "Dark Gluttony",
  "Dark Wall",
  "Dark Execution",
];

export const oneHandedSwords: string[] = [
  "Nameless Blade",
  "Phoenix Dagger",
  "Beastbain",
  "Labyrinth's Whisper",
  "Fool's Embrace",
  "Ancient Overlord",
  "Rebirth",
  "Earth Wyrm's Claw",
  "Nirvana Dagger",
  "Moonrise",
  "Blade of Treachery",
  "Lily-Leaf Sword",
  "Faith",
  "Iron Pipe",
  "Kainé's Sword",
  "Virtuous Contract",
  "Cruel Oath",
];

export const twoHandedSwords: string[] = [
  "Kusanagi",
  "Phoenix Sword",
  "Beastlord",
  "Labyrinth's Song",
  "Fool's Lament",
  "Fang of the Twins",
  "Axe of Beheading",
  "Vile Axe",
  "Iron Will",
  "Virtuous Treaty",
];

export const spears: string[] = [
  "Transience",
  "Phoenix Spear",
  "Beastcurse",
  "Labyrinth's Shout",
  "Fool's Accord",
  "The Devil Queen",
  "Sunrise",
  "Spear of the Usurper",
  "Dragoon Lance",
  "Captain's Holy Spear",
  "Virtuous Dignity",
];

export const tutorials: string[] = [
  "Controls",
  "Combos",
  "Dark Blast",
  "Dark Phantasm",
  "Dark Hand",
  "Dark Lance",
  "Dark Whirlwind",
  "Dark Gluttony",
  "Dark Wall",
  "Dark Execution",
  "Maps",
  "Interactions",
  "Attack Gauges",
  "Saving",
  "Quests",
  "Weapon Types",
  "Cultivating Plants",
  "Forging Weapons",
  "Shops",
  "Mine Carts",
  "Switching Magic and Abilities",
  "",
  "Viewing Letters",
  "Changing Weapons",
  "Moving Boxes",
  "",
  "Charging",
  "",
  "Skull Cracker",
  "Deflecting",
  "",
  "",
  "",
  "Sidestepping",
  "Sidestep Attacks",
  "Combo and Magic Charging",
  "Magic Resistance",
  "Cancels",
  "",
  "",
  "Guard Breaks",
  "Heavy Attack Guard Breaks",
  "Earning Money",
  "Fishing Tip",
  "Fishing Tip 2",
  "Fishing Tip 3",
  "Fishing Tip 4",
  "Fishing Tip 5",
  "Armored Enemies",
  "Controlling Boars",
  "Bombs",
  "Breakable Boxes",
  "Breakable Barriers",
  "Gathering Items",
  "Hidden Items",
  "Words",
  "Ordering Allies",
  "Ordering Animals",
  "Item and Equipment Shortcuts",
  "Wall Kicks",
  "Combo Basics",
  "Deflecting Enemy Magic",
  "Fighting Magic Resistant Enemies",
  "Fighting Wolves",
  "Stronger Dark Blasts",
  "Harvests",
  "Rare Items",
  "",
  "Collecting Materials",
  "Absorbing Blood",
  "Magical Collisions",
  "Ending B",
  "Ending C",
  "Ending D",
  "Evading",
  "Double Jump",
  "",
  "Weapon Quick Switching",
  "Finishing Blow",
  "Magic or Ability Quick Switching",
  "Lock On",
  "",
  "",
  "Poison",
];

export const words: string[] = [
  "Pah",
  "Paha",
  "Pahi",
  "Paho",
  "Pahu",
  "Pahal",
  "Pahil",
  "Pahol",
  "Pahul",
  "Pahuloth",
  "Var",
  "Vara",
  "Vari",
  "Varo",
  "Varu",
  "Varal",
  "Varil",
  "Varol",
  "Varul",
  "Varuloth",
  "Geb",
  "Geba",
  "Gebi",
  "Gebo",
  "Gebu",
  "Gebal",
  "Gebil",
  "Gebol",
  "Gebul",
  "Gebuloth",
  "Ul",
  "Ula",
  "Uli",
  "Ulo",
  "Ulu",
  "Ulal",
  "Ulil",
  "Ulol",
  "Ulul",
  "Ululoth",
  "Hod",
  "Hoda",
  "Hodi",
  "Hodo",
  "Hodu",
  "Hodal",
  "Hodil",
  "Hodol",
  "Hodul",
  "Hoduloth",
  "Bes",
  "Besa",
  "Besi",
  "Beso",
  "Besu",
  "Besal",
  "Besil",
  "Besol",
  "Besul",
  "Besuloth",
  "",
  "",
  "",
  "",
  "Lug",
  "Lugir",
  "Luges",
  "Lugka",
  "Lugza",
  "Lugira",
  "Lugesra",
  "Lugkarr",
  "Lugzarr",
  "Lugzarken",
  "Ot",
  "Otir",
  "Otes",
  "Otka",
  "Otza",
  "Otira",
  "Otesra",
  "Otkarr",
  "Otzarr",
  "Otzarken",
  "Mah",
  "Mahir",
  "Mahes",
  "Mahka",
  "Mahza",
  "Mahira",
  "Mahesra",
  "Mahkarr",
  "Mahzarr",
  "Mahzarken",
  "Ashur",
  "Ashurir",
  "Ashures",
  "Ashurka",
  "Ashurza",
  "Ashurira",
  "Ashuresra",
  "Ashurkarr",
  "Ashurzarr",
  "Ashurzarken",
  "Kon",
  "Konir",
  "Kones",
  "Konka",
  "Konza",
  "Konira",
  "Konesra",
  "Konkarr",
  "Konzarr",
  "Konzarken",
  "Sol",
  "Solir",
  "Soles",
  "Solka",
  "Solza",
  "Solira",
  "Solesra",
  "Solkarr",
  "Solzarr",
  "Solzarken",
  "Ashurfarra",
];

export interface ValueField {
  index: number;
  offset: number;
}

export interface Quest {
  name: string;
  available: ValueField;
  completed: ValueField;
  fill: boolean;
}

export const quests: { [key: string]: Quest } = {
  "Herbal Remedies": {
    name: "Herbal Remedies",
    available: { index: 0, offset: 28 },
    completed: { index: 0, offset: 29 },
    fill: true,
  },
  "The Gatekeeper's Errand": {
    name: "The Gatekeeper's Errand",
    available: { index: 0, offset: 31 },
    completed: { index: 1, offset: 1 },
    fill: true,
  },
  "The Lost Eggs": {
    name: "The Lost Eggs",
    available: { index: 1, offset: 3 },
    completed: { index: 1, offset: 7 },
    fill: true,
  },
  "Old-Fashioned Home Cooking": {
    name: "Old-Fashioned Home Cooking",
    available: { index: 1, offset: 9 },
    completed: { index: 1, offset: 11 },
    fill: true,
  },
  "Shopping List": {
    name: "Shopping List",
    available: { index: 1, offset: 13 },
    completed: { index: 1, offset: 15 },
    fill: true,
  },
  "Book Smarts": {
    name: "Book Smarts",
    available: { index: 1, offset: 17 },
    completed: { index: 1, offset: 21 },
    fill: true,
  },
  "The Tavern Keeper's Grandmother": {
    name: "The Tavern Keeper's Grandmother",
    available: { index: 1, offset: 23 },
    completed: { index: 1, offset: 26 },
    fill: true,
  },
  "A Return to Shopping": {
    name: "A Return to Shopping",
    available: { index: 1, offset: 28 },
    completed: { index: 1, offset: 30 },
    fill: true,
  },
  "Yonah's Cooking": {
    name: "Yonah's Cooking",
    available: { index: 2, offset: 0 },
    completed: { index: 2, offset: 1 },
    fill: true,
  },
  "Boar Hunt!": {
    name: "Boar Hunt!",
    available: { index: 2, offset: 3 },
    completed: { index: 2, offset: 6 },
    fill: true,
  },
  "On the Wings of Eagles": {
    name: "On the Wings of Eagles",
    available: { index: 2, offset: 8 },
    completed: { index: 2, offset: 12 },
    fill: true,
  },
  "Fragile Delivery": {
    name: "Fragile Delivery",
    available: { index: 2, offset: 14 },
    completed: { index: 2, offset: 18 },
    fill: true,
  },
  "Fragile Delivery 2": {
    name: "Fragile Delivery 2",
    available: { index: 2, offset: 20 },
    completed: { index: 2, offset: 24 },
    fill: true,
  },
  "The Fisherman's Gambit": {
    name: "The Fisherman's Gambit",
    available: { index: 2, offset: 26 },
    completed: { index: 2, offset: 27 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 2": {
    name: "The Fisherman's Gambit, Part 2",
    available: { index: 2, offset: 29 },
    completed: { index: 2, offset: 30 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 3": {
    name: "The Fisherman's Gambit, Part 3",
    available: { index: 3, offset: 0 },
    completed: { index: 3, offset: 1 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 4": {
    name: "The Fisherman's Gambit, Part 4",
    available: { index: 3, offset: 3 },
    completed: { index: 3, offset: 4 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 5": {
    name: "The Fisherman's Gambit, Part 5",
    available: { index: 3, offset: 6 },
    completed: { index: 3, offset: 7 },
    fill: true,
  },
  "The Ballad of the Twins": {
    name: "The Ballad of the Twins",
    available: { index: 3, offset: 9 },
    completed: { index: 3, offset: 14 },
    fill: true,
  },
  "A Dog Astray": {
    name: "A Dog Astray",
    available: { index: 3, offset: 16 },
    completed: { index: 3, offset: 19 },
    fill: true,
  },
  "The New Merchant in Town": {
    name: "The New Merchant in Town",
    available: { index: 3, offset: 21 },
    completed: { index: 3, offset: 25 },
    fill: true,
  },
  "Yonah's Gift": {
    name: "Yonah's Gift",
    available: { index: 4, offset: 4 },
    completed: { index: 4, offset: 11 },
    fill: true,
  },
  "Letter to a Lover": {
    name: "Letter to a Lover",
    available: { index: 4, offset: 13 },
    completed: { index: 4, offset: 16 },
    fill: true,
  },
  "A Signature Dish": {
    name: "A Signature Dish",
    available: { index: 4, offset: 18 },
    completed: { index: 4, offset: 20 },
    fill: true,
  },
  "Bon Appetit!": {
    name: "Bon Appetit!",
    available: { index: 4, offset: 22 },
    completed: { index: 4, offset: 26 },
    fill: true,
  },
  "Fragile Delivery 3": {
    name: "Fragile Delivery 3",
    available: { index: 4, offset: 28 },
    completed: { index: 5, offset: 0 },
    fill: true,
  },
  "The Tangled Message": {
    name: "The Tangled Message",
    available: { index: 5, offset: 2 },
    completed: { index: 5, offset: 7 },
    fill: true,
  },
  "Item Unknown": {
    name: "Item Unknown",
    available: { index: 5, offset: 12 },
    completed: { index: 5, offset: 14 },
    fill: true,
  },
  "The Runaway Son": {
    name: "The Runaway Son",
    available: { index: 5, offset: 16 },
    completed: { index: 5, offset: 26 },
    fill: true,
  },
  "Apology from a Fool": {
    name: "Apology from a Fool",
    available: { index: 5, offset: 28 },
    completed: { index: 6, offset: 0 },
    fill: true,
  },
  "The Pride of a Lover": {
    name: "The Pride of a Lover",
    available: { index: 6, offset: 6 },
    completed: { index: 6, offset: 8 },
    fill: true,
  },
  "The Littlest Hero": {
    name: "The Littlest Hero",
    available: { index: 6, offset: 10 },
    completed: { index: 6, offset: 13 },
    fill: true,
  },
  "The Missing Girl": {
    name: "The Missing Girl",
    available: { index: 6, offset: 15 },
    completed: { index: 6, offset: 19 },
    fill: true,
  },
  "A Shade Entombed": {
    name: "A Shade Entombed",
    available: { index: 6, offset: 22 },
    completed: { index: 6, offset: 25 },
    fill: true,
  },
  "The Masterless Lighthouse": {
    name: "The Masterless Lighthouse",
    available: { index: 6, offset: 27 },
    completed: { index: 6, offset: 28 },
    fill: true,
  },
  "The Scattered Cargo": {
    name: "The Scattered Cargo",
    available: { index: 6, offset: 30 },
    completed: { index: 7, offset: 9 },
    fill: true,
  },
  "The Strange Fate of the Jewel": {
    name: "The Strange Fate of the Jewel",
    available: { index: 7, offset: 12 },
    completed: { index: 7, offset: 20 },
    fill: true,
  },
  "Learning a Trade": {
    name: "Learning a Trade",
    available: { index: 8, offset: 14 },
    completed: { index: 8, offset: 22 },
    fill: true,
  },
  "A Bridge in Peril": {
    name: "A Bridge in Peril",
    available: { index: 8, offset: 25 },
    completed: { index: 8, offset: 28 },
    fill: true,
  },
  "Master of the Southern Plains": {
    name: "Master of the Southern Plains",
    available: { index: 8, offset: 30 },
    completed: { index: 9, offset: 1 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 6": {
    name: "The Fisherman's Gambit, Part 6",
    available: { index: 9, offset: 3 },
    completed: { index: 9, offset: 4 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 7": {
    name: "The Fisherman's Gambit, Part 7",
    available: { index: 9, offset: 6 },
    completed: { index: 9, offset: 7 },
    fill: true,
  },
  "The Fisherman's Gambit, Part 8": {
    name: "The Fisherman's Gambit, Part 8",
    available: { index: 9, offset: 9 },
    completed: { index: 9, offset: 10 },
    fill: true,
  },
  "The Fisherman's Final Gambit": {
    name: "The Fisherman's Final Gambit",
    available: { index: 9, offset: 12 },
    completed: { index: 9, offset: 13 },
    fill: true,
  },
  "Staying Afloat": {
    name: "Staying Afloat",
    available: { index: 9, offset: 15 },
    completed: { index: 9, offset: 17 },
    fill: true,
  },
  "Contract for a Contractor": {
    name: "Contract for a Contractor",
    available: { index: 9, offset: 19 },
    completed: { index: 9, offset: 21 },
    fill: true,
  },
  "The Creaky Waterwheel": {
    name: "The Creaky Waterwheel",
    available: { index: 9, offset: 23 },
    completed: { index: 9, offset: 27 },
    fill: true,
  },
  "The Faded Fountain": {
    name: "The Faded Fountain",
    available: { index: 9, offset: 29 },
    completed: { index: 10, offset: 1 },
    fill: true,
  },
  "Bon Appetit! 2": {
    name: "Bon Appetit! 2",
    available: { index: 10, offset: 3 },
    completed: { index: 10, offset: 5 },
    fill: true,
  },
  "Life in the Sands": {
    name: "Life in the Sands",
    available: { index: 10, offset: 7 },
    completed: { index: 10, offset: 9 },
    fill: true,
  },
  "The King's Mask": {
    name: "The King's Mask",
    available: { index: 10, offset: 11 },
    completed: { index: 10, offset: 13 },
    fill: true,
  },
  "A Child's Final Chance": {
    name: "A Child's Final Chance",
    available: { index: 10, offset: 14 },
    completed: { index: 10, offset: 23 },
    fill: true,
  },
  "The Damaged Map": {
    name: "The Damaged Map",
    available: { index: 10, offset: 25 },
    completed: { index: 11, offset: 6 },
    fill: true,
  },
  "Research Project": {
    name: "Research Project",
    available: { index: 11, offset: 8 },
    completed: { index: 11, offset: 13 },
    fill: true,
  },
  "A Tale of the Study": {
    name: "A Tale of the Study",
    available: { index: 11, offset: 15 },
    completed: { index: 11, offset: 18 },
    fill: true,
  },
  "The Great Tree": {
    name: "The Great Tree",
    available: { index: 11, offset: 20 },
    completed: { index: 11, offset: 23 },
    fill: true,
  },
  "The Despicable Man": {
    name: "The Despicable Man",
    available: { index: 11, offset: 25 },
    completed: { index: 11, offset: 31 },
    fill: true,
  },
  "A Memorable Knife": {
    name: "A Memorable Knife",
    available: { index: 12, offset: 1 },
    completed: { index: 12, offset: 4 },
    fill: true,
  },
  "The Shade Army": {
    name: "The Shade Army",
    available: { index: 12, offset: 7 },
    completed: { index: 12, offset: 13 },
    fill: true,
  },
  "A City Reborn": {
    name: "A City Reborn",
    available: { index: 12, offset: 15 },
    completed: { index: 12, offset: 16 },
    fill: true,
  },
  "Nightmares and Dust": {
    name: "Nightmares and Dust",
    available: { index: 12, offset: 18 },
    completed: { index: 12, offset: 21 },
    fill: true,
  },
  "Disturbing the Sleep of Kings": {
    name: "Disturbing the Sleep of Kings",
    available: { index: 12, offset: 23 },
    completed: { index: 12, offset: 26 },
    fill: true,
  },
  "Shadows of the Desert": {
    name: "Shadows of the Desert",
    available: { index: 12, offset: 28 },
    completed: { index: 13, offset: 0 },
    fill: true,
  },
  "Search for the Shade": {
    name: "Search for the Shade",
    available: { index: 13, offset: 2 },
    completed: { index: 13, offset: 11 },
    fill: true,
  },
  Freesia: {
    name: "Freesia",
    available: { index: 13, offset: 13 },
    completed: { index: 13, offset: 17 },
    fill: true,
  },
  "The Magical Stone": {
    name: "The Magical Stone",
    available: { index: 13, offset: 20 },
    completed: { index: 13, offset: 25 },
    fill: true,
  },
  "The Postman's Request": {
    name: "The Postman's Request",
    available: { index: 14, offset: 25 },
    completed: { index: 14, offset: 26 },
    fill: true,
  },
  "The Lighthouse Lady's Wrath": {
    name: "The Lighthouse Lady's Wrath",
    available: { index: 14, offset: 29 },
    completed: { index: 15, offset: 7 },
    fill: true,
  },
  Closure: {
    name: "Closure",
    available: { index: 15, offset: 9 },
    completed: { index: 15, offset: 10 },
    fill: true,
  },
  "Thieves in Training": {
    name: "Thieves in Training",
    available: { index: 8, offset: 4 },
    completed: { index: 15, offset: 25 },
    fill: false, // ToDo set correct states
  },
};

export interface SpecialQuest {
  name: string;
  available: number;
  completed: number;
}
export const specialQuest: SpecialQuest = {
  name: "The Promised Gift",
  available: 3,
  completed: 9,
};

export const levelToXP = [
  0, 30, 240, 850, 2060, 4070, 7080, 11290, 16900, 24110, 33120, 44130, 57340,
  72950, 91160, 112170, 136180, 163390, 194000, 228210, 266220, 308230, 354440,
  405050, 460260, 520270, 585280, 655490, 731100, 812310, 899320, 987380,
  1076525, 1166790, 1258210, 1350820, 1444655, 1539750, 1636140, 1733860,
  1832945, 1933430, 2035350, 2138740, 2243635, 2350070, 2458080, 2567700,
  2678965, 2791910, 2906570, 3022980, 3141175, 3261190, 3383060, 3506820,
  3632505, 3760150, 3889790, 4021460, 4155195, 4289596, 4424674, 4560440,
  4696906, 4834082, 4971979, 5110609, 5249983, 5390112, 5531006, 5672677,
  5815137, 5958395, 6102464, 6247355, 6393078, 6539644, 6687065, 6835352,
  6984516, 7134568, 7285518, 7437380, 7590162, 7743877, 7898535, 8054148,
  8210726, 8368281, 8526824, 8686367, 8846919, 9008492, 9171098, 9334747,
  9499451, 9665220, 9832066,
];
