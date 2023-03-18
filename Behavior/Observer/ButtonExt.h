#pragma once
#include "ControlsExt.h"

class ButtonExt : public Button
{
private:
	ControlsExt& control;
	static int stNum;
	int num;
	string msg;

public:
	ButtonExt(ControlsExt& cn) :
		control(cn)
	{
		++stNum;
		this->control.addButton(this);
		this->num = stNum;
	}

	virtual ~ButtonExt()
	{
		cout << "Button #" << this->num << " was deleted." << endl;
	}

	void shift(const string& msg) override
	{
		this->msg = msg;
		cout << "Button #" << this->num << " was shifted to " << msg << endl;
	}

	void removeSelf()
	{
		control.removeButton(this);
		cout << "Button #" << this->num << " was removed from the controls list." << endl;
	}
};

int ButtonExt::stNum = 0;