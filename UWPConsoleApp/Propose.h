#pragma once
//Team:12 - Member:Jun Hao - Student ID:S10195387//
//This is the Propose class. An instance of this class is created when a rider makes a request//
//This stores the necessary information for a rider request//
#include "location.h"
#include "Rider.h"
#include <string>

class Propose
{
private:
	Rider proposer_;
	std::string payment_method_;
	Location destination_;
	std::string request_;

public:
	Propose(Rider proposer, std::string payment_method, Location destination) :
		Propose(proposer, payment_method, destination, "") {};
	//An overloaded initializer list for rider requests with optitional requests//
	Propose(Rider proposer, std::string payment_method, Location destination, std::string request) :
		proposer_(proposer),
		payment_method_(payment_method),
		destination_(destination) {};
};
