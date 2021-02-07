#pragma once
#include "Available.h"
#include "Driver.h"
#include "Location.h"

typedef Available available_driver;

class DriverNode {
public:
	DriverNode(available_driver item, DriverNode* next) :
		item_(item.getdriver_()), coordinate_(item.getloc_()), next_(next) {};
	DriverNode(Driver item, Location coordinate, DriverNode* next) :
		item_(item), coordinate_(coordinate), next_(next) {};
	Driver item_;
	Location coordinate_;
	DriverNode* next_;
};
