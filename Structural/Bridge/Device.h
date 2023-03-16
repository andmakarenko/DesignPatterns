#pragma once


class Device
{
public:
	virtual ~Device(){}

	virtual bool isEnabled() const = 0;
	virtual void enable() = 0;
	virtual void disable() = 0;

	virtual int getVolume() const = 0;
	virtual void setVolume(int newVolume) = 0;
	virtual int getChannel() const = 0;
	virtual void setChannel(int newChannel) = 0;
};