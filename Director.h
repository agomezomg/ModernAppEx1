#include "FairySimBuilder.h"
#include "BasicSimBuilder.h"
#include "VampireSimBuilder.h"
#include "CASBuilder.h"
#include "Sim.h"

class Director {
	private:
		FairySimBuilder* fairysimbuilder;
		BasicSimBuilder* basicsimbuilder;
		VampireSimBuilder* vampiresimbuilder;
	public:
		Sim* getVampireSim();
		Sim* getBasicSim();
		Sim* getFairySim();
};