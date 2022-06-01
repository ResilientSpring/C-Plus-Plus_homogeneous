#include <iostream>
using namespace std;

int main() {

	// In a declaration statement, preceding a variable name with a * causes that variable to be a pointer.

	int total;
	int* ptr;   // This pointer is an object that can contain a memory address of an integer. 
	int val;

	// ----- End of declaration statements.    Operation starts

	total = 3200; 
	ptr = &total; // & returns the memory address of its operand.

	val = *ptr;  // * returns the value at the memory address of its operand.

	cout << "Total is: " << val << '\n';

	return 0;
}