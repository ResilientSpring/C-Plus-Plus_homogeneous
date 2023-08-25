// Using cin to read a string from the keyboard.
#include <iostream>
using namespace std;

int main() {

	// Declare an array that could hold 79 characters that make up a string followed by a null (ASCII = 0).
	const char str[80];
	// Need not precede char str[80] with const, because neither what you will enter nor 
	// the receiving variable is a set of characters enclosed in double quotes.

	cout << "Enter a string: ";  // This is a string constant.
	cin >> str;   // This is not a string constant.             

	// The name of a character array can be used at any place that a string constant can be used.
	cout << "Here is your string: " << str << endl;
	// String constant is a set of characters enclosed in double quotes.
}
