#pragma once
#include "Component.h"

class Primitive : public Component
{
public:
	Primitive(string txt = "", Component* n = 0):
		Component(txt, n)
	{}


};