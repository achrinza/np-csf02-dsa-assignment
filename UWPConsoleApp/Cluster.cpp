#include "pch.h"
#include "Cluster.h"
#include "Driver.h"
#include "DriverNode.h"

Cluster::Cluster() {}
Cluster::Cluster(location start, location end) {
	Start = start;
	End = end;
	Drivers = NULL;
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
				return true;
			}
			else {
				DriverNode* travel = new DriverNode;
				travel = Drivers;
				while (travel->next != NULL && (dloc.getcoor()[0] + dloc.getcoor()[1]) >= (travel->next->dloc.getcoor()[0] + travel->dloc.getcoor()[1]))
					travel = travel->next;
				temp->next = travel->next;
				travel->next = temp;
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
		}
	}
}
DriverNode* Cluster::getDrivers(int n) {
	DriverNode* driverset = new DriverNode;
	driverset = Drivers;
	for (int i = 0; i < n; i++)
		driverset = driverset->next;
	return driverset;
}
