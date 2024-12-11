#include <stdio.h>

int main() {

	char* lineptr[50];

	lineptr[0] = "pointers in a pointer array";
	lineptr[1] = "qsort expects an array of pointers, ";
	lineptr[2] = " two integers, and a function with two pointer arguments.";


	char* FileName = "Hey.txt";
	char FileName2[] = "Hey.txt";

	if (FileName == FileName2)
		printf("char* FileName == char FileName2[] \n");
	else
		printf("char* FileName != char FileName2[] \n");


	printf("FileName is %s \n", FileName);
	printf("FileName2 is %s \n", FileName2);

	
	char amessage[] = "now is the time";
	char* pmessage = "now is the time";

	// Individual characters within the array may be changed.
	amessage[1] = 'e';

	// pmessage is a pointer, initialized to point to a string constant; the pointer 
	// may be subsequently modified to point to elsewhere, but the result is undefined 
	// if you try to modify the string content.
	printf("%c \n", pmessage[1]);
	pmessage[1] = 'e';
	printf("%c \n", pmessage[1]);
}