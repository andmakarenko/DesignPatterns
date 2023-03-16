#include <iostream>
#include "Radio.h"
#include "TV.h"
#include "AdvancedRemote.h"

using namespace std;

int main()
{
    Device* device = new TV;
    Remote* remote = new Remote(device);

    cout << device->isEnabled() << endl;
    remote->togglePower();
    cout << device->isEnabled() << endl;

    cout << device->getChannel() << endl;
    remote->channelUp();
    cout << device->getChannel() << endl;

    delete device;
    delete remote;

    device = new Radio(true, 56, 3);
    AdvancedRemote* aRemote = new AdvancedRemote(device);

    cout << device->getVolume() << endl;
    aRemote->mute();
    cout << device->getVolume() << endl;

}
