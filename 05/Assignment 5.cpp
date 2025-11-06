// Luis Morales
// Assignment 5
// June 15, 2020

/*
	Write a program that asks the user to enter two numbers.  The program should use the
	conditional operator to determine which number is the smaller and which is the larger.
*/
#include <iostream>
using namespace std;

int main()
{
	double num1,num2, fin;
	
	cout << "This program will compare two numbers and determine if they are larger, smaller, or equal to each other.\n\n";
	// Ask user to enter first number
	cout << "Enter a number: ";
	cin >> num1;
	// Ask user to enter second number
	cout << "Enter a second number: ";
	cin >> num2;
	
	// Determine larger/smaller number and display results (going by the Assignment 5 example)
	cout << "\n"<< num1 << (num1 > num2 ? " is larger than " : " is smaller than ") << num2 << ".\n"
	     << num2 << (num2 > num1 ? " is larger than " : " is smaller than ") << num1 << ".\n"
		 << num1 << (num1 == num2 ? " is equal to " : " is not equal to ") << num2 << ".\n\n";

	
	// Determine larger/smaller number and display results (going by the book examples)
	if (num1 > num2)
		cout << num1 << " is larger than " << num2 << "\n\n";
	else if (num1 < num2) 
		cout << num1 << " is smaller than " << num2 << "\n\n";
	else if (num1 == num2)
		cout << num1 << " is equal to " << num2 << "\n\n";	
		
 	system("PAUSE");
	return 0;
}
