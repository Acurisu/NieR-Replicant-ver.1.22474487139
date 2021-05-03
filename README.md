# NieR Replicant ver.1.22474487139

This project serves the purpose of having some additional fun with this awesome game.

I also use it to try-out/play with [C++20 Modules](https://en.cppreference.com/w/cpp/language/modules).

## Usage

1. Start the game
2. Load a save file
3. Start the .exe

## Information

Additional information can be found [here](Information).

For something more interesting check out [this](https://twitter.com/layle_ctf/status/1388508172084776961) twitter thread.

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

### Player model

Sets the player model to prologue Nier and prevents it from being changed by the game.

### Money, XP, Health and Magic

These patches max out the mentioned properties and, if necessary, prevent them from being changed.

### Items, Weapons and Words

Unlocks all items, weapons and words. Be careful when doing this as it can prevent you from doing certain quests.

## Video

https://user-images.githubusercontent.com/17300231/116914714-5e53b180-ac4b-11eb-8900-1fc75ada9c03.mp4

## Release

_Coming soon™_

## Cui honorem, honorem

Huge thanks to [ioncodes](https://github.com/ioncodes) for wasting his time on this with me.
