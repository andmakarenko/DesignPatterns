#pragma once
#include "Button.h"
#include "Checkbox.h"

class PrototypeRegistry
{
private:
	static Prototype* prototypeItems[5];

public:
	PrototypeRegistry() {};
	~PrototypeRegistry() {};

	static void initPrototype()
	{
		prototypeItems[0] = new Button(0, 0, "red");
		prototypeItems[1] = new Button(10, 10, "blue");
		prototypeItems[2] = new Button(100, 100, "green");
		prototypeItems[3] = new Checkbox(150, 20, "purple");
		prototypeItems[4] = new Checkbox(200, 500, "cyan", true);
	}

	static Prototype* getById(int id)
	{
		return prototypeItems[id]->clone();
	}

	static Prototype* getByColor(string color)
	{
		for (auto p : prototypeItems)
		{
			if (p->getColor() == color)
			{
				return p->clone();
			}
		}
	}
};

Prototype* PrototypeRegistry::prototypeItems[] = { 0,0,0,0,0 };