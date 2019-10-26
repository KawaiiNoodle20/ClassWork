/*
Hailey Leighton

This program runs once and asks the user if they want to answer another question before it runs again using a 
"do while" statement.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string userInput = "";
	bool isFirstTimeRunning = true;
	do {
			int questionLevel;
			bool answer, question;
			cout << "Press 1 for an easy question, 2 for a medium question, or 3 for a hard question:";
			cin >> questionLevel;
			if (questionLevel == 1) {
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
			}
			else {
				if (questionLevel == 2) {
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
				}
				else {
					if (questionLevel == 3) {
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
					}
					else {
						cout << "There were only 3 options\n";
					}
				}
			}
			cout << "Do you want to ask another question ( Enter \"Y\" or \"N\")" << endl;
			cin >> userInput;
	} while (userInput == "Y");
}