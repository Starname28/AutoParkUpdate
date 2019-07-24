#pragma once
#include "AutoPark.hpp"
#include "Driver.hpp"

class AutoParkControler
{
public:
	AutoParkControler();
	~AutoParkControler();

	AutoPark* addDriver(AutoPark* autopark, Driver* driver);
	AutoPark* removeDriver(AutoPark* autopark, Driver* driver);
	AutoPark* changeAddress(AutoPark* autopark, const std::string& address);

private:
	//std::vector<Driver*> m_driver;
};

