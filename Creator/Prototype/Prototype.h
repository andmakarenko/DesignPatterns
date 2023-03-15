#pragma once
#include <string>

using namespace std;

class Prototype
{
public:
	Prototype();
	Prototype(string color) : color(color) {};
	~Prototype();

	virtual Prototype* clone() const = 0;
	string getColor()
	{
		return color;
	}

	virtual int getX() const = 0;
	virtual int getY() const = 0;

protected:
	string color;
};