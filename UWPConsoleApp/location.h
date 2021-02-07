#pragma once

class Location
{
private:
	double x_coordinate_ = -1;
	double y_coordinate_ = -1;

public:
	Location();
	Location(double x, double y);
	double* getCoordinate();
	double getSum();
};
