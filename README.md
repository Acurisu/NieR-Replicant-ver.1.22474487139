# NieR Replicant ver.1.22474487139

This project serves the purpose of having some additional fun with this awesome game.

I also use it to try-out/play with [C++20 Modules](https://en.cppreference.com/w/cpp/language/modules).

## Usage

1. Start the game
2. Load a save file
3. Start the .exe

## Information

Additional information can be found [here](Information).

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

`fishingSkipWaitTime` prevents the player from going into stage 1 and directly skips to stage 3, thus instantly starting the battle as soon as the bobber is supposed to hit the water.

`fishingSkipBattle` immediately finishes the battle. Using only this patch would lead to a more NieR:Automata like fishing.

### Money, XP, Health and Magic

These patches max out the mentioned properties and, if necessary, prevent them from being changed.

## Video

_Coming soon™_

## Release

_Coming soon™_

## Cui honorem, honorem

Huge thanks to [ioncodes](https://github.com/ioncodes) for wasting his time on this with me.