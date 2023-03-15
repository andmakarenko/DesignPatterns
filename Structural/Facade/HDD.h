#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class HDD
{
public:
	string HDDstart() const
	{
		return "HDD: Start.\n";
	}

	string HDDcheckDownloadSector() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}
		return "HDD: Chekcing download sector.\n";
	}

	string stopDevice() const
	{
		return "HDD: Stop device.\n";
	}
};