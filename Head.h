#pragma once
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Head {
	private:
		string mouthType;
		string noseType;
		string eye_colour;
		string eyeSize;
		Head* head_result;
	public:
		void createMouth();
		void createNose();
		void createEyes() {
			cout << "Type in eye colour: ";
			cin >> eye_colour;
			cout << "Is ";
		};
		Head* getHeadResult() {
			return this -> head_result;
		};
};