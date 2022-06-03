// Reverse case using pointer arithmetic.
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	char* p;
	char str[80] = "This Is A Test";

	printf("Original string: %s \n", str);

	// In C++, using the name of an array without an index generates a pointer to the first element in the array.
	p = str;
	// In other words, in C++, using the name of an array without an index represents the memory address of
	// the first element of the array.

	while (*p)
	{
		if (isupper(*p))
			*p = tolower(*p);
		else if (islower(*p))
			*p = toupper(*p);

		p++;
	}

	printf("Inverted-case string: %s \n", str);
}