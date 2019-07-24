#include "stdafx.h"
#include "Driver.hpp"

Driver::~Driver()
{
	int i = 0;
	for (Car* car : m_cars)
	{
		m_cars.erase(m_cars.cbegin() + i);
		delete car;
		car = nullptr;
		++i;
	}

}

std::string Driver::getName()
{
	return m_name;
}

std::string Driver::getSurname()
{
	return m_surname;
}

std::vector<Car*> Driver::getCars()
{
	return m_cars;
}

std::string Driver::getPassword()
{
	return m_password;
}

void Driver::setName(const std::string & name)
{
	m_name = name;
}

void Driver::setSurname(const std::string & surname)
{
	m_surname = surname;
}

void Driver::setPassword(const std::string password)
{
	m_password = password;
}

void Driver::addCar(Car * car)
{
		m_cars.push_back(car);
}

void Driver::removeCar(Car * car)
{
	int i = 0;
	for (Car* automobile : m_cars)
	{
		if (automobile->getMark() == car->getMark() && automobile->getNumber() == car->getNumber())
		{
			m_cars.erase(m_cars.cbegin() + i);
			delete automobile;
			return;
		}
		++i;
	}
}
