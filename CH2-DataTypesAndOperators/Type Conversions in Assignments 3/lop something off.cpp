#include <iostream>
using namespace std;

int main() {

	cout << "The size of a variable of int: " << sizeof(int) << endl;
	cout << "The size of a variable of char: " << sizeof(char) << endl;
	cout << "The size of a variable of float: " << sizeof(float) << endl;

	int i;
	char ch;
	float f;


	// In an assignment statement, the right-side value is converted to the type of the left-size variable.

	ch = i; // line 1  High-order bits of the int variable i are lopped off, leaving ch with the lower 8 bits.
	i = f;  // line 2    
	f = ch; // line 3
	f = i;  // line 4

}