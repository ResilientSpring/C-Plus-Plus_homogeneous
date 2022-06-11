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


}