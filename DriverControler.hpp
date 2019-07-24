#pragma once
#include "Driver.hpp"

class DriverControler
{
public:
	DriverControler();
	~DriverControler();

	Driver* addCar(Driver* driver, Car * car);
	Driver* removeCar(Driver* driver, Car * car);
	Driver* changeName(Driver* driver, const std::string& name);
	Driver* changeSurname(Driver* driver, const std::string& surname);
	Driver* changePassword(Driver* driver, const std::string& password);
};

