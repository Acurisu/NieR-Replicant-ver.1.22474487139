"use client";

import { useRef, useState, useMemo } from "react";
import {
  Accordion,
  ActionIcon,
  Affix,
  Anchor,
  Container,
  Divider,
  Group,
  MultiSelect,
  NumberInput,
  Paper,
  Select,
  SimpleGrid,
  Stack,
  Text,
  TextInput,
  Title,
  Button,
  Modal,
  Tabs,
  Table,
  Switch,
} from "@mantine/core";
import { IconDeviceFloppy, IconUpload } from "@tabler/icons-react";

import type { Savefile } from "@/lib/interfaces";
import {
  Gamedata,
  abilities,
  buttons,
  cksum,
  levelToXP,
  maps,
  oneHandedSwords,
  quests,
  specialQuest,
  spears,
  tutorials,
  twoHandedSwords,
  words,
  type Quest,
} from "@/lib/nier";
import { calculateRequiredMaterials } from "@/lib/weapon-materials";

type SlotName = "Slot 1" | "Slot 2" | "Slot 3";

const SLOT_NAMES: SlotName[] = ["Slot 1", "Slot 2", "Slot 3"];
const INVENTORY_SECTIONS = [
  "Recovery",
  "Raw Materials",
  "Fishing",
  "Cultivation",
] as const;
const MAX_U32 = "4294967295";
const QUEST_ENTRIES = Object.values(quests);
const LOAD_ERROR_MESSAGE =
  "Something went wrong when trying to load the file. The file might be corrupt.";

const buttonAbilityOptions = abilities.map((label, index) => ({
  value: String(index),
  label,
}));

const mapOptions = maps.map((label) => ({ value: label, label }));

const characterOptions = [
  { value: "0", label: "Nier (Young)" },
  { value: "1", label: "Nier (Prologue)" },
  { value: "2", label: "Nier (Old)" },
  { value: "3", label: "Nier (Gestalt)" },
  { value: "4", label: "Kainé" },
];

const activeWeaponOptions = [
  ...oneHandedSwords.map((label, index) => ({
    value: String(index),
    label,
  })),
  ...twoHandedSwords.map((label, index) => ({
    value: String(index + 20),
    label,
  })),
  ...spears.map((label, index) => ({
    value: String(index + 40),
    label,
  })),
];

const oneHandedWeaponOptions = [
  { value: MAX_U32, label: "None" },
  ...oneHandedSwords.map((label, index) => ({
    value: String(index),
    label,
  })),
];

const twoHandedWeaponOptions = [
  { value: MAX_U32, label: "None" },
  ...twoHandedSwords.map((label, index) => ({
    value: String(index + 20),
    label,
  })),
];

const spearOptions = [
  { value: MAX_U32, label: "None" },
  ...spears.map((label, index) => ({
    value: String(index + 40),
    label,
  })),
];

const getHours = (seconds: number) => Math.floor(seconds / 3600);
const getMinutes = (seconds: number) => Math.floor((seconds % 3600) / 60);
const getSeconds = (seconds: number) => Math.floor((seconds % 3600) % 60);

const isFiniteNumber = (value: string | number): value is number =>
  typeof value === "number" && Number.isFinite(value);

const getMask = (l: number, r: number) =>
  ((1 << l) - 1) ^ (r === 31 ? 0xffffffff : ((1 << (r + 1)) >>> 0) - 1);

const setBits = (n: number, l: number, r: number) => n | getMask(l, r);
const unsetBits = (n: number, l: number, r: number) =>
  n & (0xffffffff ^ getMask(l, r));

const getFlagSelection = (
  source: Record<string, number>,
  skipUnknownKeys = false
) =>
  Object.entries(source)
    .filter(
      ([key, value]) => value !== 0 && (!skipUnknownKeys || !key.startsWith("unk"))
    )
    .map(([key]) => key);

const setFlagSelection = (
  source: Record<string, number>,
  selected: string[],
  skipUnknownKeys = false
) => {
  const selectedKeys = new Set(selected);

  Object.keys(source).forEach((key) => {
    if (skipUnknownKeys && key.startsWith("unk")) return;
    source[key] = selectedKeys.has(key) ? 1 : 0;
  });
};

const bitfieldOptions = (labels: string[]) =>
  labels.reduce<Array<{ value: string; label: string }>>((result, label, index) => {
    if (label !== "") result.push({ value: String(index), label });
    return result;
  }, []);

const getBitfieldSelection = (labels: string[], source: number[]) =>
  labels.reduce<string[]>((result, label, index) => {
    if (label === "") return result;

    if ((source[Math.floor(index / 32)] & (1 << (index % 32))) !== 0) {
      result.push(String(index));
    }

    return result;
  }, []);

const setBitfieldSelection = (source: number[], selected: string[]) => {
  source.fill(0);

  selected.forEach((value) => {
    const index = Number(value);
    if (!Number.isFinite(index)) return;

    const bucket = Math.floor(index / 32);
    source[bucket] = (source[bucket] | (1 << (index % 32))) >>> 0;
  });
};

const getQuestSelection = (slot: Savefile, completed: boolean) => {
  const selected = QUEST_ENTRIES.reduce<string[]>((result, value) => {
    const field = completed ? value.completed : value.available;

    if ((slot.Quests[field.index] & (1 << field.offset)) !== 0) {
      result.push(value.name);
    }

    return result;
  }, []);

  const specialBit = completed ? specialQuest.completed : specialQuest.available;
  if ((slot.Quest & (1 << specialBit)) !== 0) {
    selected.push(specialQuest.name);
  }

  return selected;
};

const toggleQuest = (slot: Savefile, quest: Quest, completed: boolean) => {
  const field = completed ? quest.completed : quest.available;
  slot.Quests[field.index] ^= 1 << field.offset;

  if (completed && quest.fill) {
    const toggleFn =
      ((slot.Quests[field.index] >>> field.offset) & 1) === 1 ? setBits : unsetBits;

    for (
      let index =
        quest.available.index + (quest.available.offset === 31 ? 1 : 0);
      index <= quest.completed.index;
      index += 1
    ) {
      slot.Quests[index] = toggleFn(
        slot.Quests[index],
        index === quest.available.index ? quest.available.offset + 1 : 0,
        index === quest.completed.index ? quest.completed.offset : 31
      );
    }
  }
};

const toggleSpecialQuest = (slot: Savefile, completed: boolean) => {
  if (completed) {
    const toggleFn =
      ((slot.Quest >>> specialQuest.completed) & 1) === 1 ? unsetBits : setBits;
    slot.Quest = toggleFn(slot.Quest, specialQuest.available, specialQuest.completed);
    return;
  }

  slot.Quest ^= 1 << specialQuest.available;
};

const syncQuestSelection = (
  slot: Savefile,
  completed: boolean,
  selected: string[]
) => {
  const previous = new Set(getQuestSelection(slot, completed));
  const next = new Set(selected);

  if (previous.has(specialQuest.name) !== next.has(specialQuest.name)) {
    toggleSpecialQuest(slot, completed);
  }

  QUEST_ENTRIES.forEach((quest) => {
    if (previous.has(quest.name) !== next.has(quest.name)) {
      toggleQuest(slot, quest, completed);
    }
  });
};

const numberOrFallback = (value: string | null, fallback: number) => {
  if (value === null) return fallback;

  const parsed = Number(value);
  return Number.isFinite(parsed) ? parsed : fallback;
};

const disabledFieldStyles = {
  label: {
    color: "var(--mantine-color-gray-5)",
  },
  input: {
    backgroundColor: "rgba(255,255,255,0.06)",
    borderColor: "rgba(255,255,255,0.14)",
    color: "var(--mantine-color-gray-4)",
    cursor: "not-allowed",
  },
};

function MaterialsModal({ opened, onClose, selectedSlot }: { opened: boolean; onClose: () => void; selectedSlot: Savefile | null }) {
  const [includeInventory, setIncludeInventory] = useState(false);

  const reqMats = useMemo(() => {
    if (!selectedSlot) return null;
    return calculateRequiredMaterials(
      selectedSlot.Weapons as Record<string, number>,
      includeInventory ? selectedSlot["Raw Materials"] as Record<string, number> : undefined
    );
  }, [selectedSlot, includeInventory]);

  if (!selectedSlot || !reqMats) return null;

  return (
    <Modal
      opened={opened}
      onClose={onClose}
      title="Materials Needed for Level 4"
      size="lg"
    >
      <Stack gap="md">
        <Switch
          label="Calculate with the items you already have"
          checked={includeInventory}
          onChange={(event) => setIncludeInventory(event.currentTarget.checked)}
        />
        <Text size="xs" c="dimmed" mt="-sm">
          Prioritizes categories from left to right.
        </Text>

        <Tabs defaultValue="All">
          <Tabs.List>
            <Tabs.Tab value="All">All</Tabs.Tab>
            <Tabs.Tab value="Main">Main Weapons</Tabs.Tab>
            <Tabs.Tab value="Kainé's Sword">Kainé's Sword</Tabs.Tab>
            <Tabs.Tab value="Recycled Vessel">Recycled Vessel</Tabs.Tab>
            <Tabs.Tab value="YoRHa">YoRHa</Tabs.Tab>
          </Tabs.List>

          {(["All", "Main", "Kainé's Sword", "Recycled Vessel", "YoRHa"] as const).map((category) => (
            <Tabs.Panel key={category} value={category} pt="xs">
              {reqMats[category].length === 0 ? (
                <Text size="sm" c="dimmed" mt="sm">No materials needed for this category.</Text>
              ) : (
                <Table striped highlightOnHover>
                  <Table.Thead>
                    <Table.Tr>
                      <Table.Th>Material</Table.Th>
                      <Table.Th w={100} ta="right">Amount</Table.Th>
                    </Table.Tr>
                  </Table.Thead>
                  <Table.Tbody>
                    {reqMats[category].map((mat) => (
                      <Table.Tr key={mat.name}>
                        <Table.Td>{mat.name}</Table.Td>
                        <Table.Td ta="right">{mat.amount}</Table.Td>
                      </Table.Tr>
                    ))}
                  </Table.Tbody>
                </Table>
              )}
            </Tabs.Panel>
          ))}
        </Tabs>
      </Stack>
    </Modal>
  );
}

export function EditorShell() {
  const gamedataRef = useRef<Gamedata | null>(null);
  const [hasGamedata, setHasGamedata] = useState(false);
  const [selectedSlotName, setSelectedSlotName] = useState<SlotName | null>(null);
  const [selectedSlot, setSelectedSlot] = useState<Savefile | null>(null);
  const [fileName, setFileName] = useState<string | null>(null);
  const [loadError, setLoadError] = useState<string | null>(null);
  const [formVersion, setFormVersion] = useState(0);
  const [openedSection, setOpenedSection] = useState<string | null>(null);
  const [materialsModalOpened, setMaterialsModalOpened] = useState(false);

  const selectSlot = (slotName: SlotName | null) => {
    setSelectedSlotName(slotName);

    if (!slotName || !gamedataRef.current) {
      setSelectedSlot(null);
      setFormVersion((current) => current + 1);
      return;
    }

    setSelectedSlot(
      structuredClone(gamedataRef.current.gamedata[slotName] as Savefile)
    );
    setFormVersion((current) => current + 1);
  };

  const updateSelectedSlot = (updater: (slot: Savefile) => void) => {
    if (!selectedSlotName || !gamedataRef.current) return;
    updater(gamedataRef.current.gamedata[selectedSlotName] as Savefile);
  };

  const formKey = `${formVersion}-${selectedSlotName ?? "empty"}`;

  const handleFileLoad = async (file: File) => {
    setLoadError(null);

    if (file.size !== 0x48200) {
      gamedataRef.current = null;
      setHasGamedata(false);
      selectSlot(null);
      setFileName(null);
      setLoadError(LOAD_ERROR_MESSAGE);
      return;
    }

    try {
      const data = await file.arrayBuffer();
      const loaded = new Gamedata(data);

      gamedataRef.current = loaded;
      setHasGamedata(true);
      setFileName(file.name);
      selectSlot("Slot 1");
    } catch (error) {
      console.error(error);
      gamedataRef.current = null;
      setHasGamedata(false);
      selectSlot(null);
      setFileName(null);
      setLoadError(LOAD_ERROR_MESSAGE);
    }
  };

  const handleSave = () => {
    const gamedata = gamedataRef.current;
    if (!gamedata) return;

    const slot1 = gamedata.gamedata["Slot 1"] as Savefile;
    const slot2 = gamedata.gamedata["Slot 2"] as Savefile;
    const slot3 = gamedata.gamedata["Slot 3"] as Savefile;

    gamedata.binary.writeAll(gamedata.gamedata);

    slot1.Checksum = cksum(gamedata.binary.view, 0x8160);
    slot2.Checksum = cksum(gamedata.binary.view, 0x113c0);
    slot3.Checksum = cksum(gamedata.binary.view, 0x1a620);

    gamedata.binary.writeAll(gamedata.gamedata);
    gamedata.binary.saveAs("GAMEDATA");

    if (selectedSlotName) {
      setSelectedSlot(structuredClone(gamedata.gamedata[selectedSlotName] as Savefile));
      setFormVersion((current) => current + 1);
    }
  };

  return (
    <Container size="lg" py={48}>
      <Stack gap="xl">
        <Paper
          p={{ base: "lg", md: "xl" }}
          radius="sm"
          shadow="md"
          style={{
            minHeight: 240,
          }}
        >
          <Stack gap="md">
            <Title
              order={1}
              ta="center"
              style={{ textShadow: "0px 4px 4px rgba(0,0,0,0.5)" }}
            >
              NieR Replicant ver.1.2247
              <wbr />
              4487139
            </Title>
            <Title
              order={2}
              ta="center"
              style={{ textShadow: "0px 4px 4px rgba(0,0,0,0.33)" }}
            >
              GAMEDATA Editor
            </Title>

            <Text fw={500} ta="center">
              This editor should be pretty self-explanatory but there are some
              things to note.
            </Text>

            <Text ta="justify" size="sm">
              Beware that this <strong>might introduce non-working states</strong>{" "}
              into your save file <strong>if used incorrectly</strong>. For
              example when giving yourself key items in certain situations.
              Selecting certain maps or spawn points{" "}
              <strong>
                may lead to a crash or falling out of bounds and dying
              </strong>
              . Spawn points usually are indexed starting from 1 with the
              exception of letterboxes and respawn points after falling down
              somewhere. While you can change the character to{" "}
              <i>Nier (Gestalt)</i> or <i>Kainé</i> the game loop will likely
              set it to another character as certain conditions are not
              fullfilled. The entire source code of this site and of other
              related stuff can be found on{" "}
              <Anchor
                href="https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139"
                target="_blank"
                rel="noopener"
                underline="always"
                c="silver.2"
              >
                GitHub
              </Anchor>
              .
            </Text>

            <Text ta="center" size="sm">
              Feel free to contact me on social media if you have any questions,
              requests or suggestions.
            </Text>

            <Group justify="center">
              <ActionIcon
                size="xl"
                variant="subtle"
                color="gray"
                component="label"
                aria-label="upload gamedata"
              >
                <IconUpload size={28} />
                <input
                  hidden
                  type="file"
                  onChange={(event) => {
                    const file = event.currentTarget.files?.[0];
                    if (file) void handleFileLoad(file);
                    event.currentTarget.value = "";
                  }}
                />
              </ActionIcon>
            </Group>

            {fileName ? (
              <Text ta="center" size="sm" c="dimmed">
                {fileName}
              </Text>
            ) : null}

            {loadError ? (
              <Text
                ta="center"
                c="red"
                fw={700}
                style={{ textShadow: "0px 4px 4px rgba(0,0,0,0.33)" }}
              >
                Something went wrong when trying to load the file.
                <br />
                The file might be corrupt.
              </Text>
            ) : null}

            {hasGamedata ? (
              <Select
                label="Save Slot"
                placeholder="Select a slot"
                value={selectedSlotName}
                clearable={false}
                allowDeselect={false}
                onChange={(value) => {
                  selectSlot((value as SlotName | null) ?? null);
                }}
                data={SLOT_NAMES.map((value) => ({
                  value,
                  label: value,
                }))}
              />
            ) : null}
          </Stack>
        </Paper>

        {selectedSlot ? (
          <Accordion
            variant="separated"
            radius="lg"
            value={openedSection}
            onChange={setOpenedSection}
          >
            <Accordion.Item value="general">
              <Accordion.Control>General</Accordion.Control>
              <Accordion.Panel>
                <Stack key={`${formKey}-general`} gap="xl">
                  <SimpleGrid cols={{ base: 1, sm: 2, lg: 4 }}>
                    <TextInput
                      label="Name"
                      defaultValue={selectedSlot.Name}
                      maxLength={10}
                      onChange={(event) => {
                        const nextName = event.currentTarget.value;
                        updateSelectedSlot((slot) => {
                          slot.Name = nextName;
                        });
                      }}
                    />

                    <Select
                      searchable
                      label="Map"
                      data={mapOptions}
                      defaultValue={selectedSlot.Map}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (value !== null) slot.Map = value;
                        });
                      }}
                    />

                    <NumberInput
                      label="Spawn"
                      defaultValue={selectedSlot.Spawn}
                      min={0}
                      max={4294967295}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (isFiniteNumber(value)) slot.Spawn = value;
                        });
                      }}
                    />

                    <Select
                      label="Character"
                      data={characterOptions}
                      defaultValue={String(selectedSlot.Character)}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          slot.Character = numberOrFallback(value, slot.Character);
                        });
                      }}
                    />

                    <NumberInput
                      label="Play Time Hours"
                      defaultValue={getHours(selectedSlot["Total Play Time"])}
                      min={0}
                      max={99}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (!isFiniteNumber(value)) return;
                          const totalSeconds = slot["Total Play Time"];
                          slot["Total Play Time"] +=
                            (value - getHours(totalSeconds)) * 3600;
                        });
                      }}
                    />

                    <NumberInput
                      label="Play Time Minutes"
                      defaultValue={getMinutes(selectedSlot["Total Play Time"])}
                      min={0}
                      max={59}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (!isFiniteNumber(value)) return;
                          const totalSeconds = slot["Total Play Time"];
                          slot["Total Play Time"] +=
                            (value - getMinutes(totalSeconds)) * 60;
                        });
                      }}
                    />

                    <NumberInput
                      label="Play Time Seconds"
                      defaultValue={getSeconds(selectedSlot["Total Play Time"])}
                      min={0}
                      max={59}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (!isFiniteNumber(value)) return;
                          const totalSeconds = slot["Total Play Time"];
                          slot["Total Play Time"] += value - getSeconds(totalSeconds);
                        });
                      }}
                    />

                    <TextInput
                      label="Checksum"
                      value={String(selectedSlot.Checksum)}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />

                    <NumberInput
                      label="Level"
                      defaultValue={selectedSlot.Level + 1}
                      min={1}
                      max={99}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (!isFiniteNumber(value)) return;
                          const nextLevel = Math.max(1, Math.min(99, value)) - 1;
                          slot.Level = nextLevel;
                          slot.XP = levelToXP[nextLevel];
                        });
                      }}
                    />

                    <NumberInput
                      label="Money"
                      defaultValue={selectedSlot.Money}
                      min={-2147483648}
                      max={2147483647}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          if (isFiniteNumber(value)) slot.Money = value;
                        });
                      }}
                    />

                    <TextInput
                      label="Health"
                      value={String(selectedSlot.Health)}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                    <TextInput
                      label="Health Kaine"
                      value={String(selectedSlot["Health Kaine"])}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                    <TextInput
                      label="Health Emil"
                      value={String(selectedSlot["Health Emil"])}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                    <TextInput
                      label="Magic"
                      value={String(selectedSlot.Magic)}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                    <TextInput
                      label="Magic Kaine"
                      value={String(selectedSlot["Magic Kaine"])}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                    <TextInput
                      label="Magic Emil"
                      value={String(selectedSlot["Magic Emil"])}
                      disabled
                      variant="filled"
                      styles={disabledFieldStyles}
                    />
                  </SimpleGrid>

                  <Divider label="Loadout" labelPosition="center" />

                  <SimpleGrid cols={{ base: 1, sm: 2, lg: 4 }}>
                    <Select
                      searchable
                      label="Active Weapon"
                      data={activeWeaponOptions}
                      defaultValue={String(Number(selectedSlot["Active Weapon"]))}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          slot["Active Weapon"] = numberOrFallback(
                            value,
                            slot["Active Weapon"]
                          );
                        });
                      }}
                    />

                    <Select
                      searchable
                      label="Selected One Handed Sword"
                      data={oneHandedWeaponOptions}
                      defaultValue={String(
                        Number(selectedSlot["Selected One Handed Sword"])
                      )}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          slot["Selected One Handed Sword"] = numberOrFallback(
                            value,
                            slot["Selected One Handed Sword"]
                          );
                        });
                      }}
                    />

                    <Select
                      searchable
                      label="Selected Two Handed Sword"
                      data={twoHandedWeaponOptions}
                      defaultValue={String(
                        Number(selectedSlot["Selected Two Handed Sword"])
                      )}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          slot["Selected Two Handed Sword"] = numberOrFallback(
                            value,
                            slot["Selected Two Handed Sword"]
                          );
                        });
                      }}
                    />

                    <Select
                      searchable
                      label="Selected Spear"
                      data={spearOptions}
                      defaultValue={String(Number(selectedSlot["Selected Spear"]))}
                      clearable={false}
                      allowDeselect={false}
                      onChange={(value) => {
                        updateSelectedSlot((slot) => {
                          slot["Selected Spear"] = numberOrFallback(
                            value,
                            slot["Selected Spear"]
                          );
                        });
                      }}
                    />

                    {buttons.map((button) => (
                      <Select
                        key={button}
                        searchable
                        label={button}
                        data={buttonAbilityOptions}
                        defaultValue={String(
                          Number(selectedSlot[button as keyof Savefile])
                        )}
                        clearable={false}
                        allowDeselect={false}
                        onChange={(value) => {
                          if (value !== null) {
                            updateSelectedSlot((slot) => {
                              (slot as unknown as Record<string, number>)[button] =
                                Number(value);
                            });
                          }
                        }}
                      />
                    ))}
                  </SimpleGrid>
                </Stack>
              </Accordion.Panel>
            </Accordion.Item>

            <Accordion.Item value="quests">
              <Accordion.Control>Quests</Accordion.Control>
              <Accordion.Panel>
                <Stack key={`${formKey}-quests`} gap="lg">
                  <MultiSelect
                    searchable
                    clearable
                    label="Available"
                    data={[
                      ...QUEST_ENTRIES.map((quest) => ({
                        value: quest.name,
                        label: quest.name,
                      })),
                      { value: specialQuest.name, label: specialQuest.name },
                    ]}
                    defaultValue={getQuestSelection(selectedSlot, false)}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        syncQuestSelection(slot, false, value);
                      });
                    }}
                  />

                  <MultiSelect
                    searchable
                    clearable
                    label="Completed"
                    data={[
                      ...QUEST_ENTRIES.map((quest) => ({
                        value: quest.name,
                        label: quest.name,
                      })),
                      { value: specialQuest.name, label: specialQuest.name },
                    ]}
                    defaultValue={getQuestSelection(selectedSlot, true)}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        syncQuestSelection(slot, true, value);
                      });
                    }}
                  />
                </Stack>
              </Accordion.Panel>
            </Accordion.Item>

            <Accordion.Item value="weapons-and-words">
              <Accordion.Control>Weapons and Words</Accordion.Control>
              <Accordion.Panel>
                <Stack key={`${formKey}-weapons-and-words`} gap="lg">
                  <SimpleGrid cols={{ base: 1, xs: 2, md: 3, lg: 6 }}>
                    {Object.entries(selectedSlot.Weapons).map(([key, value]) =>
                      key.startsWith("unk") ? null : (
                        <Select
                          key={key}
                          label={key}
                          data={[
                            { value: "255", label: "Not Owned" },
                            { value: "0", label: "Level 1" },
                            { value: "1", label: "Level 2" },
                            { value: "2", label: "Level 3" },
                            { value: "3", label: "Level 4" },
                          ]}
                          defaultValue={String(value)}
                          clearable={false}
                          allowDeselect={false}
                          onChange={(next) => {
                            updateSelectedSlot((slot) => {
                              if (next !== null) slot.Weapons[key] = Number(next);
                            });
                          }}
                        />
                      )
                    )}
                  </SimpleGrid>

                  <MultiSelect
                    searchable
                    clearable
                    label="Words"
                    data={bitfieldOptions(words)}
                    defaultValue={getBitfieldSelection(words, selectedSlot.Words)}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        setBitfieldSelection(slot.Words, value);
                      });
                    }}
                  />

                  <Button variant="default" onClick={() => setMaterialsModalOpened(true)}>
                    Show Materials Needed for Level 4
                  </Button>
                </Stack>
              </Accordion.Panel>
            </Accordion.Item>

            <Accordion.Item value="docs-and-tutorials">
              <Accordion.Control>Documents and Tutorials</Accordion.Control>
              <Accordion.Panel>
                <Stack key={`${formKey}-docs-and-tutorials`} gap="lg">
                  <MultiSelect
                    searchable
                    clearable
                    label="Documents"
                    data={Object.keys(selectedSlot.Documents).map((key) => ({
                      value: key,
                      label: key,
                    }))}
                    defaultValue={getFlagSelection(selectedSlot.Documents)}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        setFlagSelection(slot.Documents, value);
                      });
                    }}
                  />

                  <MultiSelect
                    searchable
                    clearable
                    label="Tutorials"
                    data={bitfieldOptions(tutorials)}
                    defaultValue={getBitfieldSelection(
                      tutorials,
                      selectedSlot.Tutorials
                    )}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        setBitfieldSelection(slot.Tutorials, value);
                      });
                    }}
                  />
                </Stack>
              </Accordion.Panel>
            </Accordion.Item>

            <Accordion.Item value="key-items-and-maps">
              <Accordion.Control>Key Items and Maps</Accordion.Control>
              <Accordion.Panel>
                <Stack key={`${formKey}-key-items-and-maps`} gap="lg">
                  <MultiSelect
                    searchable
                    clearable
                    label="Key Items"
                    data={Object.keys(selectedSlot["Key Items"]).map((key) => ({
                      value: key,
                      label: key,
                    }))}
                    defaultValue={getFlagSelection(selectedSlot["Key Items"])}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        setFlagSelection(slot["Key Items"], value);
                      });
                    }}
                  />

                  <MultiSelect
                    searchable
                    clearable
                    label="Maps"
                    data={Object.keys(selectedSlot.Maps)
                      .filter((key) => !key.startsWith("unk"))
                      .map((key) => ({
                        value: key,
                        label: key,
                      }))}
                    defaultValue={getFlagSelection(selectedSlot.Maps, true)}
                    onChange={(value) => {
                      updateSelectedSlot((slot) => {
                        setFlagSelection(slot.Maps, value, true);
                      });
                    }}
                  />
                </Stack>
              </Accordion.Panel>
            </Accordion.Item>

            {INVENTORY_SECTIONS.map((section) => (
              <Accordion.Item key={section} value={section}>
                <Accordion.Control>{section}</Accordion.Control>
                <Accordion.Panel>
                  <SimpleGrid
                    key={`${formKey}-${section}`}
                    cols={{ base: 1, xs: 2, md: 3, lg: 6 }}
                  >
                    {Object.entries(selectedSlot[section]).map(([key, value]) =>
                      key.startsWith("unk") ? null : (
                        <NumberInput
                          key={key}
                          label={key}
                          defaultValue={value as number}
                          min={0}
                          max={255}
                          onChange={(next) => {
                            updateSelectedSlot((slot) => {
                              if (isFiniteNumber(next)) {
                                slot[section][key] = next;
                              }
                            });
                          }}
                        />
                      )
                    )}
                  </SimpleGrid>
                </Accordion.Panel>
              </Accordion.Item>
            ))}
          </Accordion>
        ) : null}

        <Stack gap="sm" mb={80}>
          <Divider />
          <SimpleGrid cols={{ base: 1, sm: 3 }} spacing="md">
            <Text ta="center" size="sm" c="dimmed">
              <Anchor
                href="https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139"
                target="_blank"
                rel="noopener"
                c="silver.2"
              >
                Fork me on GitHub
              </Anchor>
            </Text>

            <Text ta="center" size="sm" c="dimmed">
              made by{" "}
              <Anchor
                href="https://github.com/Acurisu"
                target="_blank"
                rel="noopener"
                c="silver.2"
              >
                Acurisu
              </Anchor>
            </Text>

            <Text ta="center" size="sm" c="dimmed">
              <Anchor
                href="https://twitter.com/acurisu"
                target="_blank"
                rel="noopener"
                c="silver.2"
              >
                Twitter
              </Anchor>
              <br />
              <Anchor
                href="https://steamcommunity.com/id/Acurisu/"
                target="_blank"
                rel="noopener"
                c="silver.2"
              >
                Steam
              </Anchor>
            </Text>
          </SimpleGrid>
        </Stack>
      </Stack>

      <MaterialsModal
        opened={materialsModalOpened}
        onClose={() => setMaterialsModalOpened(false)}
        selectedSlot={selectedSlot}
      />

      {selectedSlot ? (
        <Affix position={{ bottom: 24, left: 0, right: 0 }}>
          <Group justify="center">
            <ActionIcon
              size={56}
              radius="xl"
              color="silver"
              variant="filled"
              aria-label="save"
              onClick={handleSave}
              style={{ color: "var(--mantine-color-dark-9)" }}
            >
              <IconDeviceFloppy size={28} />
            </ActionIcon>
          </Group>
        </Affix>
      ) : null}
    </Container>
  );
}
