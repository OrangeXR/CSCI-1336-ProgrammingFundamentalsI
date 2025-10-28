// Luis Morales
// Assignment 7 - Student Line up
// June 23, 2020

/* 
				ASSIGNMENT:	A7 – Student Line Up
				"Student Line Up", page 295, Number 14
				A teacher has asked all students to line up single file according 
				to their first name. For example, in one class Amy will be in the 
				front of the line and Yolanda will be at the end.

				Write a program that prompts the user to enter the number of 
				students in the class, then loops to read in that many names. Once 
				all the names have been read in, it reports which student is in 
				the front of the line and which student is at the end of the line. 
				You may assume that no two students have the same name. This is not
				 a sorting assignment.
				
				Input Validation: Do not let the user enter a number less than 1 of 
				greater than 25 for the number of students.

				EXTRA CREDIT: even though you do not have to sort this array, just 
				tell who is first and who is last in line, if you sort it and then 
				tell me who is first and who is last based on the sorted names, you 
				will receive extra credit (hint, your text covers sorting, there are 
				several ways to do this). (You will receive an extra 1 point if you can do this).
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int stdMin = 1;
	const int stdMax = 25;
	int stdTotal;
	string stdName, first, last;

	do
		{
				cout << "How many students are in your class? ";
				cin >> stdTotal;
				cin.ignore();

				// Check if number between 1 and 25 is entered
				if (stdTotal < stdMin || stdTotal > stdMax)
					cout << "The number of students must be between 1 and 25.\n\n";
		}
	while ( stdTotal < stdMin || stdTotal > stdMax);

	// get the first student name
	cout << "\nEnter the name of a student: ";
	getline(cin, stdName);
	
	// this will set the first and last
	first = stdName;
	last = stdName;
	
	// this loop will get the rest of the students' names and find first/last
	for (int students = 2; students <= stdTotal; students++)
	{
	// next name
	cout << "Enter the name the next student: ";
	getline(cin,stdName);
	// sort
	if (stdName < first)
		first =stdName;
	if (stdName > last)
		last = stdName;}
	//display the first student in line
	cout << endl << first << " is the first student in line.\n";
	//display the last student in line
	cout <<endl << last << " is the last student in line.\n";
	
	system("PAUSE");
	return 0;
}
