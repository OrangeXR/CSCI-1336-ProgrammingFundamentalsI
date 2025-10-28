// Luis Morales
// Assignment 6 - Software Sales
// June 18, 2020


/*
	Write a program that asks for the number 
	of units sold and computes the total cost 
	of the purchase.

	Input Validation: Make sure the number of units is greater that 0.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double retail = 99.00, discount, discount0 = 0, discount1 = .20, discount2 = .30, discount3 = .40, discount4 = .50, cost;
	int units, number;
	int discAmn;
	char answer;	
	
	do
		{
			// Ask user to enter units
			cout << "\nHow many units are being sold? ";
			while(!(cin >> units))
			{
				cout << "Error: enter a number: ";
				cin.clear();
				cin.ignore(10, '\n');
			}

			// If 0 or less, display invalid number message and ask for number of units
			if (units <= 0)
				{
					cout << "Invalid number of units. Please enter units: ";
					cin >> units;
				}
			// If less than 10 units determine the discount ammount
			else if (units < 10)
				{
					discount = discount0;
				}
			// If between 10 and 19 units determine the discount ammount
			else if (units >= 10 && units <= 19)
				{
					discount = discount1;
				}
			// If between 20 and 49 units determine the discount ammount
			else if (units >= 20 && units <=49)
				{
					discount = discount2;
				}
			// If between 50 and 99 units determine the discount ammount
			else if (units >= 50 && units <=99)
				{
					discount = discount3;
				}
			// If 100 or more units determine the discount ammount
			else if (units >= 100)
				{
					discount = discount4;
				}
			
			// Convert decimal to percentage		
			discAmn = discount * 100;
			// Determine cost with applicable discount
			cost = (units * (retail - (discount * retail)));

			// Display units ordered 
		 	cout << fixed << showpoint << setprecision(2) << "\nQuantity Ordered: " << units << "\n";
			// Display discount amount
		 	cout << "Percent Discount for this Quantity: "<< discAmn << "%\n";
			// Display price before discount
		 	cout << fixed << showpoint << setprecision(2) << "Price before Discount: $" << units * retail<< "\n";
			// Display price after discount
		 	cout << fixed << showpoint << setprecision(2) << "Price after Discount: $" << cost << "\n\n";


			// Ask user if they would like to enter a new quantity
		 	cout << "Do you wish to enter a new quantity? \nEnter 'Y' for Yes or 'N' for No: ";
		 	cin >> answer;
		 	
		}	
	while (answer == 'Y' || answer == 'y');
		
			 		 
	system("PAUSE");
	return 0;
}
