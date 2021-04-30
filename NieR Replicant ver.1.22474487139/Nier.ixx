export module Nier;

import std.core;

import Memory;

export class Nier
{
private:
	Memory memory;

	void fishingSkipWaitTime() {
		/*
		***REMOVED***

		player->fishingState = 1;
		*/
		std::array<char, 1> patch = { '\x03' };
		memory.writeMemory(0x1403A645C, patch);
	}

	void fishingSkipBattle()
	{
		/*
		***REMOVED***
		***REMOVED***
		***REMOVED***
		***REMOVED***

		if ( result )
		{
			player->fishingSuccess = 1;
		}
		*/
		std::array<char, 2> patch = { '\x90', '\x90' };
		memory.writeMemory(0x1403A5731, patch);
	}

public:
	Nier() : memory(L"NieR Replicant ver.1.22474487139.exe")
	{
		std::cout << "Patching..." << "\n";

		fishingSkipWaitTime();
		fishingSkipBattle();

		std::cout << "Done." << std::endl;
	}
};