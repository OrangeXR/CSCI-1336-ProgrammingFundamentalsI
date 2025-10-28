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
	const int values = 10;      // Number of numbers wanted
	int userValues[values];     // User created number
	int count;					// Counter
	
	// ask for 10 values
	for (count = 0; count < values; count++)
		{
			cout << "Enter " << values  << " numbers and the program will determine the largest and smallest number.\n"
		 	  	 << (count + 1)<< ": ";
		 	cin >> userValues[count];
			cout << endl;




int highest;

highest = values[0];
	for (count = 1; count < values; count++)
		{
			if (values[count] > highest)
				highest = values[count];
		}
		
 cout << highest;








		}
	// Display user provided info	 		
//	cout << "The numbers you entered are: ";
//	for (count = 0; count < values; count++)
//		cout << " " << userValues[count];
//		cout << endl;

//---------------------------------------------	

int count;
int highest;

highest = values[0];
	for (count = 1; count < values; count++)
		{
			if (values[count] > highest)
				highest = values[count];
		}
		
 cout << highest;
//---------------------------------------------
	
	
    return 0;
}

