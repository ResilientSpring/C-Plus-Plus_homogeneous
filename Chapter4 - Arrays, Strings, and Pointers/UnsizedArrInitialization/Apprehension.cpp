#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
	int nums[] = { 1, 2, 3, 4 };

	char e1[] = "www.osborne.com";
	char e2[] = "www.weather.com";
	char e3[] = "www.amazon.com";

	int sqrs[][2] = { {1, 1}, {2, 4}, {3, 9}, {4, 16}, {5, 25}, {6, 36}, {7, 49}, {8, 64}, {9, 81}, {10, 100} };

	printf("%d", sqrs[9][1]);
}