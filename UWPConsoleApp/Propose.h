#pragma once
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

	Propose(Rider proposer, std::string payment_method, Location destination, std::string request) :
		proposer_(proposer),
		payment_method_(payment_method),
		destination_(destination) {};
};
