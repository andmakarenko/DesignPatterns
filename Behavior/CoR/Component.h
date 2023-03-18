#pragma once
#include <iostream>
#include <string>
#include "ComponentWithContextualHelp.h"

using namespace std;

class Component : public ComponentWithContextualHelp
{
private:
	ComponentWithContextualHelp* next;
	string tooltipText;

public:
	Component(string tooltipText = "", ComponentWithContextualHelp* next = nullptr):
		tooltipText(tooltipText), next(next)
	{}

	ComponentWithContextualHelp* setNext(ComponentWithContextualHelp* handler) override
	{
		next = handler;
		return handler;
	}

	void showHelp() const override
	{
		if (!tooltipText.empty())
		{
			cout << tooltipText << endl;
		}
		else
		{
			if (next)
			{
				return next->showHelp();
			}
		}
	}
};