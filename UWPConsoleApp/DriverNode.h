#pragma once
#include "Driver.h"
#include "location.h"

typedef Driver driver;
typedef Location loc;

class DriverNode {
public:
	DriverNode(driver item, loc coordinate, DriverNode* next) :
		item_(item), coordinate_(coordinate), next_(next) {};
	driver item_;
	loc coordinate_;
	DriverNode* next_;
};
