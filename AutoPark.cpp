#include "stdafx.h"
#include "AutoPark.hpp"


AutoPark::AutoPark(const std::string & address):m_address(address)
{
}

AutoPark::~AutoPark()
{
	int i = 0;
	for (Driver* driver : m_driver)
	{
		m_driver.erase(m_driver.begin() + i);
		delete driver;
		driver = nullptr;
		++i;
	}
}

std::string AutoPark::getAddress()
{
	return m_address;
}

void AutoPark::setAddress(const std::string & address)
{
	m_address = address;
}

std::vector<Driver*> AutoPark::getDrivers()
{
	return m_driver;
}

void AutoPark::addDriver(Driver * driver)
{
	m_driver.push_back(driver);
}

void AutoPark::removeDriver(Driver * driver)
{
	int i = 0;
	for (Driver* v_driver : m_driver)
	{
		if (v_driver->getName() == driver->getName() &&
			v_driver->getSurname() == driver->getSurname())
		{
			m_driver.erase(m_driver.begin() + i);
			delete v_driver;
			return;
		}
		++i;
	}
}

//void AutoPark::showPark(AutoPark* autopark)
//{
//	for (Driver* driver : autopark->m_driver)
//	{
//		std::cout << *driver << std::endl;
//	}
//}
