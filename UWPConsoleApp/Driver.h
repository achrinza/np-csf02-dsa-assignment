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
	string Options[5];
	string Plateno;

public:
	Driver();
	Driver(string name, string carmodel, string plateno,int maxpax);
	string name();
	bool addoption(string op);
	void rmoption(string op);
	bool search(string op);
	void viewoptions();
	void updatecar(string carmodel, string plateno, int maxpax);

};

