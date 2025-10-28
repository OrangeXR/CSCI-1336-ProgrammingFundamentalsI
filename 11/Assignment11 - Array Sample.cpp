// Luis Morales
// Assignment 11
// June 26, 2020

/*
	Largest/Smallest Array Values
	
	Write a program that lets the user enter 10 values into an array.  The program should then display the largest and smallest values 
	stored in the array.  
	- You will loop once to read in the numbers.  
	- Then another loop to find the smallest and largest number in the array and 
	- Display/print the largest and smallest numbers to the screen.
*/

#include <iostream>
using namespace std;


int main()
{
	const int values = 10;
	int userValues[values];
	
	
	// ask for 10 values
	cout << "Enter " << values  << "random numbers and the program will determine the largest and smallest number.\n"
		 << "Numbers: ";
	cin >> userValues[0];
	cin >> userValues[1];
	cin >> userValues[2];
	cin >> userValues[3];
	cin >> userValues[4];
	cin >> userValues[5];
	cin >> userValues[6];
	cin >> userValues[7];
	cin >> userValues[8];
	cin >> userValues[9];
	
	cout << "The numbers you entered are: ";
	cout << " " << userValues[0];
	cout << " " << userValues[1];
	cout << " " << userValues[2];
	cout << " " << userValues[3];
	cout << " " << userValues[4];
	cout << " " << userValues[5];
	cout << " " << userValues[6];
	cout << " " << userValues[7];
	cout << " " << userValues[8];
	cout << " " << userValues[9] << endl;
	
	
	
    return 0;
}




