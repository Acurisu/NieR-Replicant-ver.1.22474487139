# Information

This directory serves the purpose of collecting information and notes.

## Save files and player

The game data which usually can be found in `Documents\My Games\NieR Replicant ver.1.22474487139\Steam\{steamID64}` under the name `GAMEDATA` contains up to 3 save files.
Each being `0x9260` bytes wide. The player struct can be found at an offset of `0x8160`. In memory the player struct can be found at `0x144372790` but there is a copy housing the state after reading a save file at `0x14439F270`.

[Player.hpp](Player.hpp) contains a struct which can be used to read from/write to these aforementioned locations.

### Notes

**Maps**

There seems to be remnants of a map called `Tokyo` in the game but teleporting to that location will only result in crashing the game.

**Health**

Setting the health of Kainé or Emil to 0 will not instantly kill them. As whether they are alive or not gets decided after the health gets updated.
Meaning if for example Emil heals 700 and you set Kainé's health to 0, then she won't die as after the heal she has 700 health.
However if you were to set her health to -700 and Emil heals her she would die.
They will also not instantly respawn when setting their health to a positive number.

**Magic**

While Emil actually can run out of magic it doesn't seem like Kainé ever will.

**Active Weapon**

Just setting the active weapon does not trigger a weapon switch, you need to either force update it or get the game to update it (e.g. moving to another area).
The selected weapon does not have to match up the active weapon and will be updated accordingly on update.
If the active weapon is not owned on update then you'll own it afterwards.
Setting DLC weapons to your active weapons without having the DLCs will result in you visually being empty-handed, but it works normal nonetheless.

**Selected Weapon**

This is for the game to keep track of the last selected weapon in each category.

**Weapons**

This can be used to modify the weapons you own by setting their level. Everything other than `0, 1, 2, 3` will lead to you not owning the weapon.
Currently `Virtuous Treaty` and `Virtuous Dignity` will never be owned. Even when using them via `Active Weapon`.

**Abilities**

I did not find any suitable name for these members so I just called them by the bound buttons on a controller.

**Items**

While the item amount is enforced on update it's not checked anywhere else.