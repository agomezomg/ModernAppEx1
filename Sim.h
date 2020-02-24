#pragma once
#include <iostream>
#include <vector>

using std::vector;
using std::string;

class Sim {
	protected:
        string first_name;
        string last_name;
		string gender;
        bool transFlag;
		vector<string> traits;
	public:
		
		void setTransFlag(bool transFlag) {
			this -> transFlag = transFlag;
		}
		
		void setGender(string gender) {
			this -> gender = gender;
		}
		
		void setFirstName(string first_name) {
			this -> first_name = first_name;
		};
		
		void setLastName(string last_name) {
			this -> last_name = last_name;
		}
		
		void addTrait(string trait) {
			if(traits.size() < 6) {
				traits.push_back(trait);
			}
		}

		virtual string toString() {
			string retval = "";
			retval += "Sim's name: " + first_name + " " + last_name + ".\n";
			retval += "Sim is " + gender + ".\n";
			if (transFlag) {
				retval += "Sim is transgender.\n";
			}
			retval += "Sim's personality traits are: \n";
			if (traits.empty()) {
				return retval;
			}
			for (int i = 0; i < traits.size(); i++) {
				retval += (i+1)+ ". " + traits.at(i) + ".\n";
			}
			return retval;
		};
};