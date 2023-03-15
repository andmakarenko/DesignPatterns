#pragma once
#include <iostream>
#include <cstring>
#include <time.h>
#include <stdlib.h>


using namespace std;

class Sensors
{
public:
	string checkVoltage() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}

		return "Sensors: Checking voltage.\n";

	}
	string checkPowerSupT() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}

		return "Sensors: Checking power supply temperature.\n";
	}
	string checkGPUT() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}

		return "Sensors: Checking GPU temperature.\n";
	}
	string checkRAMT() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}
		return "Sensors: Checking RAM temperature.\n";
	}
	string checkAllT() const
	{
		srand(time(NULL));
		int random = rand() % 100;

		if (random == 1)
		{
			return "Booting failed.";
		}
		return "Sensors: Checking temperature of all systems.\n";
	}
};