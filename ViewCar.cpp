#include "stdafx.h"
#include "ViewCar.hpp"


ViewCar::ViewCar()
{
}


ViewCar::~ViewCar()
{
}

void ViewCar::showCar(Car* car)
{
	std::cout << "Info about: ";
	std::cout << "Brand car" << car->getMark() << std::endl;
	std::cout << "Number car" << car->getNumber() << std::endl;
	std::cout << "Weight car" << car->getWeight() << std::endl;
	std::cout << "MaxSpeed car" << car->getSpeed() << std::endl;
	std::cout << "MaxFuel car" << car->getMaxFuel() << std::endl;
	std::cout << "Current fuel car" << car->getFuel() << std::endl;
}
