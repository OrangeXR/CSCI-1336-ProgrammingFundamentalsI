//Luis Morales
//Example Program 3-5 p90
//June 11, 2020

#include <iostream>
using namespace std;

int main()
{
	double number, numerator, denominator, total;
	
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter numerator: ";
	cin >> numerator;
	cout << "Enter denominator: ";
	cin >> denominator;
	
	total = number + (numerator / denominator);
	
	cout << number << " + " << numerator << " / " << denominator << " = " <<total << endl;
	
	system("PAUSE");
	return 0; 
}
