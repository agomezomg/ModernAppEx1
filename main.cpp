#include <iostream>
#include "Calculator.h"
#include "Shape.h"
#define TAB	"\t\t"

using namespace std;

int main() {
	int choice = 0;
	Calculator* singleton_ex;
	do {
		cout << "----------MENU---------" << endl;
		cout << "1. Calculator (singleton)" << endl;
		cout << "2. TBD (Factory)" << endl;
		cout << "3. TBD (TBD)" << endl;
		cout << "Type 0 and Enter to exit." << endl;
		cout << "Input your choice [numbers only]: ";
		cin >> choice;
		
		/*
			Choice 1 is Singleton example. I opted for a calculator. Yeet.
		*/
		if(choice == 1) {
			cout << "singleton example.\n*Creating calculator...*" << endl;

			if (!singleton_ex) {
				singleton_ex = singleton_ex -> getInstance();
			}

			int singleton_menu_choice;
			do {
				cout << "\t----------SINGLETON D.P.---------" << endl;
				cout << "\t1. Add." << endl;
				cout << "\t2. Subtract." << endl;
				cout << "\t3. Multiply." << endl;
				cout << "\t4. Divide." << endl;
				cout << "\t5. Elevate to a power (recursively)." << endl;
				cout << "\t6. Square a value." << endl;
				cout << "\tType 0 and Enter to exit." << endl;
				cout << "\tInput your choice [numbers only]: ";
				cin >> singleton_menu_choice;
				double l_val, r_val;
				if (singleton_menu_choice == 1) {
					cout << TAB;
					cout << "Input left operand: ";
					cin >> l_val;
					cout << "\t\tInput right operand: ";
					cin >> r_val;
					cout << TAB;
					cout << l_val << " + " << r_val << " = " << (singleton_ex -> add(l_val, r_val)) << endl;
				} else if (singleton_menu_choice == 2) {
					cout << TAB;
					cout << "Input left operand: ";
					cin >> l_val;
					cout << "\t\tInput right operand: ";
					cin >> r_val;
					cout << TAB;
					cout << l_val << " - " << r_val << " = " << (singleton_ex -> sub(l_val, r_val)) << endl;
				} else if (singleton_menu_choice == 3) {
					cout << TAB;
					cout << "Input left operand: ";
					cin >> l_val;
					cout << "\t\tInput right operand: ";
					cin >> r_val;
					cout << TAB;
					cout << l_val << " * " << r_val << " = " << (singleton_ex -> mult(l_val, r_val)) << endl;
				} else if (singleton_menu_choice == 4) {
					cout << TAB;
					cout << "Input dividend: ";
					cin >> l_val;
					cout << "\t\tInput divisor: ";
					cin >> r_val;
					cout << TAB;
					cout << l_val << " / " << r_val << " = " << (singleton_ex -> div(l_val, r_val)) << endl;
				} else if (singleton_menu_choice == 5) {
					cout << TAB;
					cout << "Input base: ";
					cin >> l_val;
					cout << "\t\tInput exponent: ";
					cin >> r_val;
					cout << TAB;
					cout << l_val << "^" << r_val << " = " << (singleton_ex -> pow(l_val, l_val, r_val)) << endl;
				} else if (singleton_menu_choice == 6) {
					cout << TAB;
					cout << "Input base: ";
            		cin >> l_val;
					cout << TAB;
                    cout << "2^ " << l_val << " = " << (singleton_ex -> sq(l_val)) << endl;
				} else if (singleton_menu_choice != 0) {
					cout << TAB;
					cout << "That's still not a valid input, try again or input 0 to exit." << endl;
				}
			} while (singleton_menu_choice != 0);
		/*
			End of Singleton TODO code.
		*/
		} else if (choice == 2) {
			/*
				Choice 2 is Factory example. I opted for a shape maker. Yeet.
			*/
			int fact_menu_choice = 0;
			do {
				cout << TAB << "----------FACTORY D.P.---------" << endl;
				cout << TAB << "1. Circle" << endl;
				cout << TAB << "2. Square" << endl;
				cout << TAB << "3. Triangle" << endl;
				cout << TAB << "Type 0 and Enter to exit." << endl;
				cout << TAB << "State thine choice: ";
				cin >> fact_menu_choice;
				ShapeType type;
				if(fact_menu_choice==1) {
					type = Circle_type;
				} else if(fact_menu_choice==2) {
					type = Square_type;
				} else if(fact_menu_choice==3) {
					type = Triangle_type;
				} else if (fact_menu_choice!=0) {
					cout << TAB << "Returning to main menu...psych! Type 0 and Enter for that." << endl;
				}

				if (fact_menu_choice > 0 && fact_menu_choice < 4) {
					Shape* shape = shape -> Create(type);
					int fact_action_choice = 0;
					do {
						cout << TAB << "\t----------ACTIONS----------" << endl;
						cout << TAB << "\t1. Calculate an area." << endl;
						cout << TAB << "\t2. Print shape." << endl;
						cout << TAB << "\tType 0 and Enter to exit." << endl;
						cout << TAB << "\tState thine choice: ";
						cin >> fact_action_choice;
						if (fact_action_choice == 1) {
							cout << TAB << TAB << shape -> calcArea();
						} else if (fact_action_choice == 2) {
							cout << TAB << TAB << shape -> toString();
						} else if (fact_action_choice != 0) {
							cout << TAB << TAB <<
								"Adding all these validations can't possibly be efficient. Or user-friendly. Soz." << endl;
						}
					} while (fact_action_choice != 0);
				}
			} while (fact_menu_choice != 0);

		} else if (choice == 3) {
			cout << "Can't use this choice yet." << endl;
		} else if (choice != 0){
			cout << "Well that's not a valid input, try again." << endl;
		}
	} while (choice != 0);
	cout << "Au revoir!" << endl;
	return 0;
}
