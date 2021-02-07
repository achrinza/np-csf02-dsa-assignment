#include "pch.h"
#include "Rider.h"

std::string Rider::getName() { return this->name_; }

void Rider::printAsHumanReadable(std::ostream& output) {
    output << "[Rider]" << std::endl;
    output << "ID   = " << this->id_ << std::endl;
    output << "Name = " << this->name_ << std::endl;
}
