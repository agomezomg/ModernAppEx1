#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
	int choice = 0;
	do {
		cout << "----------MENU---------" << endl;
		cout << "1. Calculator (Simpleton)" << endl;
		cout << "2. TBD (Factory)" << endl;
		cout << "3. TBD (TBD)" << endl;
		cout << "Type 0 and Enter to exit." << endl;
		cout << "Input your choice [numbers only]: ";
		cin >> choice;
		
		if(choice == 1) {
			cout << "Simpleton example.\n*Creating calculator...*" << endl;
			Calculator* simpleton_ex;
			simpleton_ex = simpleton_ex -> getInstance();
			int simpleton_menu_choice;
			do {
				cout << "\t----------MENU---------" << endl;
                		cout << "\t1. Add." << endl;
	        	        cout << "\t2. Subtract." << endl;
		                cout << "\t3. Multiply." << endl;
				cout << "\t4. Divide." << endl;
				cout << "\t5. Elevate to a power (recursively)." << endl;
				cout << "\t6. Square a value." << endl;
                		cout << "\tType 0 and Enter to exit." << endl;
        	        	cout << "\tInput your choice [numbers only]: ";
		                cin >> simpleton_menu_choice;
				double l_val, r_val;
				cout << "\t\t";
				if (simpleton_menu_choice == 1) {
					cout << "Input left operand: ";
					cin >> l_val;
					cout << "\t\tInput right operand: ";
					cin >> r_val;
					cout << "\t\t";
					cout << l_val << " + " << r_val << " = " << (simpleton_ex -> add(l_val, r_val)) << endl;
				} else if (simpleton_menu_choice == 2) {
					cout << "Input left operand: ";
                                        cin >> l_val;
                                        cout << "\t\tInput right operand: ";
                                        cin >> r_val;
					cout << "\t\t";
					cout << l_val << " - " << r_val << " = " << (simpleton_ex -> sub(l_val, r_val)) << endl;
				} else if (simpleton_menu_choice == 3) {
					cout << "Input left operand: ";
					cin >> l_val;
					cout << "\t\tInput right operand: ";
					cin >> r_val;
					cout << "\t\t";
					cout << l_val << " * " << r_val << " = " << (simpleton_ex -> mult(l_val, r_val)) << endl;
				} else if (simpleton_menu_choice == 4) {
					cout << "Input dividend: ";
					cin >> l_val;
					cout << "\t\tInput divisor: ";
					cin >> r_val;
					cout << "\t\t";
					cout << l_val << " / " << r_val << " = " << (simpleton_ex -> div(l_val, r_val)) << endl;
				} else if (simpleton_menu_choice == 5) {
					cout << "Input base: ";
					cin >> l_val;
					cout << "\t\tInput exponent: ";
					cin >> r_val;
					cout << "\t\t";
					cout << l_val << "^" << r_val << " = " << (simpleton_ex -> pow(l_val, l_val, r_val)) << endl;
				} else if (simpleton_menu_choice == 6) {
					cout << "Input base: ";
                                        cin >> l_val;
					cout << "\t\t";
                                        cout << "2^ " << l_val << " = " << (simpleton_ex -> sq(l_val)) << endl;
				} else if (simpleton_menu_choice != 0) {
					cout << "That's still not a valid input, try again or input 0 to exit." << endl;
				}
			} while (simpleton_menu_choice != 0);
			if(simpleton_ex) {
				delete simpleton_ex;
			}
		} else if (choice == 2) {

		} else if (choice == 3) {

		} else if (choice != 0){
			cout << "Well that's not a valid input, try again." << endl;
		}
	} while (choice != 0);
	cout << "Au revoir!" << endl;
	return 0;
}
