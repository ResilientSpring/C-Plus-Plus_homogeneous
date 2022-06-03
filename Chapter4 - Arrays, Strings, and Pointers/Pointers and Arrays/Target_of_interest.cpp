// Reverse case using array indexing.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
	int i;
	char str[80] = "This Is A Test";

	printf("Original string: %s \n", str);

	for ( i = 0; str[i]; i++)
	{
		if (isupper(str[i]))
			str[i] = tolower(str[i]);
		else if (islower(str[i]))
			str[i] = toupper(str[i]);
	}

	printf("Inverted-case string: %s \n", str);
}