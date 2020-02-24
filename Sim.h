#pragma once
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

class Sim {
	private:
		string simType;
        string first_name;
        string last_name;
		string gender;
        bool transFlag;
		vector<string> traits;
	public:
		void setSimType(string simType);
		void setTransFlag(bool transFlag);
		void setGender(string gender);
		void setFirstName(string first_name);
		void setLastName(string last_name);
		bool addTrait(string trait);
		string toString();
};