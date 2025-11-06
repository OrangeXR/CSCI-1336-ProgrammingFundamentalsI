//Luis Morales
//Example Program 3-10 p97
//June 11, 2020

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double PI = 3.14159;
	double volume, radius, height;
	
	//radius of tank
	cout << "What is the radius of the tank? ";
	cin >> radius;
	//height of tank
	cout << "what is the height of the tank? ";
	cin >> height;
	
	volume = PI * pow(radius, 2.0) * height;
	
	cout << "The volume of the tank is " << volume << ".";
	system ("PAUSE");
	return 0;
}
