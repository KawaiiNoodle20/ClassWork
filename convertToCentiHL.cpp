//Author: Hailey Leighton
//This program takes a input of feet and inches and converts it to centimeters
#include <cstdlib>
#include <iostream>
using namespace std;

const double METERS_PER_FOOT = 0.3048;
const double INCHES_PER_FOOT = 12.0;
int feet;
double inches; 

double convertToCenti(); 
void printOutput(); 

int main() {
	printOutput; 
}

//This function handles all of the output and input for the program
//it will prompt the user for feet and inches then pass it onto convertToCenti(); 
void printOutput() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	string userInput;
	do {
		cout << "Enter feet as an integer: ";
		cin >> feet;
		cout << "Enter inches as a double: ";
		cin >> inches;
		cout << "\nThe value of feet, inches: " << feet << "\" " << inches << "'\n";
		cout << "Converted to centimeters: " << convertToCenti() << endl;
		cout << "Y or y continues, any other character quits\n";
		cout << "Input: ";
		cin >> userInput;
	} while (userInput == "y" || userInput == "Y");
}

//this function does the calculations and returns the value of feet and inches in centimeters.
double convertToCenti() {
	double meters;
	double centimeters; 
	meters = feet * METERS_PER_FOOT;
	centimeters = meters * 100;
	centimeters = centimeters + (inches * 2.54);

	return centimeters; 
}