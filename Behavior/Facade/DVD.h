#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class DVD
{
public:
	string DVDstart() const
	{
		return "DVD: Start.\n";
	}

	string DVDdiskCheck() const
	{
		return "DVD: Chekcing for disk.\n";
	}

	string returnToInitialPos() const
	{
		return "DVD: Returning device to initial position.\n";
	}
};