#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cctype>
#include <string.h>

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable (p) to be a pointer.

	int x, * p, ** q;  // A pointer is an object/variable/pointer (of course) that can contain a memory address.

	// ----- End of declaration statements.    Operation starts

	// As soon as a variable is declared, the variable has its memory address. 
	// That's how the system remember the existence of the variable.
	p = &x;

	printf("%p  \n", p);

	x = 10;      // Now, the value that sits on the variable's address on memory is 10.

	p = &x;

	printf("%p  \n", p);   // x's address on memory remains the same before and after value assignment.




}