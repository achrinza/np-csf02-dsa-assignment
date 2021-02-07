#pragma once
#include "Available.h"
#include "DriverNode.h"

class Cluster
{
private:
	Location start_;
	Location end_;
	DriverNode* drivers_ = nullptr;
	int size_ = 0;

public:
	Cluster(Location start, Location end) : start_(start), end_(end) {};
	bool addDriver(Available driver);
	void rmDriver(std::string dname);
	DriverNode* getDrivers(Location rloc);
};
