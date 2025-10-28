// Luis Morales
// Assignment 11
// June 26, 2020

/*
	Largest/Smallest Array Values
	
	Write a program that lets the user enter 10 values into an array.  The program should then display the largest and smallest values 
	stored in the array.  YOu will loop once to read in the numbers.  Then another loop to find the smallest and largest number in the 
	array and display/print the largest and smallest numbers to the screen.
*/
#include <iostream>

using namespace std;

const int userInput = 10;

int inputValidate(int);
void getValues(int []);
int getLargest(int []);
int getSmallest(int []);

int main()
	{
		cout << "======================================================================" << endl;
		cout << "This program will determine the largest and smallest number you enter." << endl;
		cout << "======================================================================" << endl << endl;
    	int userInputs[userInput];
	
    	getValues(userInputs);

  	  int largest = getLargest(userInputs);
  	  cout << "\n||The largest value = " << largest << endl;
	
	    int smallest = getSmallest(userInputs);
	    cout << "||The smallest value = " << smallest << endl;
		system("PAUSE");
	    return 0;
	} 
// Validate user input	
int inputValidate(int numInput)
	{
	    while(!(cin >> numInput))
		    {
    		    cout << "That is not a valid entry, try again: ";
     			cin.clear();
  		        cin.ignore(123, '\n');
 		    }
 	    return numInput;
	}	

void getValues(int array[])
	{
    	for(int num = 0; num < userInput; num++)
   			{
        		cout << "->Enter number #" << (num + 1) << ": ";
        			array[num] = inputValidate(array[num]);
    		}
	}

int getLargest(int array[])
	{
    	int largest = array[0];

    	for (int num = 1; num < userInput; num++)
    		{
        		if (array[num] >= largest)
            	largest = array[num];
        
    		}

    	return largest;
	}

int getSmallest(int array[])
	{
    	int smallest = array[0];

    	for (int num = 1; num < userInput; num++)
    		{
        		if (array[num] <= smallest)
            	smallest = array[num];
        
    		}
    
    	return smallest;
	}
