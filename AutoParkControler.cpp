#include "stdafx.h"
#include "AutoParkControler.hpp"


AutoParkControler::AutoParkControler()
{
}


AutoParkControler::~AutoParkControler()
{
}

AutoPark * AutoParkControler::addDriver(AutoPark * autopark, Driver * driver)
{
	autopark->addDriver(driver);
	return autopark;
}

AutoPark * AutoParkControler::removeDriver(AutoPark * autopark, Driver * driver)
{
	autopark->removeDriver(driver);
	return autopark;
}

AutoPark * AutoParkControler::changeAddress(AutoPark * autopark, const std::string & address)
{
	autopark->setAddress(address);
	return autopark;
}
