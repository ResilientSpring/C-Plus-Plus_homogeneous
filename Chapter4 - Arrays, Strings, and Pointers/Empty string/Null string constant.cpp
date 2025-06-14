#include <stdio.h>

int main() {

	char string_constant[] = "";

	printf("How many elements are there in a null string literal?\n");

	printf("There is %zd element in a string literal.\n", sizeof(string_constant) / sizeof(char));
}

// Code review:
// 1. https://chatgpt.com/c/6829ae4f-f240-8008-a2f7-52b3964f1a38