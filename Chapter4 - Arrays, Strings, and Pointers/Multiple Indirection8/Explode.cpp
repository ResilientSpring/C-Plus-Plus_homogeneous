#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable (p) to be a pointer.

	int x, * p, ** q;  // A pointer is an object/variable/pointer (of course) that can contain a memory address.

	// ----- End of declaration statements.    Operation starts

	// As soon as variables are declared, they have their addresses on memory to let the system remember them.
	printf("%p \n%p  \n%p  \n", &x, &p, &q);

	x = 10;

	p = &x;

	q = &p;  // Assign q the address of p.

	printf("%p  \n", q);   // The value that sits on q's own memory address is p's memory address.
}