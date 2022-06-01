// A simple computerized telephone directory.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	int i;
	char str[80];
	char numbers[10][80] = { "Tom", "555-3322", "Mary", "555-8976", "Jon", "555-1037", "Rachel", "555-1400",
		"Sherry", "555-8873" };

	printf("Enter name: ");
	scanf("%s", str);

	for (i = 0; i < 10; i += 2)
	{
		if (!strcmp(str, numbers[i])) {
			printf("Number is %s \n", numbers[i + 1]);
			// When the break statement is encountered inside a loop, the loop is immediately terminated, 
			// and program control resumes at the next statement following the loop.
			break;
		}
	}

	if (i == 10)
	{
		printf("Not found. \n");

	}

}