//Luis Morales
//Assignment 3
//June 11, 2020

//PROGRAMMING CHALLENGES
//Write a program that calculates a car's gas mileage.  The program should ask the user
//to enter the number of gallons of gas the car can hold and the number of mils it can 
//be driven on a full tank.  It should then diplay the number of miles that may be driven
//per gallon of gas.


#include <iostream>
using namespace std;

int main()
{
	double gallons, miles, mpg;
	
	cout<< "How many gallons of fuel fit in the car's fuel tank? ";
	cin >> gallons;
	cout << "How many miles can the car go on a full tank? ";
	cin >> miles;
	mpg = miles / gallons;
	
	cout <<"\n" << mpg << " miles can be driven per gallon of gas.\n\n";
	system("PAUSE");
	return 0;
}
