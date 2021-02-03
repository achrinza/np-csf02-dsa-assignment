#pragma once
class location
{
private:
	double xcoor = -1;
	double ycoor = -1;

public:
	location();
	location(double x, double y);
	double* getcoor();
};

