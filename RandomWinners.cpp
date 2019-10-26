/*
Author: Hailey Leighton
Assignment: CHomeworkC3#4
Description: This program selects 4 random winners out of 25 people by generating 4 different random numbers then comparing them to see if
there are any repeats, if so the numbers are randomly generated again until none of the numbers match, then it prints out the winner. 
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main() {
	int NUMPEOPLE = 25;
	int num1, num2, num3, num4;
	string userInput = "";
	srand(time(NULL));
	do {
		do {
			num1 = (rand() % NUMPEOPLE) + 1;
			num2 = (rand() % NUMPEOPLE) + 1;
			num3 = (rand() % NUMPEOPLE) + 1;
			num4 = (rand() % NUMPEOPLE) + 1;
		} while (num1 == num2 || num1 == num3 || num1 == num4 || num2 == num3 || num2 == num4 || num3 == num4);

		cout << "\nThe 4 Random Winners are:\n" << "Winner 1: " << num1 << "\nWinner 2: " << num2 << "\nWinner 3: " << num3 << "\nWinner 4: " << num4 << "\n\nCongradulations to all Winners!\n\n";

		cout << "Would you like to run the game again? ('Y' or 'N')\n";
		cin >> userInput;
		while (userInput != "Y" && userInput != "N" && userInput != "n" && userInput != "y") {
			cout << "Invaild input, input must be either a 'Y' or a 'N'.\n";
			cin >> userInput;
		}
	} while (userInput == "y" || userInput == "Y");

}//end main
