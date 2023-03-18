#pragma once
#include <vector>
#include "Component.h"

class Composite : public Component
{
	vector<Component*> children;
public:
	Composite(string txt = "", Component* n = 0):
		Component(txt , n)
	{}

	void add(Component* c)
	{
		c->setNext(this);
		children.push_back(c);
	}
};