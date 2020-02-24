#include "Director.h"

Sim* Director::getBasicSim() {
	this -> basicsimbuilder = new BasicSimBuilder();
	basicsimbuilder -> pickNames();
	basicsimbuilder -> setSimType();
	basicsimbuilder -> setGenderPreference();
	basicsimbuilder -> setTraits();
	return basicsimbuilder -> getResultSim();
}

Sim* Director::getFairySim() {
	this -> fairysimbuilder = new FairySimBuilder();
	fairysimbuilder -> pickNames();
	fairysimbuilder -> setSimType();
	fairysimbuilder -> setGenderPreference();
	fairysimbuilder -> setTraits();
	return fairysimbuilder -> getResultSim();
}

Sim* Director::getVampireSim() {
	this -> vampiresimbuilder = new VampireSimBuilder();
	vampiresimbuilder -> pickNames();
	vampiresimbuilder -> setSimType();
	vampiresimbuilder -> setGenderPreference();
	vampiresimbuilder -> setTraits();
	return vampiresimbuilder -> getResultSim();
}