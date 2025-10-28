// Luis Morales
// Assignment 9
// June 26, 2020

/*
Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. 
It should then display the item’s retail price. For example:

- If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the item’s 
  retail price is 10.00.
- If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s
  retail price is 7.50.

The program should have a function named calculateRetail that receives the wholesale cost and 
the markup percentage as arguments and returns the retail price of the item.

Input Validation: Do not accept negative values for either the wholesale cost of the item or 
the markup percentage.

Extra Credit (+1): If I enter a negative number, do not kill your program, but ask for another 
input.  Hint, look at the do while statement for your input.

*/

#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);
double inputValidate(double);

int main()
{
    double wholesaleCost, markupPercent, retailPrice;

    cout << "Enter wholesale cost: ";
    wholesaleCost = inputValidate(wholesaleCost);

    cout << "Enter it's markup percentage: ";
    markupPercent = inputValidate(markupPercent) * .01;

    retailPrice = calculateRetail(wholesaleCost, markupPercent);

    cout << "\nMarkup percentage = " 
         << (markupPercent / .01) << "%"
         << endl;

    cout << setprecision(2) << fixed
    
         << "Wholesale cost = $" 
         << wholesaleCost
         << endl

         << "Retail price = $" 
         << retailPrice 
         << endl;
    
    return 0;
}

double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}

double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0))
    {
        cout << "Invalid entry, please enter an integer greater than 0: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
