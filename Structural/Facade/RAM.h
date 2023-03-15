#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class RAM
{
public:
	string RAMstart() const
	{
		return "RAM: Start.\n";
	}

	string RAManalysis() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}
		return "RAM: Memory analisys.\n";
	}

	string clearMemory() const
	{
		return "RAM: Clearing memory.\n";
	}
};