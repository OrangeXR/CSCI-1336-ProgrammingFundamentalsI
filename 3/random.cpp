//Luis Morales
//Example Program 313 p104
//June 11, 2020

//This program can be used to see how your system handles
//floating point overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
	int unus, duo, tres;

	unus = duo = tres = 5;
	unus += 4;
	duo *= 2;
	tres -= 4;
	unus /=3;
	duo +=tres;
	cout << unus << endl;
	cout << duo << endl;
	cout << tres << endl;
	
	return 0;
}
