#pragma once
#include <iostream>
#include <string>
#include "DriverOptions.h"
using namespace std;

class Driver
{

private:
	string Fullname;
	string Carmodel;
	int Maxpax;
	DriverOptions* Options;
	string Plateno;

public:
	Driver();
	Driver(string name, string carmodel, string plateno,int maxpax);
	bool addoption(string op);
	void rmoption(string op);
	void viewoptions();
	void updatecar(string carmodel, string plateno, int maxpax);

};

