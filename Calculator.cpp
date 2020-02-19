#include "Calculator.h"

Calculator::Calculator() {
}

Calculator::~Calculator() {
}

Calculator* Calculator::getInstance() {
	return new Calculator();
}

double Calculator::add(double l_val, double r_val) {
	return l_val + r_val;
}

double Calculator::sub(double l_val, double r_val) {
        return l_val - r_val;
}

double Calculator::mult(double l_val, double r_val) {
        return l_val * r_val;
}

double Calculator::div(double l_val, double r_val) {
        //where l_val is dividend, r_var is divisor
	return l_val / r_val;
}

double Calculator::pow(double base, double l_val, double r_val) {
	//where l_val is base and r_val is exponent
	if(r_val==1) {
	        return base;
	}
        return pow((base * l_val), l_val, (r_val - 1));
}

double Calculator::sq(double base_val) {
	return base_val * base_val;
}
