// Convert a string to uppercase.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

int main() {
	char str[80];

	strcpy(str, "this is a test");

	for (int i = 0; str[i] ; i++)  // This loop stops when the null terminator is indexed.
	{
		str[i] = toupper(str[i]);
	}

	printf(str);

	return 0;
}