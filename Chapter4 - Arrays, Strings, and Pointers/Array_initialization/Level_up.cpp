#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	int i, j;
	int sqrs[10][2] = {
		{1, 1},
		{2, 4},
		{3, 9},
		{4, 16},
		{5, 25},
		{6, 36},
		{7, 49},
		{8, 64},
		{9, 81},
		{10, 100}
	};

	printf("Enter a number between 1 and 10: ");
	scanf("%d", &i);

	// look up i

	for ( j = 0; j < 10; j++)
	{
		if (sqrs[j][0] == i)
			break;
	}

	printf("The square of %d is %d", i, sqrs[j][1]);

}