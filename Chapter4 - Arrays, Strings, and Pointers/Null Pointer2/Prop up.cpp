#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cctype>
#include <iomanip>

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable (p) to be a pointer.
	float* p;
	// ----- End of declaration statements.    Operation starts
	p = 0;

	if (p)
		printf("p is not null");
	else if (!p)
		printf("p is null");

}