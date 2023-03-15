#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class PowSupply
{
public:
	string activatePower() const
	{
		return "Power Supply: Activating power.\n";
	}

	string GPUPower() const
	{
		return "Power Supply: Activating GPU power.\n";
	}

	string RAMPower() const
	{
		return "Power Supply: Activating RAM power.\n";
	}

	string DVDPower() const
	{
		return "Power Supply: Activating DVD power.\n";
	}

	string HDDPower() const
	{
		return "Power Supply: Activating HDD power.\n";
	}

	string cutGPUpower() const
	{
		return "Power Supply: Ceasing GPU power supply.\n";
	}

	string cutRAMpower() const
	{
		return "Power Supply: Ceasing RAM power supply.\n";
	}

	string cutDVDpower() const
	{
		return "Power Supply: Ceasing DVD power supply.\n";
	}

	string cutHDDpower() const
	{
		return "Power Supply: Ceasing HDD power supply.\n";
	}

	string turnOff() const
	{
		return "Power Supply: Turning off.\n";
	}
};
