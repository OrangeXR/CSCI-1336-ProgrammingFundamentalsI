//Luis Morales
//Assignment #2
//June 9, 2020

#include <iostream> 
#include <string>
using namespace std;

int main()
{
	string name, address, city, state, zip, phone, major;
	
	name = "Luis Morales";
	address = "120 Holly St.";
	city = "San Antonio";
	state = "TX";
	zip = "78207";
	phone = "(210) 727-7211";
	major = "Veterinary Technology";
	
	cout << name << "\n" << address << "\n" << city << ", " << state << " " << zip << "\n" << phone << "\n"<< major <<endl;
	
	system("PAUSE");
	return 0;
}
