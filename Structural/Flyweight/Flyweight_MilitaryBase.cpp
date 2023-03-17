#include <iostream>
#include "ContextA.h"
#include "UnitFactory.h"


int main()
{
	Context* context = new ContextA(
		UnitFactory::getUnit("Infantry"),
		UnitFactory::getUnit("Vehicle"),
		UnitFactory::getUnit("Heavy battle vehicle"),
		UnitFactory::getUnit("Light battle vehicle"),
		UnitFactory::getUnit("Air force")
	);

	context->draw();

	UnitFactory::showUnitsInfo();

	return 0;
}