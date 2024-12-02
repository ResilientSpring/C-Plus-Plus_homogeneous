#include <iostream>

int main() {

	const char* lineptr[50];

 // Not *lineptr[0] = "pointers in a pointer array" as a string constant returns an address.
	lineptr[0] = "pointers in a pointer array";

	printf("%s \n", lineptr[0]);

}