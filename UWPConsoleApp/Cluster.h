#pragma once
#include "location.h"
#include "Driver.h"
#include "DriverNode.h"

class Cluster
{
private:
	location Start;
	location End;
	DriverNode* Drivers;
	int size;

public:
	Cluster();
	Cluster(location start, location end);
	bool addDriver(Driver d, location dloc);
	void rmDriver(string dname);
	DriverNode* getDrivers(location rloc);
};

