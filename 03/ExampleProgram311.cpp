//Luis Morales
//Example Program 311 p104
//June 11, 2020

//This program can be used to see how your system handles
//floating point overflow and underflow.
#include <iostream>
using namespace std;

int main()
{
	char letter;
	
	cout << "Enter a letter: ";
	cin >> letter;

	
	cout << "The ASCII value for " << letter << " is " << static_cast<int>(letter); 
	// Finish this program
	// as specified above.
	return 0;
}
