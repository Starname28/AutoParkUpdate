#pragma once
#include <iostream>
#include "IViewCar.hpp"

class ViewCar :
	public IViewCar
{
public:
	ViewCar();
	~ViewCar();

	void showCar(Car* car) override;
};