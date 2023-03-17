#pragma once
#include <iostream>
#include <string>

using namespace std;


class Unit
{
private:
	string name;
	int speed;
	int power;
	string image;

public:
	Unit(string _name) :
		name(_name)
	{
		if (_name == "Infantry")
		{
			speed = 20;
			power = 10;
			image = "|";
		}
		else if (_name == "Vehicle")
		{
			speed = 70;
			power = 0;
			image = "0-0";
		}
		else if (_name == "Heavy battle vehicle")
		{
			speed = 15;
			power = 150;
			image = "(=)=<";
		}
		else if (_name == "Light battle vehicle")
		{
			speed = 50;
			power = 30;
			image = "0-0-";
		}
		else if (_name == "Air force")
		{
			speed = 300;
			power = 100;
			image = ">+-";
		}
	}

	string getName() const
	{
		return name;
	}

	void show(int x, int y) const
	{
		cout << name << " " << image << ": Position(" << x << "|" << y << ")" << endl;
	}
};