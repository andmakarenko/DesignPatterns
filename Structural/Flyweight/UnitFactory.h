#pragma once
#include "Unit.h"

class UnitFactory
{
private:
	static int const MAX_UNITS = 6;
	static int numUnits;
	static Unit* units[MAX_UNITS];

public:
	static Unit* getUnit(string name)
	{
		for (int i = 0; i < numUnits; i++)
		{
			if (units[i]->getName() == name)
				return units[i];
		}

		units[numUnits] = new Unit(name);
		return units[numUnits++];
	}

	static void showUnitsInfo()
	{
		cout << "Units: ";

		for (int i = 0; i < numUnits; i++)
		{
			cout << units[i]->getName() << " ";
		}

		cout << endl;
	}
};

int UnitFactory::numUnits = 0;
Unit* UnitFactory::units[];
