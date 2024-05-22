// C program to illustrate macros
#include <stdio.h>

// Macro definition
#define AREA(a, b) (a * b)

// Driver Code
int main()
{
	// Given lengths l1 and l2
	int l1 = 10, l2 = 5, area;

	// Find the area using macros
	area = AREA(l1, l2);

	// Print the area
	printf("Area of rectangle"
		" is: %d",
		area);

	return 0;
}


// Source: https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/
