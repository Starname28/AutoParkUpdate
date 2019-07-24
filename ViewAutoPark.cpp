#include "stdafx.h"
#include "ViewAutoPark.hpp"


View::View()
{
}


View::~View()
{
}

void View::showAutoPark(AutoPark * autoPark)
{
	std::cout << "Autopark address: " << autoPark->getAddress() << std::endl;
	std::cout << "Drivers in this autopark" << std::endl;
	
	for (Driver* driver : autoPark->getDrivers())
	{
		std::cout << "- Driver name: " << driver->getName() << ' ' <<
			driver->getSurname() << std::endl;

		std::cout << "- Driver cars: " << std::endl;
		for (Car* car : driver->getCars())
		{
			std::cout << "-" << car << std::endl;
		}
	}
}
