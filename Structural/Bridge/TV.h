#pragma once
#include "Device.h"

class TV : public Device
{
private:
	bool power;
	int volume;
	int channel;

public:
	TV(bool _power = false, int _volume = 0, int _channel = 0) :
		power(_power), volume(_volume), channel(_channel)
	{}

	bool isEnabled() const
	{
		return power;
	}

	void enable()
	{
		power = true;
	}

	void disable()
	{
		power = false;
	}

	int getVolume() const
	{
		return volume;
	}

	void setVolume(int newVolume)
	{
		if (newVolume < 0 || newVolume > 100)
			return;

		volume = newVolume;
	}

	int getChannel() const
	{
		return channel;
	}

	void setChannel(int newChannel)
	{
		if (newChannel < 1)
			return;

		channel = newChannel;
	}
};