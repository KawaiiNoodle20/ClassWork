#include <iostream>;
using namespace std;

int main() {
	int total = 0;
	int userInput = 0; 

	cout << "Please enter negative 4 numbers.";
	for (int i = 0; i < 4; i++) {
		cin >> userInput;
		if (userInput < 0){
			total = total + userInput;
		}else{
			System.out.println("Not a negative number, will not add to total.");
		}
	}
	cout << total; 
}