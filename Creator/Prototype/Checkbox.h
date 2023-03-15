#pragma once
#include "Prototype.h"
class Checkbox : public Prototype
{
private:
	int x, y;
	bool val;

public:
	Checkbox();
	Checkbox(int x, int y, string color, bool val = false) :
		Prototype(color), x(x), y(y), val(val)
	{};
	~Checkbox();

	Prototype* clone() const override
	{
		return new Checkbox(*this);
	}

	int getX() const override
	{
		return x;
	}

	int getY() const override
	{
		return y;
	}

	bool getVal() const
	{
		return val;
	}

};