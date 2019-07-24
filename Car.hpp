#pragma once
#include <string>
#include "Enum.hpp"

class Car
{
public:
	Car(Mark mark, const int& speed, const std::string& number,
		const int& maxFuel, const int& weight);
	~Car();

	Mark getMark();
	std::string getNumber();
	int getSpeed();
	int getWeight();
	int getMaxFuel();
	int getFuel();
	void setMark(const Mark& mark);
	void setNumber(const std::string& number);
	void setSpeed(const int& speed);
	void setWeight(const int& weight);
	void setmaxFuel(const int& maxFuel);
	void setFuel(const int& fuel);


private:

	std::string m_number;
	Mark m_mark;
	int m_speed;
	int m_weight;
	int m_maxFuel;
	int m_fuel;
};

//CAR
//- number:string
//- speed : number
//- enum marka
//- weight : number
//- mawFuel : number
//- fuel : number