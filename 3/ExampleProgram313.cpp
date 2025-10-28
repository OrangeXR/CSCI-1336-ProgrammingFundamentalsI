//Luis Morales
//Example Program 313 p104
//June 11, 2020

//This program can be used to see how your system handles
//floating point overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
	int integer1, integer2;
	double result;
	integer1 = 19;
	integer2 = 2;
	
	result = integer1 / integer2;
	cout << result << endl;
	result = static_cast<double>(integer1) / integer2;
	cout << result << endl;
	result = static_cast<double>(integer1 / integer2);
	cout << result << endl;
	
	return 0;
}
