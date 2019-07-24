#pragma once
#include "Car.hpp"

class IViewCar
{
public:
	IViewCar();
	virtual ~IViewCar();

	virtual void showCar(Car* car) = 0;
};

