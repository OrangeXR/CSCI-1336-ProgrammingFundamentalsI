// Luis Morales
// Assignment 4
// June 13, 2020

/*
	Test Average
	Write a program that asks for five test scores.  The program should calculate the average 
	test score and display it.  The number displayed should be formatted in fixed-point
	notation, with one decimal point of precision.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double test1, test2, test3, avg;
	
	// Ask for test 1 score
	cout << "What is the score for test 1: ";
	cin >> test1;
	// Ask for test 2 score
	cout << "What is the score for test 2: ";
	cin >> test2;
	// Ask for test 3 score
	cout << "What is the score for test 3: ";
	cin >> test3;
	// Calculate average for 3 tests
	avg = (test1 + test2 + test3) / 3;
	
	//Set precision to 1 decimal place and display results with fixed point notation
	cout << "\nThe average score for the 3 test is " 
		 << setprecision(1) << fixed << showpoint <<avg \
		 << ".\n\n";
	
	system("PAUSE");
	return 0;
}
