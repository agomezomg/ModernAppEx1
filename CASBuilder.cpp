#include "CASBuilder.h"

CASBuilder::~CASBuilder() {}

CASBuilder::CASBuilder() {
	this -> new_Sim = new Sim();
}

void CASBuilder::pickNames() {
	string first_name = "";
	string last_name = "";
	cout << "Input sim's first name: ";
	cin >> first_name;
	cout << "Input sim's last name: ";
	cin >> last_name;
	this -> new_Sim -> setFirstName(first_name);
	this -> new_Sim -> setLastName(last_name);
}

void CASBuilder::setGenderPreference() {
	int gen_choice = 0;
	string transgender_confirm = "";
	do {
		cout << "<---------GENDER---------->" << endl;
		cout << "1. Sim is female." << endl;
		cout << "2. Sim is male" << endl;
		cout << "3. Sim is non-binary." << endl;
		cout << "Input your gender choice: ";
		cin >> gen_choice;
		if (gen_choice==1) {
			this -> new_Sim -> setGender("female");
		} else if(gen_choice ==2) {
			this -> new_Sim -> setGender("male");
		} else if(gen_choice == 3) {
			this -> new_Sim -> setGender("non-binary");
		} else {
			cout << "You must choose a valid option." << endl;
		}
	} while (gen_choice > 3 || gen_choice < 1);


	do {
		cout << "Can Sim pee standing up? [Y/N]: ";
		cin >> transgender_confirm;
		cout << "CONFIRM = " << transgender_confirm << endl;
		if (transgender_confirm == "Y" || transgender_confirm == "y" || transgender_confirm == "N" || transgender_confirm == "n") {
			break;
		} else {
			cout << "Not a valid response." << endl;
		}
	} while (transgender_confirm != "Y" || transgender_confirm != "y" || transgender_confirm != "N" || transgender_confirm != "n");
	if (transgender_confirm == "Y" || transgender_confirm == "y") {
		if (gen_choice == 1) {
			this -> new_Sim -> setTransFlag(true);
			cout << "Setting transgender flag to true..." << endl;
		}
		this -> new_Sim -> setTransFlag(false);
		cout << "Setting transgender flag to false..." << endl;
	} else {
		if (gen_choice == 2) {
			this -> new_Sim -> setTransFlag(true);
			cout << "Setting transgender flag to true..." << endl;
		}
		this -> new_Sim -> setTransFlag(false);
		cout << "Setting transgender flag to false..." << endl;
	}
}