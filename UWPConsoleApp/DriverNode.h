#pragma once
#include "Driver.h"
#include "location.h"

typedef Driver driver;
typedef location loc;
struct DriverNode {
	driver item;
	loc dloc;
	DriverNode* next;
};
