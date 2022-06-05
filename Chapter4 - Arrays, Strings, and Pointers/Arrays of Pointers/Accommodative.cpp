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
		{"network", "An interconnected group of computers."}, {"", ""}};

	char word[80];
	int i;

	printf("Enter word: ");

	scanf("%s", word);
}