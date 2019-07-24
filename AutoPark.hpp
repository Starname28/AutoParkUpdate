#pragma once
#include <vector>
#include <iostream>
#include "Driver.hpp"

class AutoPark
{
public:
	AutoPark(const std::string& address);
	~AutoPark();

	std::string getAddress();
	void setAddress(const std::string& address);
	std::vector <Driver*> getDrivers();

	void addDriver(Driver* driver);
	void removeDriver(Driver* driver);

private:
	std::string m_address;
	std::vector <Driver*> m_driver;

};

//auroPark
//- adress : string
//- driver:[]
//