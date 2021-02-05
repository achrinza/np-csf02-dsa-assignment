#pragma once
#include <string>
using namespace std;

typedef string Options;

struct DriverOptions {
	Options option;
	DriverOptions* next;
};