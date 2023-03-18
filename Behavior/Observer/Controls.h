#pragma once
#include <iostream>
#include "Button.h"

class Controls
{
public:
	virtual ~Controls() {};
	virtual void addButton(Button* button) = 0;
	virtual void removeButton(Button* button) = 0;
	virtual void operation() = 0;
};