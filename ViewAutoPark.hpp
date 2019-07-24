#pragma once
#include "IViewAutoPark.h"

class View : public IViewAutoPark
{
public:
	View();
	~View();

	void showAutoPark(AutoPark* autoPark) override;

};

