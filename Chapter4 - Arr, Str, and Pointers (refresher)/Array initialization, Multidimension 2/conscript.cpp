#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {

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

	int sqrs_2[10][2] = {
		1, 1,
		2, 4,
		3, 9,
		4, 16,
		5, 25,
		6, 36,
		7, 49,
		8, 64,
		9, 81
	};


	int input, i;
	printf("Enter a number between 1 and 10: ");
	scanf("%d", &input);

	// look up i
	for (i = 0; i < 10; i++)
		if (sqrs[i][0] == input) break;

	cout << "The square of " << input << " is ";
	cout << sqrs[i][1];
}