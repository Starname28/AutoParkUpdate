#include "stdafx.h"
#include "Car.hpp"

Car::Car(Mark mark, const int& speed, const std::string& number,
	const int& maxFuel, const int& weight) :m_mark(mark), m_speed(speed),
	m_number(number), m_maxFuel(maxFuel) {}
Car::~Car()
{
}

Mark Car::getMark()
{
	return m_mark;
}

std::string Car::getNumber()
{
	return m_number;
}

int Car::getSpeed()
{
	return m_speed;
}

int Car::getWeight()
{
	return m_weight;
}

int Car::getMaxFuel()
{
	return m_maxFuel;
}

int Car::getFuel()
{
	return m_fuel;
}

void Car::setMark(const Mark & mark)
{
	m_mark = mark;
}

void Car::setNumber(const std::string & number)
{
	m_number = number;
}

void Car::setSpeed(const int & speed)
{
	m_speed = speed;
}

void Car::setWeight(const int & weight)
{
	m_weight = weight;
}

void Car::setmaxFuel(const int & maxFuel)
{
	m_maxFuel = maxFuel;
}

void Car::setFuel(const int & fuel)
{
	m_fuel = fuel;
}
