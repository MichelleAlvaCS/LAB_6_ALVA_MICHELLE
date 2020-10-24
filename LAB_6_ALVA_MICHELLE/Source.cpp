// MICHELLE ALVA LAB 6

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {

	int userChoice;
	enum menuChoice {acceptDelivery = 1, placeOrder, printInventory, printOrders, quit};

	do {

		try {

			cout << "\nPlease choose from the following menu:\n"
				"1. Accept Delivery\n"
				"2. Place Order\n"
				"3. Print Inventory\n"
				"4. Print outstanding orders\n"
				"5. Quit\n" << endl;

			cin >> userChoice;

			switch (userChoice) {
			case acceptDelivery:
				break;
			case placeOrder:
				break;
			case printInventory: 
				break;
			case printOrders: 
				break;
			case quit: 
				break;
			default: 
			}

		}

	} while (userChoice != 5);


	system("pause");
	return 0;
}