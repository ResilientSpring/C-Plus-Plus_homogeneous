// Use a 2-D array of pointers to create a dictionary.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	char dictionary[][2][100] = {
		{"Pencil", "A writing instrument"},
		{"keyboard", "An input device"},
		{"rifle", "A shoulder-fired firearm."}, 
		{"airplane", "A fixed-wing aircraft."},
		{"network", "An interconnected group of computers"}
	};

//	printf("%s  \n", dictionary[0][0][0]);
	printf("%c  \n", dictionary[0][0][0]);
	printf("%s  \n", dictionary[0][0]);

	char word[80];

	printf("Enter word:");

//	scanf("%s  \n", word);
	scanf("%c  \n", word);

//	printf("You entered %s  \n", *word);
	printf("You entered %c  \n", *word);
//	printf("You entered %s  \n", *word);


	for (int i = 0; dictionary[i][0][0]; i++)
	{

	}
}