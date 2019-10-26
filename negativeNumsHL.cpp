/*
Program written by Hailey Leighton
Professor Shave
Chapter2Hw3
====================================
This program takes the input of 4 numbers (should be negative), and adds the total of all the negative numbers. 
If a positive number is input it will print out a ERROR message, and that number will no be calculated in the total.
*/

#include <iostream>;
using namespace std;

int main() {
	int total = 0;
	int userInput = 0;
	int negNums = 0;
	int posNums = 0;

	cout << "Please enter 4 numbers." << endl;
	for (int i = 0; i < 4; i++) {
		cin >> userInput;
		if (userInput < 0) {
			total = total + userInput;
			negNums++;
		}
		else {
			posNums++;
			cout << "ERROR: positive number was entered, will not be included in total." << endl;
		}//end if else
	}//end for
	cout << "The total of all the negative numbers are: " << total << endl;
	cout << "You entered " << negNums << " negative numbers." << endl;
	cout << "You entered " << posNums << " positive numbers." << endl << endl;
	return 0;
}