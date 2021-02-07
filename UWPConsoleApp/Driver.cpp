#include "pch.h"
#include "Driver.h"
#include <string>
using namespace std;

string Driver::getFullName() { return this->full_name_; }

bool Driver::addOption(string op) {
	for (int i = 0; i < 5; i++) {
		if (options_[i] == op)
			return false;
	}
	options_->append(op);
	return true;
}
void Driver::removeOption(string op) {
	int i = 0;
	while (i < 5 && options_[i] != op)
		i++;
	if (options_[i] == op) {
		if (i < 4) {
			for (int x = i; x < 4; x++)
				options_[i] = options_[i + 1];
		}
		options_[4] = "";
	}
}
bool Driver::search(string op) {
	for (int i = 0; i < 5; i++) {
		if (options_[i] == op)
			return true;
	}
	return false;
}
void Driver::getOptions() {
	for (int i = 0; i < 5; i++) {
		if (options_[i] != "")
			cout << options_[i] << ", ";
	}
}
void Driver::updateCar(string carmodel, string plateno, int maxpax) {
	car_model_ = carmodel;
	plate_number_ = plateno;
	max_passengers_ = maxpax;
}
