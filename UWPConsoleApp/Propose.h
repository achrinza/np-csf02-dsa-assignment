#pragma once
#include "location.h"
#include "Rider.h"
#include <string>
using namespace std;

class Propose
{
private:
	Rider Applicant;
	string Payment;
	location Dest;
	string Request;

public:
	Propose();
	Propose(Rider r, string pay, location dest);
	Propose(Rider r, string pay, location dest, string req);
};

