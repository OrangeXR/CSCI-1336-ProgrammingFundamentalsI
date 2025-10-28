//Luis Morales
//Example Program 3-4 p.89
//June 11, 2020

//This programasks the user to enter the numerator
//and denominator of a fraction and it diplays the
//decimal value

#include <iostream>
using namespace std;

int main()
{
	double numerator, denominator;
	
	cout << "This program shows the decimal value of ";
	cout << "a fraction.\n";
	cout <<"Enter the numerator: ";
	cin >> numerator;
	cout << "Enter the denominator: ";
	cin >> denominator;
	cout << "The decimal value is ";
	cout << (numerator / denominator) << endl;
	
	system ("PAUSE");
	
	return 0;
	
	
}
