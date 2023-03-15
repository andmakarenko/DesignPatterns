#include <iostream>
#include <vector>
#include "PrototypeRegistry.h"

int main()
{
	PrototypeRegistry* prototype_factory = new PrototypeRegistry();

	prototype_factory->initPrototype();

	Prototype* element;


	element = prototype_factory->getById(0);
	cout << element->getColor() << endl;

	vector<Prototype*> elements;

	elements.push_back(prototype_factory->getById(1));

	for (int i = 0; i < elements.size(); i++)
	{
		cout << "color of el#" << i + 1 << " is " << elements[i]->getColor() << endl;
	}

	elements.clear();


	int choice;

	while (true)
	{
		cout << "Select button:\n1-red\n2-blue\n3-green\n0-exit\n";
		cin >> choice;

		if (choice == 0)
			break;

		elements.push_back(prototype_factory->getById(choice));
	}

	for (int i = 0; i < elements.size(); i++)
	{
		cout << "color of el#" << i + 1 << " is " << elements[i]->getColor() << endl;
	}

	cout << "Coordinates of the 1st red button: ";
	cout << prototype_factory->getByColor("red")->getX() << " | ";
	cout << prototype_factory->getByColor("red")->getY() << endl;

	elements.clear();
}

