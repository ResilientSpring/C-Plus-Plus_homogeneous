#define _CRT_SECURE_NO_WARNINGS

// Convert a string to uppercase.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

	char str[80];
	int i;

	strcpy(str, "this is a test");

	// This loop stops when the null terminator is indexed, because all character values are non-zero, 
	// but the null, which terminates the string, is zero.
	for (i = 0; str[i]; i++)         // True is any non-zero value.
		str[i] = toupper(str[i]);

	cout << str;

}