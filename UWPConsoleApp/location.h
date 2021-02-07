#pragma once
//Team:12 - Member:Jun Hao - Student ID:S10195387//
//This is the location class. It stores the coordinates of a location data point//
class Location
{
private:
	double x_coordinate_ = -1;
	double y_coordinate_ = -1;

public:
	Location();
	Location(double x, double y);

	//Retrieves the coordinates of an instance of this class//
	//Input parameters: None//
	//Output: Returns a pointer to an array of {x, y}//
	double* getCoordinate();

	//Computes the sum of x and y coordinates of an instance of this class//
	//Input parameters: None//
	//Output: Returns a double of the sum of x and y coordinates//
	double getSum();
};
