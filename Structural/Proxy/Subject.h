#pragma once
#include <string>

using namespace std;

class Subject
{
public:
	virtual void request(string website) const = 0;
};