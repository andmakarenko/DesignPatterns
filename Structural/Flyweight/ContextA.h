#pragma once
#include "Context.h"

class ContextA : public Context
{
public:
	ContextA(Unit* u1, Unit* u2, Unit* u3, Unit* u4, Unit* u5):
		Context(100, 100, 100)
	{
		units[0] = u1;
		units[1] = u2;
		units[2] = u3;
		units[3] = u4;
		units[4] = u5;
	}

	void draw()
	{
		cout << "Showing units:" << endl;

		for (int i = 0; i < 5; i++)
		{
			units[i]->show(x + (i * xIncr), y);
		}
	}
};