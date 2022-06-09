#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string.h>
#include <iomanip>

int main() {

	// In a declaration statement, preceding a variable name with a * causes that variable (p) to be a pointer.

	int x, * p, ** q;  // A pointer is an object/variable/pointer (of course) that can contain a memory address.

	// ----- End of declaration statements.    Operation starts

	x = 10;

	p = &x;

	q = &p;  // Assign p's memory address to q. (p, of course, has its own memory address.)

	printf("%p \n", *q);   // %p because the value that sits on p's own memory address is x's memory address.
}