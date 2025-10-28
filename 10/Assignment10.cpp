// Luis Morales
// Assignment 10
// June 30, 2020

/*
-Overloaded Hospital, 
 page 371, Number 15

Write a program that computes and displays the charges for a patient's hospital stay. 
First, the program should ask if the patient was admitted as an in-patient or an 
out-patient. If the patient was an in-patient, the following data should be entered 
by the user:

 - The number of days spent in the hospital
 - The daily rate
 - Hospital medication charges
 - Charges for the hospital services (lab test, etc.)

The program should ask for the following if the patient was an out-patient:

 - Charges for the hospital services (lab tests, etc.)
 - Hospital medication charges

The program should/will use two overloaded functions (defined in this chapter!) to 
calculate the total charges. One of the functions should accept arguments for the 
in-patient data, while the other functions accepts arguments for the out-patient 
information. Both functions should return the total charges and of course you will 
print these to the screen.

Input Validation: Do not accept negative numbers for any data.
*/

#include <iostream>
#include <iomanip>

using namespace std;

char getPatientType();
double calculateTotal (double, double);
double calculateTotal (double, double, double, double);

int main()
{
	char patientType;
	double daysIn;
	double dayRate;
	double medCharge;
	double serCharge;
	double totalCharge;

	
	patientType = getPatientType();
	
	if (patientType == 'A')
		{
			cout << "\n\t============================\n";
			cout << "\tYou have selected In-Patient\n\t============================\n";
			// Functions should accept arguments for the in-patient data
			cout << "\nHow many days were spent in the hospital? " << endl;
			cin >> daysIn;
			// Validate
			while (daysIn < 0)
				{
					cout << "Enter a positive value for the amount of days spent in the hospital: ";
					cin >> daysIn;
				}
			cout << "What is the daily rate? " << endl;
			cout << "$";cin >> dayRate;
			while (dayRate < 0)
				{
					cout << "Enter a positive value for the hospital's daily Rate: ";
					cout << "$";cin >> dayRate;
				}	
			cout << "What is the charge for hospital medication? " << endl;
			cout << "$";cin >> medCharge;
			while (medCharge < 0)
				{
					cout << "Enter a positive value for the hospital medication: $";
					cin >> medCharge;
				}
			cout << "What is the charge for hospital service charges(lab tests, etc.)? " << endl;
			cout << "$";cin >> serCharge;
			while (serCharge < 0)
				{
					cout << "Enter a positive value for the hospital service charges: $";
					cin >> serCharge;
				}
			totalCharge = calculateTotal (daysIn, dayRate, medCharge, serCharge);
	
			cout << fixed << showpoint << setprecision(2) << "\n\nYour total charge is $" << totalCharge << ". \n\n";
		}
	else if (patientType == 'B')
		{
						cout << "\n\t=============================\n";
			cout << "\tYou have selected Out-Patient\n\t=============================\n";
			// Functions should accept arguments for the out-patient data
			cout << "\nWhat is the charge for hospital service charges(lab tests, etc.)? " << endl;
			cout << "$";cin >> serCharge;
			while (serCharge < 0)
				{
					cout << "Enter a positive value for the hospital service charges: $";
					cin >> serCharge;
				}
			cout << "What is the charge for hospital medication? " << endl;
			cout << "$";cin >> medCharge;
			while (medCharge < 0)
				{
					cout << "Enter a positive value for the hospital medication: $";
					cin >> medCharge;
				}
		
			totalCharge = calculateTotal (medCharge, serCharge);
	
			cout << fixed << showpoint << setprecision(2) << "\n\nYour total charge is $" << totalCharge << ". \n\n";
		}
	
 	system("PAUSE");
	return 0;
}


	char getPatientType()
		{
			char patientType;
			// First ask if patient is in-patient or out-patient
			cout << "Is the patient an in-patient or out-Patient? \n\nType 'A' for In-Patient \n"
			 "Type 'B' for Out-Patient\n\n Answer:"; 
	    	cin >> patientType;	

	    	while (!(patientType == 'A' || patientType == 'a' || patientType == 'B' || patientType == 'b'))
	    		{
				cout << "=======================\n";
				cout << " " << patientType << " is an invalid entry.\n=======================\nType 'A' for In-Patient \n"
			 "Type 'B' for Out-Patient.\n\n";
				cin.clear();
				cin.ignore(123, '\n');
				cin >> patientType;				
				}
			if (patientType == 'a')
	    		patientType = 'A';
	    	else if (patientType == 'b')
	    		patientType = 'B';
			return patientType;
		}

	double calculateTotal (double medCharge, double serCharge)
		{
			return medCharge + serCharge;
		}
		
	double calculateTotal (double daysIn, double dayRate, double medCharge, double serCharge)
		{
			return ((daysIn * dayRate) + medCharge + serCharge);
		}
