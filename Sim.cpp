#include "Sim.h"

void Sim::setTransFlag(bool transFlag) {
	this -> transFlag = transFlag;
}

void Sim::setGender(string gender) {
	this -> gender = gender;
}

void Sim::setFirstName(string first_name) {
	this -> first_name = first_name;
};

void Sim::setLastName(string last_name) {
	this -> last_name = last_name;
}

bool Sim::addTrait(string trait) {
	if(this -> traits.size() <= 6) {
		this -> traits.push_back(trait);
		return true;
	}
	return false;
}

void Sim::setSimType(string simType) {
	this -> simType = simType;
}

string Sim::toString() {
	string retval = "";
	retval += "Sim is a " + this -> simType + " sim.\n";
	retval += "Sim's name is " + first_name + " " + last_name + ".\n";
	retval += "Sim is " + gender + ".\n";
	if (transFlag) {
		retval += "Sim is transgender.\n";
	} else {
		retval += "Sim is cisgender.\n";
	}
	retval += "Sim's personality traits are: \n";
	for (int i = 0; i < traits.size(); i++) {
		retval += "- " + traits.at(i) + ".\n";
	}
	return retval;
}