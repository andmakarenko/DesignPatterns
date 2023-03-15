#pragma once
#include "Prototype.h"

class Button : public Prototype
{
private:
	int x, y;

public:
	Button();
	Button(int x, int y, string color) :
		Prototype(color), x(x), y(y) {};
	~Button();

	Prototype* clone() const override
	{
		return new Button(*this);
	}

	int getX() const override
	{
		return x;
	}

	int getY() const override
	{
		return y;
	}
};
