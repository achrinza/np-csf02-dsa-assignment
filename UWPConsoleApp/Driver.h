#pragma once
#include <iostream>
#include <string>
using namespace std;

class Driver
{
private:
	string Fullname;
	string Carmodel;
	int Maxpax;
	string* Options;
	string Plateno;

public:
	Driver();
	Driver(string name, string carmodel, string plateno,int maxpax);
	void updateoptions(string* listofoptions);
	void addoption(string option);
	bool rmoption(string option);
	void updatecar(string carmodel, string plateno, int maxpax);

};

