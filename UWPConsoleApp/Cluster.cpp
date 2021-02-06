#include "pch.h"
#include "Cluster.h"
#include "Driver.h"
#include "DriverNode.h"
#include <cmath>

Cluster::Cluster() {}
Cluster::Cluster(location start, location end) {
	Start = start;
	End = end;
	Drivers = NULL;
	size = 0;
}
bool Cluster::addDriver(Driver d, location dloc) {
	if (Start.getcoor()[0] <= dloc.getcoor()[0] && dloc.getcoor()[0] <= End.getcoor()[0]) {
		if (Start.getcoor()[1] <= dloc.getcoor()[1] && dloc.getcoor()[1] <= End.getcoor()[1]) {
			DriverNode* temp = new DriverNode;
			temp->item = d;
			temp->dloc = dloc;
			temp->next = NULL;
			if (Drivers == NULL) {
				Drivers = temp;
				size++;
				return true;
			}
			else {
				DriverNode* travel = new DriverNode;
				travel = Drivers;
				while (travel->next != NULL && dloc.getsum() >= travel->next->dloc.getsum())
					travel = travel->next;
				temp->next = travel->next;
				travel->next = temp;
				size++;
				return true;
			}
		}
		return false;
	}
	return false;
}
void Cluster::rmDriver(string dname) {
	DriverNode* temp = new DriverNode;
	temp = Drivers;
	if (temp->item.name() == dname) {
		Drivers = Drivers->next;
		delete temp;
		temp = NULL;
		size--;
	}
	else {
		temp = temp->next;
		DriverNode* del = new DriverNode;
		del = Drivers;
		while (temp != NULL && temp->item.name() != dname) {
			temp = temp->next;
			del = del->next;
		}
		if (temp != NULL) {
			del->next = temp->next;
			delete temp;
			temp = NULL;
			size--;
		}
	}
}
DriverNode* Cluster::getDrivers(location rloc) {
	DriverNode* driverset = new DriverNode;
	DriverNode* temp = new DriverNode;
	temp = Drivers;
	driverset->dloc = temp->dloc;
	driverset->item = temp->item;
	driverset->next = NULL;
	while (temp != NULL) {
		DriverNode* current = new DriverNode;
		temp = temp->next;
		if (abs(current->dloc.getsum() - rloc.getsum()) > abs(temp->dloc.getsum() - rloc.getsum())) {
			current->dloc = temp->dloc;
			current->item = temp->item;
			current->next = driverset;
			driverset = current;

		}
		else {
			current = driverset;
			while (current->next != NULL && abs(current->next->dloc.getsum() - rloc.getsum()) < abs(temp->dloc.getsum() - rloc.getsum()))
				current = current->next;
			DriverNode* holder = new DriverNode;
			holder->dloc = temp->dloc;
			holder->item = temp->item;
			holder->next = current->next;
			current->next = holder;
		}
	}
	return driverset;
}
