/*
* Use a 2-D array of pointers to create a dictionary.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
	char* dictionary[][2] = { {"pencil", "A writing instrument"}, {"keyboard", "An input device."},
		{"rifle", "A shoulder-fired firearm."}, {"airplane", "A fixed-wing aircraft"},
		{"network", "An interconnected group of computers."}, {"", ""} };

	char word[80];
	int i;

	printf("Enter word: ");

	// In C++, using an array's name without indexing brackets [] attached represents the memory address of 
	// the array's first element.
	scanf("%s", word);           // Need not to precede the word with * because it's already an memory address.

	for ( i = 0; *dictionary[i][0]; i++)
	{
		if (strcmp(dictionary[i][0], word)) {
			printf("%s  \n", dictionary[i][1]);
			break;
		}
	}

	if (!^dictionary[i][0]) {
		printf("%s not found", word);
	}
}