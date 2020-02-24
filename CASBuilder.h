#pragma once
#include "Sim.h"
#include <iostream>

using std::cin;
using std::cout;
using std::string;
using std::endl;

class CASBuilder {
	public:
		~CASBuilder();
		void CreateASim() { this -> new_Sim = new Sim(); };
		void pickNames();
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