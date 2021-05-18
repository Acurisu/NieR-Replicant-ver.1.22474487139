# NieR Trainer

## Usage

1. Start the game
2. Load a save file
3. Start the .exe

## Patches

### Fishing

I'm quite obsessed with fishing in games as seen in [CancerCraft](https://github.com/Acurisu/CancerCraft) so I had to look into it.

I really enjoy the fishing in this game but still wrote some patches to make it easier and faster for lazy people.

The fishing states one can have are the following:

```c++
0. throwing bobber
1. bobber in water
2. fish bite
3. battle
4. pull out
5. success
6. fail
7. finishing success
8. clicked fish record away
9. popups gone
```

`fishing_skip_wait_time` prevents the player from going into stage 1 and directly skips to stage 3, thus instantly starting the battle as soon as the bobber is supposed to hit the water.

`fishing_skip_battle` immediately finishes the battle. Using only this patch would lead to a more NieR:Automata like fishing.

### Character

Sets the character to prologue Nier and prevents it from being changed by the game.

### Money, XP, Health and Magic

These patches max out the mentioned properties and, if necessary, prevent them from being changed.

### Instant Charge and Rapid Fire

Instant Charge allows you to use charged magic attacks nearly instantly. Does not yet work with certain types such as `Dark Execution`. Rapid Fire allows you to use `Dark Blast` with no cooldown between blasts.

### Items

Unlocks all items. Be careful when doing this as it can prevent you from doing certain quests.

### Weapons

Unlocks all weapons and sets them to their max level.

### Quests

Unlocks and sets all quests to completed.

### Words, Documents, Tutorials

Unlocks all words, documents and tutorials.

### Combo

This patch prevents losing combo unless you reload the game by either loading a save or going to another area.

## Video

https://user-images.githubusercontent.com/17300231/116914714-5e53b180-ac4b-11eb-8900-1fc75ada9c03.mp4

## Release

_Coming soon™_