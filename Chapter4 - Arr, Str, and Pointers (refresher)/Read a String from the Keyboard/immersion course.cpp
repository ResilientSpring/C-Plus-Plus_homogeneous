// Using cin to read a string from the keyboard.
#include <iostream>
using namespace std;

int main() {

	// Declare an array that could hold a 79-character string.
	char str[80];

	cout << "Enter a string: ";
	cin >> str;

	// The name of a character array that holds a string can be used at any place that 
	// a string constant can be used.
	cout << "Here is your string: " << str << endl;
	// A string constant is a set of characters enclosed in double quotes.
}
