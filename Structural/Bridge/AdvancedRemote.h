#pragma once
#include "Remote.h"

class AdvancedRemote : public Remote
{
public:
	AdvancedRemote(Device* _device) :
		Remote(_device)
	{}

	void togglePower() const override
	{
		if (device->isEnabled())
			device->disable();
		else
			device->enable();
	}

	void volumeDown() const override
	{
		if (device->getVolume() == 0)
			return;

		device->setVolume(device->getVolume() - 1);
	}

	void volumeUp() const override
	{
		if (device->getVolume() == 100)
			return;

		device->setVolume(device->getVolume() + 1);
	}

	void channelDown() const override
	{
		if (device->getChannel() == 1)
			return;

		device->setChannel(device->getChannel() - 1);
	}

	void channelUp() const override
	{
		device->setChannel(device->getChannel() + 1);
	}

	void mute() const
	{
		device->setVolume(0);
	}
};