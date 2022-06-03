#include <iostream>
using namespace std;

int main() {

	// In a declaration statement, preceding a variable name with a * causes that variable to be a pointer.

	int total;
	int* ptr;   // A pointer is an object that can contain a memory address. 
	int val;

	// ----- End of declaration statements.    See also: Array declaration.

	total = 3200; // Assign 3200 to total.
	ptr = &total; // get address of total.  & is an operator standing for the memory address of its operand.

	val = *ptr;  // * is an operator representing the value at the memory address of its operand. 

	cout << "Total is: " << val << '\n';

	return 0;
}