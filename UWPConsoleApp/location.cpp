#include "pch.h"
#include "location.h"
#include <iostream>

location::location() {}
location::location(double x, double y) {
	xcoor = x;
	ycoor = y;
}
double* location::getcoor() {
	double coor[2] = { xcoor, ycoor };
	return coor;
}

