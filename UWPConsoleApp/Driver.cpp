#include "pch.h"
#include "Driver.h"
#include <string>
using namespace std;

Driver::Driver() {}
Driver::Driver(string name, string carmodel, string plateno, int maxpax) {
	Fullname = name;
	Carmodel = carmodel;
	Plateno = plateno;
	Options = NULL;
	Maxpax = maxpax;
}
void Driver::updateoptions(string* list) {
	Options = list;
}
void Driver::addoption(string option) {
	Options->append(option);
}
bool Driver::rmoption(string option) {
	int index = -1;
	for (int i = 0; i < Options->length(); i++) {
		if (Options[i] == option)
			index = i;
	}
	if (index == -1)
		return false;
	else {
		for (int r = index; r < Options->length() - 1; r++) {
			Options[r] = Options[r + 1];
		}
		return true;
	}
}
void Driver::updatecar(string carmodel, string plateno, int maxpax) {
	Carmodel = carmodel;
	Plateno = plateno;
	Maxpax = maxpax;
}
