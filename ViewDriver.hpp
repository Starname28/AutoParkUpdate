#pragma once
#include <iostream>
#include "IViewDriver.hpp"
class ViewDriver :
	public IViewDriver
{
public:
	ViewDriver();
	virtual ~ViewDriver();

	virtual void showDriver(Driver* driver)override;
};

