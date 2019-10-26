/*
Hailey Leighton
Assignment: inClass1Chapter3
============================================================================
This program plays craps 5 times and will print out how many times you lost, 
and how many times you won. It takes no user input, all the calculations are
done itself in the program by generating random numbers. 
============================================================================
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std; 

int generateSum(); 

int main() {

	int sum = 0, wins = 0, losses = 0, point, numOfGames = 10;
	srand(time(NULL));

	for (int gameNum = 0; gameNum < numOfGames; gameNum++) {
		sum = generateSum();
		if (sum == 7 || sum == 11) {
			cout << "You win!" << endl;
			wins++;
		}
		else if (sum == 2 || sum == 3 || sum == 12) {
			cout << "You lose!" << endl;
			losses++;
		}
		else {
			point = sum;
			do {
				sum = generateSum();
				if (sum == point) {
					cout << "You win!" << endl;
					wins++;
				}
				else if (sum == 7){
					cout << "You lose!" << endl;
					losses++;
				}
			} while (sum != 7 && sum != point);
		}
	}//end for loop
	cout << endl << "Out of " << numOfGames << " games, you won " << wins << " times, and you lost " << losses << " times." << endl; 
}//end main

//Rolls the dice for craps and returns the sum of the dice. 
int generateSum() {
	int dice1, dice2;
	dice1 = (rand() % 6) + 1; 
	dice2 = (rand() % 6) + 1;
	return dice1 + dice2; 
}//end function