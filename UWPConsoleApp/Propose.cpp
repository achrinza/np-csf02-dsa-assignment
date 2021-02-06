#include "pch.h"
#include "Propose.h"

Propose::Propose() {}
Propose::Propose(Rider r, string pay, location dest) {
	Applicant = r;
	Payment = pay;
	Dest = dest;
	Request = "";
}
Propose::Propose(Rider r, string pay, location dest, string req) {
	Applicant = r;
	Payment = pay; 
	Dest = dest;
	Request = req;
}