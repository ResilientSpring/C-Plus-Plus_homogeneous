// Index a pointer as if it were an array.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
	char *p;
	int i;

	char str[80] = "This Is A Test";
	printf("Original string: %s \n", str);

	p = str;   // p now holds the memory address of the first character in the character array.

	// now, index p
	for (i = 0; i < (p + i); i++)
	{
		if (isupper(p[i]))
			p[i] = tolower(p[i]);
		else if (islower(p[i]))       // Access p as if it were an array.
			p[i] = toupper(p[i]);
	}

	printf("Inverted-case string: %s \n", str);

}