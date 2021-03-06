#include "VampireSimBuilder.h"

void VampireSimBuilder::setSimType() {
	this -> new_Sim -> setSimType("vampire");
}

void VampireSimBuilder::setTraits() {
	string vt_menu = "";
	vt_menu += "----------Vampire Traits----------\n";
	vt_menu += "1. Vegetarian. \n";
	vt_menu += "2. Moves as bat.\n";
	vt_menu += "3. Proper.\n";
	vt_menu += "4. Sun-proof.\n";
	vt_menu += "5. Good.\n";
	vt_menu += "6. Evil.\n";
	vt_menu += "7. Loner.\n";
	vt_menu += "8. Brooding.\n";
	vt_menu += "9. Attractive.\n";
	vt_menu += "10. Non-commital.\n";
	vt_menu += "11. Hopeless Romantic.\n";
	vt_menu += "12. Telepathic.\n";
	char CONTINUE = ' ';
	int trait_pick;
	string trait;
	do {
		cout << vt_menu;
		cout << "Input trait number: " << endl;
		cin >> trait_pick;
		switch (trait_pick) {
			case 1 : {
				trait = "Vegetarian";
				break;
			}
			case 2 : {
				trait = "Moves as bat";
				break;
			}
			case 3 : {
				trait = "Proper";
				break;
			}
			case 4 : {
				trait = "Sun-proof";
				break;
			}
			case 5: {
				trait = "Good";
				break;
			}
			case 6 : {
				trait = "Evil";
				break;
			}
			case 7 : {
				trait = "Loner";
				break;
			}
			case 8 : {
				trait = "Brooding";
				break;
			}
			case 9 : {
				trait = "Attractive";
				break;
			}
			case 10 : {
				trait = "Non-commital";
				break;
			}
			case 11 : {
				trait = "Hopeless Romantic";
				break;
			}
			case 12 : {
				trait = "Telepathic";
				break;
			}
			default: {
				cout << "Must pick trait from list!" << endl;
				break;
			}
		}
		if (this -> new_Sim -> addTrait(trait)) {
			cout << "Added new trait successfully!" << endl;
		} else {
			cout << "Sorry, no more traits can be alloted to sim." << endl;
			break;
		}

		cout << "Add another trait? [Y/N] ";
		cin >> CONTINUE;
	} while (CONTINUE == 'Y' || CONTINUE == 'y');
}