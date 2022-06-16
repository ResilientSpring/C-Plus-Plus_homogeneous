/*
* Use a 2-D array of pointers to create a dictionary.
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
	char dictionary[][2] = { {"pencil", "A writing instrument."} };

	char word[80];
	int i;

	printf("Enter word: ");

	// In C++, using an array's name without indexing brackets [] attached represents the memory address of 
	// the array's first element.
	scanf("%s", word);           // Need not to precede the word with * because it's already an memory address.

	for (i = 0; *dictionary[i][0]; i++)
	{
		if (strcmp(dictionary[i][0], word)) {
			printf("%s  \n", dictionary[i][1]);
			break;
		}
	}

	if (!*dictionary[i][0]) {
		printf("%s not found", word);
	}
}