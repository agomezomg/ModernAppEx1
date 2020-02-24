#pragma once
#include "Sim.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

class CASBuilder {
	public:
		CASBuilder();
		~CASBuilder();
		void pickNames();
		void setGenderPreference();
		virtual void setSimType() = 0;
		virtual void setTraits() = 0;
		Sim* getResultSim() {
			return this -> new_Sim;
		};
	protected:
    	Sim* new_Sim;
};