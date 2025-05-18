#include <stdio.h>

int main() {

	char string_constant[] = "";

	printf("How many elements are there in a null string literal?\n");

	printf("There is %d element in a string literal.\n", sizeof(string_constant) / sizeof(char));
}