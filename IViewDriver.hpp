#pragma once
#include "Driver.hpp"
class IViewDriver
{
public:
	IViewDriver();
	~IViewDriver();

	virtual void showDriver(Driver* driver) = 0;
};

