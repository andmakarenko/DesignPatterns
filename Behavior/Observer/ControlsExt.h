#pragma once
#include <list>
#include "Controls.h"

class ControlsExt : public Controls
{
private:
	list<Button*> bList;
	string msg;

public:
	virtual ~ControlsExt() {};
	
	void addButton(Button* button) override
	{
		bList.push_back(button);
	}

	void removeButton(Button* button) override
	{
		bList.remove(button);
	}

	void operation() override
	{
		auto it = bList.begin();

		while (it != bList.end())
		{
			(*it)->shift(msg);
			++it;
		}
	}

	void defineOperation(string op)
	{
		msg = op;
	}
};