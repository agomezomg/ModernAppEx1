#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Body {
	private:
		string bodyDimension;
		int tattoo_count;
		string bodyType;
		Body* body_result;
	public:
		void setBodyDimension();
		void setTattooCount();
		void setBodyType();
		Body* getBodyResult();	
};