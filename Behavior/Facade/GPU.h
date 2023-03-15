#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class GPU
{
public:
	string GPUstart() const
	{
		return "GPU: Start.\n";
	}

	string MonitorConnectionCheck() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}
		return "GPU: Checking connection to monitor.\n";
	}

	string RAMinfo() const
	{
		return "GPU: Output RAM info.\n";
	}

	string DVDinfo() const
	{
		return "GPU: Output DVD info.\n";
	}

	string HDDinfo() const
	{
		return "GPU: Output HDD info.\n";
	}

	string shuttingDownMessage() const
	{
		return "GPU: Output shut down message.\n";
	}
};
