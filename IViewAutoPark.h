#pragma once
#include "AutoPark.hpp"
class IViewAutoPark
{
public:
	IViewAutoPark();
	virtual ~IViewAutoPark();
	
	virtual void showAutoPark(AutoPark * autoPark) = 0;
};

