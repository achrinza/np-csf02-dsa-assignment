#include "pch.h"
#include "Cluster.h"
#include "Driver.h"
#include "DriverNode.h"
#include <cmath>

bool Cluster::addDriver(Driver d, Location dloc) {
	if (this->start_.getCoordinate()[0] > dloc.getCoordinate()[0]
		&& dloc.getCoordinate()[0] > this->end_.getCoordinate()[0]
		) return false;

	if (start_.getCoordinate()[1] <= dloc.getCoordinate()[1]
		&& dloc.getCoordinate()[1] <= this->end_.getCoordinate()[1]
		) return false;

	DriverNode* newDriver = new DriverNode { d, dloc, nullptr };

	if (this->drivers_ == nullptr)
		this->drivers_ = newDriver;
	else {
		auto travel = drivers_;
		while (travel->next_ != nullptr && dloc.getSum() >= travel->next_->coordinate_.getSum())
			travel = travel->next_;
		newDriver->next_ = travel->next_;
		travel->next_ = newDriver;
	}

	this->size_++;
	return true;
}
void Cluster::rmDriver(std::string dname) {
	auto targetDriverPrevious = this->drivers_;

	while (targetDriverPrevious->next_->item_.getFullName() != dname) {
		targetDriverPrevious = targetDriverPrevious->next_;
		if (targetDriverPrevious->next_ == nullptr) return;
	}

	auto targetDriver = targetDriverPrevious->next_;
	targetDriverPrevious->next_ = targetDriver->next_;
	delete targetDriver;
}
DriverNode* Cluster::getDrivers(Location rloc) {
	auto workingDriverNode = drivers_;
	DriverNode* driverset = new DriverNode{ workingDriverNode->item_, workingDriverNode->coordinate_, nullptr };

	while (workingDriverNode != nullptr) {
		workingDriverNode = workingDriverNode->next_;
		if (abs(current->coordinate_.getSum() - rloc.getSum()) > abs(workingDriverNode->coordinate_.getSum() - rloc.getSum())) {
			DriverNode current{
				workingDriverNode->item_,
				workingDriverNode->coordinate_,
				driverset
			};
			driverset = *current;

		}
		else {
			current = driverset;
			while (current->next_ != NULL && abs(current->next_->coordinate_.getSum() - rloc.getSum()) < abs(workingDriverNode->coordinate_.getSum() - rloc.getSum()))
				current = current->next_;
			DriverNode* holder = new DriverNode;
			holder->coordinate_ = workingDriverNode->coordinate_;
			holder->item_ = workingDriverNode->item_;
			holder->next_ = current->next_;
			current->next_ = holder;
		}
	}
	return driverset;
}
