#include <iostream>
using namespace std;

int main() {

	const char *ptr;

	ptr = "Pointers add power to C++.\n"; // ptr is assigned the address of this string constant.
	                                     // A string constant is a set of characters enclosed in double quotes.
	cout << ptr;
	// The name of a character array that holds a string can be used in any place that a string constant 
	// can be used.

	// In other words, the memory address of a character array's first element can be used in any place that a
	// string constant can be used.

	// In C++, using the name of an array without an index generates a pointer to the first element in the 
	// array.
}