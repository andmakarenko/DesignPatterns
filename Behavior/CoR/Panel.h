#pragma once
#include "Composite.h"


class Panel : public Composite
{
	string modalHelpText;
public:
	Panel(string txt = "", Component* n = 0) :
		modalHelpText(txt), Composite("", n)
	{}

	void showHelp() const override
	{
		if (!modalHelpText.empty())
		{
			cout << modalHelpText << endl;
		}
		else
		{
			Composite::showHelp();
		}
	}
};