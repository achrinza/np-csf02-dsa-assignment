#pragma once
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

