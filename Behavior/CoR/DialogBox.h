#pragma once
#include "Composite.h"


class DialogBox : public Composite
{
	string modalHelpText;
public:
	DialogBox(string txt = "", Component* n = 0) :
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