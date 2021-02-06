#include "pch.h"
#include "Driver.h"
#include "DriverOptions.h"
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
string Driver::name() { return Fullname; }
bool Driver::addoption(string op) {
	DriverOptions* temp = new DriverOptions;
	temp->option = op;
	temp->next = NULL;
	if (Options == NULL) {
		Options = temp;
		return true;
	}
	else {
		DriverOptions* travel = new DriverOptions;
		travel = Options;
		while (travel != NULL && travel->option != op) {
			if (travel->next == NULL) {
				travel->next = temp;
				return true;
			}
			travel = travel->next;
		}
		return false;
	}
}
void Driver::rmoption(string op) {
	if (Options != NULL) {
		DriverOptions* del = new DriverOptions;
		del = Options;
		while (del != NULL && del->option != op)
			del = del->next;
		if (del != NULL) {
			DriverOptions* cut = new DriverOptions;
			while (cut->next != del)
				cut = cut->next;
			cut->next = del->next;
			delete del;
			del = NULL;
		}
	}
}
void Driver::viewoptions() {
	if (Options == NULL)
		cout << "No options" << endl;
	else {
		DriverOptions* display = new DriverOptions;
		display = Options;
		while (display != NULL) {
			cout << display->option << ", ";
			display = display->next;
		}
	}
		
}
void Driver::updatecar(string carmodel, string plateno, int maxpax) {
	Carmodel = carmodel;
	Plateno = plateno;
	Maxpax = maxpax;
}
