#pragma once
#include <iostream>
#include <string>

class Driver
{

private:
	static int count_;
	const int id_;
	std::string full_name_;
	std::string car_model_;
	int max_passengers_;
	std::string options_[5];
	std::string plate_number_;

public:
	Driver(std::string full_name, std::string car_model, std::string plate_number, int max_passengers_) :
		id_(count_+1),
		full_name_(full_name),
		car_model_(car_model),
		plate_number_(plate_number),
		max_passengers_(max_passengers_) {
		this->count_++;
	};
	std::string getFullName();
	bool addOption(std::string op);
	void removeOption(std::string op);
	void getOptions();
	bool search(std::string op);
	void updateCar(std::string carmodel, std::string plateno, int maxpax);

};
