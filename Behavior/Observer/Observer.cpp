#include <iostream>
#include "ButtonExt.h"


int main()
{
    ControlsExt* controls = new ControlsExt;

    ButtonExt* button1 = new ButtonExt(*controls);
    ButtonExt* button2 = new ButtonExt(*controls);
    ButtonExt* button3 = new ButtonExt(*controls);

    controls->defineOperation("Up");
    controls->operation();

    controls->defineOperation("Right");
    controls->operation();

    delete button1;
    delete button2;
    delete button3;
    delete controls;

    return 0;
}