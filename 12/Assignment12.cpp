// Luis Morales
// Assignment 12
// July 2, 2020

/*

Chip and Salsa

Write a program that lets a maker of chips and salsa keep track of the sales for five different types of salsa: mild, medium, sweet, hot, 
and zesty.  The program should/will use two parallel 5-element arrays: an array of strings that holds the five salsa names and an array of 
integers that holds the number of jars sold during the past month for each salsa type.  The salsa names should be stored using an initialization 
list at the time the name array is created.  The program should prompt the user to enter the number of jars sold for each type.  Once the 
sales data has been entered, the program should produce a report that displays sales for each salsa type, total sales, and the names of the
 highest selling and lowest selling products.

INPUT VALIDATION: Do not accept negative values for the number of jars sold.

*/

#include <iostream>
#include <iomanip>

using namespace std;

int inputValidate(int);
void getNumberSold(const string[], int[], const int);
int totalSales(const int[], const int);
string highSeller(const string[], const int[], const int);
string lowSeller(const string[], const int[], const int);

int main()
{
	cout 
		<< "=============================================\n"
		<< "This program gives a total of salsa jars sold\n"
		<< "and also determines highest/lowest seller.\n"
		<< "=============================================\n\n";
		
    const int salsaARRAYSize = 5;

    int jarsSold[salsaARRAYSize];
    string salsaTypes[] = {"mild", "medium", "sweet", "hot", "zesty"};

    getNumberSold(salsaTypes, jarsSold, salsaARRAYSize);

    cout << endl;
    cout << "-----Salsa Sales Report-----\n";
    
	for (int i = 0; i < salsaARRAYSize; i++)
    {
        cout << "Jars of " << salsaTypes[i] << " salsa sold = " << jarsSold[i] << endl;
    }
	
	cout << "-----------------------------\n";
    int totalJarsSold = totalSales(jarsSold, salsaARRAYSize);
    cout << "\nTotal salsa sales = " << totalJarsSold << " jars." << endl;

    string highest_selling = highSeller(salsaTypes, jarsSold, salsaARRAYSize);
    cout << "The highest selling salsa = " << highest_selling << endl;

    string lowest_selling = lowSeller(salsaTypes, jarsSold, salsaARRAYSize);
    cout << "The lowest selling salsa = " << lowest_selling << endl << endl;

    return 0;
} 
//validate user input
int inputValidate(int userInput)
{
    while (!(cin >> userInput) || userInput < 0)
    {
        cout << "==>Invalid entry please enter amount again: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return userInput;
}

// Get the salsa with the lowest number sales
string highSeller(const string ARRAY1[], const int ARRAY2[], int salsaARRAYSize)
{
    int highest = ARRAY2[0];
    string highestSalsa = ARRAY1[0];

    for (int i = 1; i < salsaARRAYSize; i++)
    {
        if (ARRAY2[i] > highest)
        {
            highest = ARRAY2[i];
            highestSalsa = ARRAY1[i];
            
        } 
        else if (ARRAY2[i] == highest)
        {
            highest = ARRAY2[i];
            highestSalsa += ", ";
            highestSalsa += ARRAY1[i];
            
        }
        
    }
    
    return highestSalsa;
}

// Get the salsa with the lowest number sales
string lowSeller(const string ARRAY1[], const int ARRAY2[], int salsaARRAYSize)
{
    int lowest = ARRAY2[0];
    string lowestSalsa = ARRAY1[0];

    for (int i = 1; i < salsaARRAYSize; i++)
    {
        if (ARRAY2[i] < lowest)
        {
            lowest = ARRAY2[i];
            lowestSalsa = ARRAY1[i];
            
        } 
        else if (ARRAY2[i] == lowest)
        {
            lowest = ARRAY2[i];
            lowestSalsa += ", ";
            lowestSalsa += ARRAY1[i];

        }
        
    }
    
    return lowestSalsa;
}

// Get total number of jars sold
void getNumberSold(const string salsaARRAY[], int jarARRAY[], const int num)
	{
    	for (int i = 0; i < num; i++)
    	{
    	    cout  << "Enter number of jars sold for " << salsaARRAY[i] << ": ";
    	    jarARRAY[i] = inputValidate(jarARRAY[i]);
    	}
    
	}
	
int totalSales(const int ARRAY[], const int num)

	{
    	int total = 0;

    	for (int i = 0; i < num; i++)
        	total += ARRAY[i];

    	return total;
	}

