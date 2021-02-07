#pragma once
//Team:12 - Member:Jun Hao - Student ID:S10195387//
//This is the cluster class. This holds a linked list of available drivers within the boundaries of this cluster//
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

	//Adds a new driver to the linked list, sorted based on distance to the start location of the cluster//
	//Input: An instance of an available driver (available class)//
	//Output: returns a true or false flag depending on whether the add function succeded or not//
	bool addDriver(Available driver);

	//removes a driver to the linked list based on the driver's ID//
	//Input: An existing driver's ID//
	//Output: None//
	void rmDriver(std::string dname);

	//Gets a linked list of all drivers in the cluster, ordered based on proximity to the rider's location//
	//Input: the rider's location//
	//Output: the first node of the resorted linked list//
	DriverNode* getDrivers(Location rloc);
};
