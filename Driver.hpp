#pragma once
#include "Car.hpp"
#include <vector>
class Driver
{
public:
	Driver(const std::string& name, const std::string& surname,
		const std::string& password):m_name(name), m_surname(surname),
		m_password(password){}
	~Driver();

	std::string getName();
	std::string getSurname();
	std::vector <Car*> getCars();
	std::string getPassword();
	void setName(const std::string& name);
	void setSurname(const std::string& surname);
	void setPassword(const std::string password);

	void addCar(Car* car);
	void removeCar(Car* car);

private:
	std::string m_name;
	std::string m_surname;
	std::vector <Car*> m_cars;
	std::string m_password;
};

//driver
//- name : strung
//- lastname : string
//- cars : []
//- password : string
//