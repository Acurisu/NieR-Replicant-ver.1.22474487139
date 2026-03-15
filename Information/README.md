# Information

This directory serves the purpose of collecting information and notes.

## Save files and player

The game data which usually can be found in `Documents\My Games\NieR Replicant ver.1.22474487139\Steam\{steamID64}` under the name `GAMEDATA` contains up to 3 save files.
Each being `0x9260` bytes wide. The player struct can be found at an offset of `0x8160`. In memory the player struct can be found at `0x144372790` but there is a copy housing the state after reading a save file at `0x14439F270`.

[Player.hpp](Player.hpp) contains a struct which can be used to read from/write to these aforementioned locations.

### Notes

#### Corruptness

There are several mechanisms in place to check whether a save file is corrupt.
One of them checks whether this value does not equal to 200.

The other check is a checksum located at an offset of 0x9250 from the beginning of a save file (the 200 mentioned above).
The checksum can be calculated as follows (JS for simplicity):

```js
function checksum(buffer) {
    const result = new Uint32Array(4).fill(0);
    
    for (let i = 0; i < 0xC20; i += 8) {
        result[0] += buffer[i] + buffer[i+4];
        result[1] += buffer[i+1] + buffer[i+5];
        result[2] += buffer[i+2] + buffer[i+6];
        result[3] += buffer[i+3] + buffer[i+7];
    }

    result[0] += result[2];
    result[1] += result[3];

    return result[0] + result[1];
}
```

In this case the buffer contains only the save file for which it should calculate a checksum.

#### Map name & player name

While for example name has an input limit of 10 chars it's not actually enforced in the code and will just read until it finds a null character. This can lead to some overflows.

#### Spawn

This is the value deciding where you end up on the map you just moved to. Gates and pathways usually are indexed starting from 1 while save points and some other locations have other values.

#### Character

The character gets reset to the correct one when entering for example `Center Village`.
Kainé is locked to level 1 and cannot level up. She also can't use magic and can only use her own weapon.

#### Health

Setting the health of Kainé or Emil to 0 will not instantly kill them. As whether they are alive or not gets decided after the health gets updated.
Meaning if for example Emil heals 700 and you set Kainé's health to 0, then she won't die as after the heal she has 700 health.
However if you were to set her health to -700 and Emil heals her she would die.
They will also not instantly respawn when setting their health to a positive number.

#### Magic

While Emil actually can run out of magic it doesn't seem like Kainé ever will.

#### Level & XP

| Level  | XP Required | Level  | XP Required | Level  | XP Required |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| 1 | 0 | 34 | 1166790 | 67 | 4971979 |
| 2 | 30 | 35 | 1258210 | 68 | 5110609 |
| 3 | 240 | 36 | 1350820 | 69 | 5249983 |
| 4 | 850 | 37 | 1444655 | 70 | 5390112 |
| 5 | 2060 | 38 | 1539750 | 71 | 5531006 |
| 6 | 4070 | 39 | 1636140 | 72 | 5672677 |
| 7 | 7080 | 40 | 1733860 | 73 | 5815137 |
| 8 | 11290 | 41 | 1832945 | 74 | 5958395 |
| 9 | 16900 | 42 | 1933430 | 75 | 6102464 |
| 10 | 24110 | 43 | 2035350 | 76 | 6247355 |
| 11 | 33120 | 44 | 2138740 | 77 | 6393078 |
| 12 | 44130 | 45 | 2243635 | 78 | 6539644 |
| 13 | 57340 | 46 | 2350070 | 79 | 6687065 |
| 14 | 72950 | 47 | 2458080 | 80 | 6835352 |
| 15 | 91160 | 48 | 2567700 | 81 | 6984516 |
| 16 | 112170 | 49 | 2678965 | 82 | 7134568 |
| 17 | 136180 | 50 | 2791910 | 83 | 7285518 |
| 18 | 163390 | 51 | 2906570 | 84 | 7437380 |
| 19 | 194000 | 52 | 3022980 | 85 | 7590162 |
| 20 | 228210 | 53 | 3141175 | 86 | 7743877 |
| 21 | 266220 | 54 | 3261190 | 87 | 7898535 |
| 22 | 308230 | 55 | 3383060 | 88 | 8054148 |
| 23 | 354440 | 56 | 3506820 | 89 | 8210726 |
| 24 | 405050 | 57 | 3632505 | 90 | 8368281 |
| 25 | 460260 | 58 | 3760150 | 91 | 8526824 |
| 26 | 520270 | 59 | 3889790 | 92 | 8686367 |
| 27 | 585280 | 60 | 4021460 | 93 | 8846919 |
| 28 | 655490 | 61 | 4155195 | 94 | 9008492 |
| 29 | 731100 | 62 | 4289596 | 95 | 9171098 |
| 30 | 812310 | 63 | 4424674 | 96 | 9334747 |
| 31 | 899320 | 64 | 4560440 | 97 | 9499451 |
| 32 | 987380 | 65 | 4696906 | 98 | 9665220 |
| 33 | 1076525 | 66 | 4834082 | 99 | 9832066 |

#### Active Weapon

Just setting the active weapon does not trigger a weapon switch, you need to either force update it or get the game to update it (e.g. moving to another area).
The selected weapon does not have to match up the active weapon and will be updated accordingly on update.
If the active weapon is not owned on update then you'll own it afterwards.
Setting DLC weapons to your active weapons without having the DLCs will result in you visually being empty-handed, but it works normal nonetheless.

#### Selected Weapon

This is for the game to keep track of the last selected weapon in each category.

#### Weapons

This can be used to modify the weapons you own by setting their level. Everything other than `0, 1, 2, 3` will lead to you not owning the weapon.
Currently `Virtuous Treaty` and `Virtuous Dignity` will never be owned. Even when using them via `Active Weapon`.

#### Abilities

I did not find any suitable name for these members so I just called them by the bound buttons on a controller.

#### Items

While the item amount is enforced on update it's not checked anywhere else.

#### Total Play Time

A double who's integer digits represent the time played in seconds.

#### Quests

To be honest I got a bit lazy with those.
There is one main bitfield and an extra one for `The Promised Gift`.
For convenience I split them up into 8-byte chunks. I also only extracted which flag is set for making the quest appear and which flag is used for marking the quest as completed. In reality there are several flags used to determine the states of the quests (_Coming soon?_). Keep in mind that besides these flags they use the overall progress to determine whether a quest is actually completable. So while you can set every quest as complete you cannot manually redo all quests later on as just making them available might lead to them being shown as uncompletable.

## Widget names

Widget names are hashed with 32-bit FNV-1 over ASCII bytes:

- start at `0x811C9DC5`
- for each byte do `hash *= 0x01000193; hash ^= byte;`

Example hashes:

- `UPPER_BLACK_BELT` -> `0x1B49BD51`
- `UNDER_BLACK_BELT` -> `0x8EDDB57B`
- `UPPER_BLACK_BELT_TWO` -> `0x8BCD34BA`
- `UNDER_BLACK_BELT_TWO` -> `0x91999FA8`

## Cinematic black bars

The cinematic bars are dedicated black-belt widgets and not anything special in the movie renderer.

Relevant functions:

- `SetBlackBeltPairVisible` at module offset `0x451B40`
- `SetAllBlackBeltsVisibleMode` at module offset `0x451F00`
- `InitSkipBlackOverlayWidgets` at module offset `0x450B50`
- `UpdateSkipBlackPromptDuration` at module offset `0x451DD0`

What they do:

- the belt widgets are named `UPPER_BLACK_BELT`, `UNDER_BLACK_BELT`,
  `UPPER_BLACK_BELT_TWO`, and `UNDER_BLACK_BELT_TWO`
- these functions toggle bit 0 at `[widget + 0xD4]` to show or hide the belts
- `SKIP_BLACK` is a sibling widget used for the skip prompt background
- in the cutscene I tested, the visible pair was `UPPER_BLACK_BELT` / `UNDER_BLACK_BELT`
- both had a visibility byte of `0x05`; changing that to `0x04` hid the bars immediately
- the `_TWO` pair was already hidden in that scene

There are also six obvious show-sites inside the togglers:

- `0x451BB7`
- `0x451C17`
- `0x451F77`
- `0x451FD7`
- `0x452037`
- `0x452097`

At those sites the show path is `or al, 1` and the hide path is `and al, 0xFE`.

The reliable live fix is to resolve the active black-belt widgets and clear bit 0 at `[widget + 0xD4]`, but that only hides bars that already exist. To keep them gone permanently across reloads and later scene changes, the six show-sites above need to be patched.

Useful relocation anchors:

- `InitSkipBlackOverlayWidgets`: `48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 55 48 8B EC 48 83 EC ? 48 8B 41`
- `SetBlackBeltPairVisible`: xref `E8 ? ? ? ? 48 8D 8F ? ? ? ? E8 ? ? ? ? 84 C0 74 ? 83 BF`
- `SetAllBlackBeltsVisibleMode`: `0C ? EB ? 24 ? 88 81 ? ? ? ? 48 8D 05 ? ? ? ? C7 44 24 ? ? ? ? ? 45 33 C9 48 89 44 24 ? 4C 8D 44 24 ? 48 8B CF 48 8D 54 24 ? E8 ? ? ? ? 66 39 68 ? 74 ? ? ? 0F B7 C8 48 03 C9 C1 E8 ? 39 44 CE ? 75 ? ? ? ? ? 48 85 C9 74 ? 0F B6 81 ? ? ? ? 84 DB 75 - 0x77`
- the six patched show-sites are `SetBlackBeltPairVisible + 0x77`, `+0xD7`, and `SetAllBlackBeltsVisibleMode + 0x77`, `+0xD7`, `+0x137`, `+0x197`
