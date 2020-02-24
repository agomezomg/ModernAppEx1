#pragma once
#include "Sim.h"
#include <iostream>

class CASBuilder {
	public:
		void setNames();
		void setGenderPreference();
		virtual void setTraits() = 0;
		virtual void createFace() = 0;
		virtual void buildBody() = 0;
		virtual void configurePathway(char*) = 0;
		Sim* getResultSim() {
			return this -> new_Sim;
		};
	protected:
    	Sim* new_Sim;
};