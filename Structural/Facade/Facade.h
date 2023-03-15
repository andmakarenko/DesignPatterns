#pragma once
#include "DVD.h"
#include "GPU.h"
#include "HDD.h"
#include "PowSupply.h"
#include "RAM.h"
#include "Sensors.h"


class Facade
{
protected:
	DVD* dvd;
	GPU* gpu;
	HDD* hdd;
	PowSupply* powSupply;
	RAM* ram;
	Sensors* sensors;

public:
	Facade(DVD* _dvd = nullptr, GPU* _gpu = nullptr, HDD* _hdd = nullptr, PowSupply* _powSupply = nullptr, RAM* _ram = nullptr, Sensors* _sensors = nullptr)
	{
		this->dvd = _dvd;
		this->gpu = _gpu;
		this->hdd = _hdd;
		this->powSupply = _powSupply;
		this->ram = _ram;
		this->sensors = _sensors;
	}

	bool resultCheck(string arg)
	{
		if (arg == "Booting failed.")
		{
			return false;
		}
		return true;
	}

	string BeginWork()
	{
		string result = "Initializing components:\n";
		result += this->powSupply->activatePower();

		if (!resultCheck(this->sensors->checkVoltage()))
		{
			return "Booting failure.";
		}
		result += this->sensors->checkVoltage();

		if (!resultCheck(this->sensors->checkPowerSupT()))
		{
			return "Booting failure.";
		}
		result += this->sensors->checkPowerSupT();

		if (!resultCheck(this->sensors->checkGPUT()))
		{
			return "Booting failure.";
		}
		result += this->sensors->checkGPUT();

		result += this->powSupply->GPUPower();
		result += this->gpu->GPUstart();

		if (!resultCheck(this->gpu->MonitorConnectionCheck()))
		{
			return "Booting failure.";
		}
		result += this->gpu->MonitorConnectionCheck();

		if (!resultCheck(this->sensors->checkRAMT()))
		{
			return "Booting failure.";
		}
		result += this->sensors->checkRAMT();

		result += this->powSupply->RAMPower();
		result += this->ram->RAMstart();

		if (!resultCheck(this->ram->RAManalysis()))
		{
			return "Booting failure.";
		}
		result += this->ram->RAManalysis();

		result += this->gpu->RAMinfo();
		result += this->powSupply->HDDPower();
		result += this->dvd->DVDstart();
		result += this->dvd->DVDdiskCheck();
		result += this->gpu->DVDinfo();
		result += this->powSupply->HDDPower();
		result += this->hdd->HDDstart();

		if (!resultCheck(this->hdd->HDDcheckDownloadSector()))
		{
			return "Booting failure.";
		}
		result += this->hdd->HDDcheckDownloadSector();

		result += this->gpu->HDDinfo();

		if (!resultCheck(this->sensors->checkAllT()))
		{
			return "Booting failure.";
		}
		result += this->sensors->checkAllT();

		result += "All components initialized successfully. Starting work...";

		return result;
	}

	string ShutDown()
	{
		string result = "Shutting down. Turning off components:\n";
		result += this->hdd->stopDevice();
		result += this->ram->clearMemory();
		result += this->ram->RAManalysis();
		result += this->gpu->shuttingDownMessage();
		result += this->dvd->returnToInitialPos();
		result += this->powSupply->cutGPUpower();
		result += this->powSupply->cutRAMpower();
		result += this->powSupply->cutDVDpower();
		result += this->powSupply->cutHDDpower();
		result += this->sensors->checkVoltage();
		result += this->powSupply->turnOff();
		result += "System shut down successfully.";

		return result;
	}

};
