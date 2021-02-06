#include "pch.h"
#include "Driver.h"
#include <string>
using namespace std;

Driver::Driver() {}
Driver::Driver(string name, string carmodel, string plateno, int maxpax) {
	Fullname = name;
	Carmodel = carmodel;
	Plateno = plateno;
	Maxpax = maxpax;
}
string Driver::name() { return Fullname; }
bool Driver::addoption(string op) {
	for (int i = 0; i < 5; i++) {
		if (Options[i] == op)
			return false;
	}
	Options->append(op);
	return true;
}
void Driver::rmoption(string op) {
	int i = 0;
	while (i < 5 && Options[i] != op)
		i++;
	if (Options[i] == op) {
		if (i < 4) {
			for (int x = i; x < 4; x++)
				Options[i] = Options[i + 1];
		}
		Options[4] = "";
	}
}
bool Driver::search(string op) {
	for (int i = 0; i < 5; i++) {
		if (Options[i] == op)
			return true;
	}
	return false;
}
void Driver::viewoptions() {
	for (int i = 0; i < 5; i++) {
		if (Options[i] != "")
			cout << Options[i] << ", ";
	}
}
void Driver::updatecar(string carmodel, string plateno, int maxpax) {
	Carmodel = carmodel;
	Plateno = plateno;
	Maxpax = maxpax;
}
