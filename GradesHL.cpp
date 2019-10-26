/*
Hailey Leighton
This program calculates the grade of a student using pointsEarned and pointsPossible.
*/

#include <iostream>
#include <string>
using namespace std; 

int main() {
	int numExercises; 
	int pointsEarned;
	double pointsEarnedTotal = 0;
	int pointsPossible; 
	double pointsPossibleTotal = 0; 
	cout << "How many exercises do you wish to enter: "; 
	cin >> numExercises;

	for (int i = 0; i < numExercises; ++i) {
		cout << "Please enter number of points earned on the exercise: ";
		cin >> pointsEarned; 
		pointsEarnedTotal = pointsEarnedTotal + pointsEarned; 
		cout << "Please enter the total number of points possible: ";
		cin >> pointsPossible;
		pointsPossibleTotal = pointsPossibleTotal + pointsPossible;
	}
	double average = ((pointsEarnedTotal / pointsPossibleTotal) * 100); 
	cout << "You scored a " << pointsEarnedTotal << "/" << pointsPossibleTotal << " or %" << average << endl;
}
