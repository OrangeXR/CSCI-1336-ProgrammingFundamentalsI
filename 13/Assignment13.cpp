// Luis Morales
// Assignment 13
// July 4, 2020

/*
	Solve the following quadratic equation for variable x:
	ax^2 + bx + c = 0
	taking into consideration all possible solutions
*/

#include <iostream>
#include <cmath>

using namespace std;
double a, b, c, x1, x2;
double part1, part2, part3;
char x;

int main()
{
	cout << "===============================================================\n";
    cout << " This program will solve for 'x' in the following equations:\n";
    cout << "                      ax^2 + bx + c = 0                     \n";
    cout << "             using the coefficients you provide.            \n";
    cout << "===============================================================\n\n\n";

    // Ask for user input
    cout << "Please provide 3 coefficients: \n" << endl;
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;

    // Displas user input
	cout << endl << "===\n" << "Your quadratic equations is: \n"
		 << a << "x^2 + " << b << "x + " << c << " = 0" << endl << "===\n"<< endl;

	// Find the roots: (- b +/- sqareroot(b^2 - 4ac)) /2a
	// A in the denominator can not equal 0
	if (a==0)
		{
			cout << "Equation is undefined.\n";
			return 0;
	    }
	// Find first root: (- b + squareroot(b^2 - 4ac)) /2a
	part1= -b;
	part2= sqrt((b * b) - 4 * a * c);
	part3= 2 * a;
	x1 = (part1 + (part2))/part3;
	// Find second root: (- b - squareroot(b^2 - 4ac)) /2a
	x2 =  (part1 - (part2))/part3;

	// Display results
	cout << "The roots of your equation are: \n" << x1 << "   \n"  << x2 << "\n\n";
	
	system("PAUSE");
	return 0;
}
