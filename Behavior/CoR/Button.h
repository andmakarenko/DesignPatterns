#pragma once
#include "Primitive.h"

class Button : public Primitive
{
public: 
	Button(string txt = "", Component* n = 0):
		Primitive(txt, n)
	{}
};