#pragma once
#include "Car.hpp"

class CarControler
{
public:

	CarControler();
	~CarControler();

	Car* newCar(Mark mark, const int& speed, const std::string& number,
		const int& maxFuel, const int& weight);
	Car* changeMark(Car* car, const Mark& mark);
	Car* changeSpeed(Car* car, const int& speed);
	Car* changeNumber(Car* car, const std::string& number);
	Car* changeMaxFuel(Car* car, const int& maxFuel);
	Car* changeWeight(Car* car, const int& weight);
};

