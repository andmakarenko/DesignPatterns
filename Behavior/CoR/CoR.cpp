#include <iostream>
#include "Button.h"
#include "Panel.h"

int main()
{
    Panel* panel = new Panel("Panel Help Info");
    Button* okBtn = new Button("Ok");
    Button* cancelBtn = new Button;

    panel->add(okBtn);
    panel->add(cancelBtn);

    okBtn->showHelp();
    panel->showHelp();
    cancelBtn->showHelp();

    delete okBtn;
    delete panel;
    delete cancelBtn;


    return 0;
}
