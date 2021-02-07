#include "pch.h"
#include "location.h"
#include <iostream>

Location::Location() {}
Location::Location(double x, double y) {
	x_coordinate_ = x;
	y_coordinate_ = y;
}
double* Location::getCoordinate() {
	double coor[2] = { x_coordinate_, y_coordinate_ };
	return coor;
}
double Location::getSum() { return (x_coordinate_ + y_coordinate_); }
