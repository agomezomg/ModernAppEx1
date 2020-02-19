#pragma once

class Calculator {
	private:
		Calculator();
	public:
		~Calculator();
		Calculator* getInstance();
		double add(double,double);
		double sub(double,double);
		double mult(double,double);
		double div(double,double);
		double pow(double,double,double);
		double sq(double);
};	
