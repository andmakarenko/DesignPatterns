#pragma once
#include "Subject.h"
#include <iostream>


using namespace std;

class Connection : public Subject
{
public:
	void request(string website) const override
	{
		cout << "Request accepted: Connecting to " << website << endl;
	}
};