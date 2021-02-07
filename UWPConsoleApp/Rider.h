#pragma once
#include <iostream>
#include <string>

class Rider
{
private:
	static int count_;
	const int id_;
	std::string name_;

public:
	Rider(std::string name) : id_(count_+1), name_(name) {
		this->count_++;
	};

	std::string getName();
	void printAsHumanReadable(std::ostream& output);
};
