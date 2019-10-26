#include <iostream>
using namespace std; 

//Fuction prototypes
bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month,int year);

int main() {
	int month, day, year;
	cout << "Enter month (1-12)" << endl;
	cin >> month;
	cout << "Enter day (1-31)" << endl;
	cin >> day;
	cout << "Enter year (0000-9999)" << endl;
	cin >> year;
// To get the day, sum the values and compute the
// remainder divided by 7
int total;
total = (day + getMonthValue(month, year) + getYearValue(year)+ getCenturyValue(year));int dayOfWeek = total % 7;
	if (dayOfWeek == 0)cout << "Sunday" << endl;
	else if (dayOfWeek == 1)
		cout << "Monday" << endl;
	else if (dayOfWeek == 2)
		cout << "Tuesday" << endl;
	else if (dayOfWeek == 3)
		cout << "Wednesday" << endl;
	else if (dayOfWeek == 4)
		cout << "Thursday" << endl;
	else if (dayOfWeek == 5)
		cout << "Friday" << endl;
	else if (dayOfWeek == 6)
		cout << "Saturday" << endl;
		cout << "Enter a character to exit." << endl;
	char wait;cin >> wait;
return 0;
}//end main

bool isLeapYear(int year) {
	if (((year % 400) == 0) || (year % 4 != 0) && (year % 100 != 0)){
		return true;
	}
	else {
		return false; 
	}//end if else. 
}//end isLeapYear

//Gets the century value of the year. 
int getCenturyValue(int year) {
	return (3 - ((year / 100 % 4)) * 2);
}//end getCenturyValue

int getYearValue(int year) {
	return ((year / 4) + (year % 100));
}//end getYearValue

int getMonthValue(int month, int year) {
	if (month == 1) {
		if (isLeapYear(year))
			return 6;
		else
			return 0;
	}
	else if (month == 2) {
		if (isLeapYear(year))
			return 2;
		else
			return 3;
	}
	else if (month == 3)
		return 3;
	else if (month == 4)
		return 6;
	else if (month == 5)
		return 1;
	else if (month == 6)
		return 4;
	else if (month == 7)
		return 6;
	else if (month == 8)
		return 2;
	else if (month == 9)
		return 5;
	else if (month == 10)
		return 0;
	else if (11)
		return 3;
	else if (month == 12)
		return 5;
}//end getMonthValue