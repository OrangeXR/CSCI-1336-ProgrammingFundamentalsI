//Luis Morales
//Example Program 3-5 p94
//June 11, 2020

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.14159;
	double area, radius;
	
	cout << "Enter radius of circle: ";
	cin >> radius;
	
	area = PI * pow(radius, 2.0);
	
	cout << "The area of the circle with a radius of " << radius << " is " << area << ".";
	
	system ("PAUSE");
	return 0;
}
