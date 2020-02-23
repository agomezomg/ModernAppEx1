#pragma once
#include <iostream>

class Calculator {
	private:
		Calculator();
		Calculator* instance;
	public:
		~Calculator();
		void nullInstance();
		Calculator* getInstance();
		double add(double,double);
		double sub(double,double);
		double mult(double,double);
		double div(double,double);
		double pow(double,double,double);
		double sq(double);
};	
