#include <iostream>
#include "Facade.h"

void ClientCode(Facade* facade)
{
    cout << facade->BeginWork();
    cout << facade->ShutDown();
}

int main()
{
    DVD* dvd = new DVD();
    GPU* gpu = new GPU();
    HDD* hdd = new HDD();
    PowSupply* powSupply = new PowSupply();
    RAM* ram = new RAM();
    Sensors* sensors = new Sensors();

    Facade* facade = new Facade(dvd, gpu, hdd, powSupply, ram, sensors);
    ClientCode(facade);
    delete facade;  


    return 0;
}
