#include "stdafx.h"
#include "ViewDriver.hpp"


ViewDriver::ViewDriver()
{
}


ViewDriver::~ViewDriver()
{
}

void ViewDriver::showDriver(Driver * driver)
{
	std::cout << "- Driver name: " << driver->getName() << ' ' <<
		driver->getSurname() << std::endl;

	std::cout << "- Driver cars: " << std::endl;
	for (Car* car : driver->getCars())
	{
		std::cout << "-" << car << std::endl;
	}
}
