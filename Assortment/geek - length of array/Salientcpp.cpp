// C Program to calculate size of an array using pointer arithmetic
#include <stdio.h>

int main()
{

	int Arr[] = { 1, 2, 3, 4, 5, 6 };

	int length = *(&Arr + 1) - Arr;

	printf("Number of elements in Arr[] is: %d \n", length);

}

// Reference: https://www.geeksforgeeks.org/length-of-array-in-c/