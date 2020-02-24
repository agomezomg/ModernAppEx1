#include "BasicSimBuilder.h"

void BasicSimBuilder::setSimType() {
	this -> new_Sim -> setSimType("basic");
}

void BasicSimBuilder::setTraits() {
	string vt_menu = "";
	vt_menu += "----------Vampire Traits----------\n";
	vt_menu += "1. Childish. \n";
	vt_menu += "2. Bookworm.\n";
	vt_menu += "3. Flirty.\n";
	vt_menu += "4. Genius.\n";
	vt_menu += "5. Good.\n";
	vt_menu += "6. Evil.\n";
	vt_menu += "7. Shy.\n";
	vt_menu += "8. Virtuoso.\n";
	vt_menu += "9. Jealous.\n";
	vt_menu += "10. Non-commital.\n";
	vt_menu += "11. Hopeless Romantic.\n";
	vt_menu += "12. Ambitious.\n";
char CONTINUE = ' ';
	int trait_pick;
	string trait;
	do {
		cout << vt_menu;
		cout << "Input trait number: " << endl;
		cin >> trait_pick;
		switch (trait_pick) {
			case 1 : {
				trait = "Childish";
				break;
			}
			case 2 : {
				trait = "Bookworm";
				break;
			}
			case 3 : {
				trait = "Flirty";
				break;
			}
			case 4 : {
				trait = "Genius";
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
				trait = "Shy";
				break;
			}
			case 8 : {
				trait = "Virtuoso";
				break;
			}
			case 9 : {
				trait = "Jealous";
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
				trait = "Ambitious";
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