#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;

string convertNumToText(int num); 
string convertTensToText(int num);

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	int k = 0;
	for (int i = 99; i > 0;  --i) {
		k++;
		SetConsoleTextAttribute(hConsole, k);
		cout << endl << convertNumToText(i) << " bottles of beer on the wall, " << convertNumToText(i) << " bottles of beer.";
		cout << "\nTake one down, pass it around, " << convertNumToText(i - 1) << " bottles of beer on the wall.\n";
		if (k == 6) {
			k = 0; 
		}
	}
	
	cout << "\nNo more bottles of beer on the wall, no more bottles of beer.\nGo to the store, buy some more, 99 bottles of beer on the wall." << endl << endl;
}

string convertNumToText(int num) {

	string text;

	switch (num / 10) {
	case 1:
		return convertTensToText(num);
	case 2: 
		text = "Twenty ";
		break;
	case 3: 
		text = "Thirty ";
		break;
	case 4: 
		text = "Fourty ";
		break;
	case 5: 
		text = "Fifty ";
		break;
	case 6:
		text = "Sixty ";
		break;
	case 7:
		text = "Seventy ";
		break;
	case 8:
		text = "Eighty ";
		break;
	case 9:
		text = "Ninety ";
		break;
	}

	switch (num % 10) {
	case 0:
		return text;
	case 1: 
		text = text + "one";
		break;
	case 2:
		text = text + "two";
		break;
	case 3:
		text = text + "three";
		break;
	case 4:
		text = text + "four";
		break;
	case 5:
		text = text + "five";
		break;
	case 6:
		text = text + "six";
		break;
	case 7:
		text = text + "seven";
		break;
	case 8:
		text = text + "eight";
		break;
	case 9:
		text = text + "nine";
		break;
	}

	return text; 
}

string convertTensToText(int num) { 
	switch (num) {
	case 10:
		return "Ten"; 
	case 11:
		return "Eleven";
	case 12:
		return "Twelve";
	case 13:
		return "Thirteen";
	case 14:
		return "Fourteen";
	case 15:
		return "Fifteen";
	case 16:
		return "Sixteen";
	case 17:
		return "Seventeen";
	case 18:
		return "Eighteen";
	case 19:
		return "Nineteen";
	}
}