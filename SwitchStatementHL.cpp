/*
Hailey Leighton
October 1st, 2019
=================
This program asks the user which difficulty question they would like to answer, and prints out a question.
If the user is correct it will print out correct else, prints out false, then it prompts to see if the user would 
like to answer another question. (Written with Switch Statement.)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string userInput;
	int questionLevel = 0;
	bool question, answer; 

	do {
		cout << "Press 1 for an easy question, 2 for a medium question, or 3 for a hard question: ";
		cin >> questionLevel; 
		switch (questionLevel) {
		case 1:
			cout << "true or false? " << "1 > 2" << endl;
			cout << "Press 1 for true or 0 for false";
			question = 1 > 2;
			cin >> answer;
			if (answer == question) {
				cout << "correct\n";
			}
			else {
				cout << "incorrect\n";
			}
			break;
		case 2:
			cout << "true or false? " << "1 > 2 || 1 < 2" << endl;
			cout << "Press 1 for true or 0 for false";
			question = 1 > 2 || 1 < 2;
			cin >> answer;
			if (answer == question) {
				cout << "correct\n";
			}
			else {
				cout << "incorrect\n";
			}
			break;
		case 3:
			cout << "true or false? " << "1 > 2 && 1 < -1" << endl;
			cout << "Press 1 for true or 0 for false";
			question = 1 > 2 && 1 < -1;
			cin >> answer;
			if (answer == question) {
				cout << "correct\n";
			}
			else {
				cout << "incorrect\n";
			}
		default:
			cout << "There were only 3 options\n";
			break;
		}
		cout << "Do you want to ask another question ( Enter \"Y\" or \"N\")" << endl;
		cin >> userInput;
	} while (userInput == "Y");
}//end main