// Luis Morales
// Assignment 8
// June 26, 2020

/*
A8 – Using Files-Numeric Processing
"Using files-Numeric Processing", page 298, Number 24
=====================================================

If you have downloaded this book's source code from the companion Web site, you
will find a file named Random.txt in the Chapter 05 folder.  (The companion Web
site is at www.pearsonhighered.com/gaddis.) This file contains a long list of random
members.  Copy the file to your hard drive and then write a program that opens the file,
reads all the numbers from the file, and calculates the following:

A.) The number of numbers in the file
B.) The sum of all the numbers in the file (a running total)
C.)The average of all the numbers in the file

The program should display the number of number found in the file, the sum of the 
numbers, and the average of the numbers.

=====================================================
Use this txt file of numbers as your input file: Random.txt Preview the document
Above is the file you will read in, Download it to your PC  ("Random.txt") and place in the same folder as your C++ file for this assignment.
Write a program that reads all the number in the "Random.txt" file and calculates the following:
a. The number of numbers is the file (the final count)
b. The sum of all the numbers in the file (total)
c. The average of all the numbers in the file (total/count)
Your program should then display the number of numbers found in the file, the sum of the numbers, and the average of the numbers.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	// Open and link input file
	ifstream inputFile;
	inputFile.open("Random.txt");
	double number, sum, avg;
	
	cout << "Reading data from the file.\n\n";

	// Error check
	if (inputFile.fail())
		{
			cout << "\n - Error opening file. - \n";
			exit(1);
		}

	string item;
	int count = 0;
	
	// Determine number of numbers
	while (!inputFile.eof())
	{
		inputFile >> item;
		count++;
	}
	// Show total number of numbers in the file
	cout << "A.) The number of numbers is: "<< count << endl;
	
	// Show sum of all numbers in the file
	sum = 
	cout << "B.) The sum of all the numbers in the file is: " << sum << endl;
	
	// Show average of all the numbers in the file
	avg = sum / count;
	cout << "C.) The average of all the numbers in the file is " << avg << endl;
		
	// Closes input file
	inputFile.close();
 	cout << "======\n" ; 
	system("PAUSE");
	return 0;
}
