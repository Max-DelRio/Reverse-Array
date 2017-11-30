/*
Max Del Rio
Homework 3
Date Due: Thu, 19 Oct 2017
Make a program that asks the user to enter a string into an array named InputArray that has a maximum size of 133 characters, and be able to input white space characters. This array will be passed to a function named Reverse, which will reverse all letters in the InputArray. Then in main, your program will output the reversed InputArray. A .H file is required and Input Array [133] will be used as a constant.
*/
#include "Homework3.h"


int main() {

	char InputArray[SIZE];

	//Asks the user to input a string
	cout << "Please enter a string no longer than 133 characters: ";
	cin.getline(InputArray, sizeof(InputArray));

	//Counts how many characteres were used
	cout << "\nThe amount of characters used was: " << cin.gcount() - 1 << endl;

	//Reverses the string the user entered
	Reverse(InputArray);
	cout << "\nThe string entered in reverse is : " << InputArray << endl;

	system("Pause");

	return 0;
}
void *Reverse(char *pString) {
	
	char *pStart = pString;
	char *pEnd = pStart + strlen(pString) - 1;

	//While loop that reverses the string
	while (pEnd > pStart) {
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}
	return pString;
}

