#include "stdafx.h"
#include "DriverControler.hpp"


DriverControler::DriverControler()
{
}


DriverControler::~DriverControler()
{
}

Driver* DriverControler::addCar(Driver* driver, Car * car)
{
	driver->addCar(car);
	return driver;
}

Driver * DriverControler::removeCar(Driver * driver, Car * car)
{
	driver->removeCar(car);
	return driver;
}

Driver * DriverControler::changeName(Driver * driver, const std::string & name)
{
	driver->setName(name);
	return driver;
}

Driver * DriverControler::changeSurname(Driver * driver, const std::string & surname)
{
	driver->setSurname(surname);
	return driver;
}

Driver * DriverControler::changePassword(Driver * driver, const std::string & password)
{
	driver->setPassword(password);
	return driver;
}
