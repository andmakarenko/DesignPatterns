#pragma once
#include "Device.h"

class Remote
{
protected:
	Device* device;

public:
	Remote(Device* _device):
		device(_device)
	{}

	virtual ~Remote(){}

	virtual void togglePower() const
	{
		if (device->isEnabled())
			device->disable();
		else
			device->enable();
	}

	virtual void volumeDown() const
	{
		if (device->getVolume() == 0)
			return;

		device->setVolume(device->getVolume() - 1);
	}

	virtual void volumeUp() const
	{
		if (device->getVolume() == 100)
			return;

		device->setVolume(device->getVolume() + 1);
	}

	virtual void channelDown() const
	{
		if (device->getChannel() == 1)
			return;

		device->setChannel(device->getChannel() - 1);
	}

	virtual void channelUp() const
	{
		device->setChannel(device->getChannel() + 1);
	}
};