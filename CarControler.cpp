#include "stdafx.h"
#include "CarControler.hpp"


CarControler::CarControler()
{
}


CarControler::~CarControler()
{
}

Car * CarControler::newCar(Mark mark, const int & speed, const std::string & number, const int & maxFuel, const int & weight)
{
	Car* car = nullptr;
	car->setMark(mark);
	car->setSpeed(speed);
	car->setNumber(number);
	car->setmaxFuel(maxFuel);
	car->setFuel(weight);
	return car;
}

Car * CarControler::changeMark(Car * car, const Mark & mark)
{
	car->setMark(mark);
	return car;
}

Car * CarControler::changeSpeed(Car * car, const int & speed)
{
	car->setSpeed(speed);
	return car;
}

Car * CarControler::changeNumber(Car * car, const std::string & number)
{
	car->setNumber(number);
	return car;
}

Car * CarControler::changeMaxFuel(Car * car, const int & maxFuel)
{
	car->setmaxFuel(maxFuel);
	return car;
}

Car * CarControler::changeWeight(Car * car, const int & weight)
{
	car->setWeight(weight);
	return car;
}
