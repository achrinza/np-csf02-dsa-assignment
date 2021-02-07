#pragma once
//Team:12 - Member:Jun Hao - Student ID:S10195387//
//This is the available class. An instance of this class is initialized when a driver declares his available//
//This holds an instance of the driver class and the location of the driver//
#include "Driver.h"
#include "location.h"

class Available
{
private:
	Driver driver_;
	Location location_;

public:
	Available(Driver driver, Location location) : driver_(driver), location_(location) {};
	Driver getdriver_();
	Location getloc_();
};

