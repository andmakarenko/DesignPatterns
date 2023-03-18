#pragma once
#include <iostream>
#include <string>

using namespace std;

class Button
{
public:
	virtual ~Button() {};
	virtual void shift(const string& msg) = 0;
};