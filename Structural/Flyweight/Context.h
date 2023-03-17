#pragma once
#include "Unit.h"

class Context
{
protected:
	Unit* units[5];
	int x;
	int y;
	int xIncr;

public:
	Context(int _x, int _y, int _xIncr) :
		x(_x), y(_y), xIncr(_xIncr)
	{}

	virtual void draw() = 0;
};