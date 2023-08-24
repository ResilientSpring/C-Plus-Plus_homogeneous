#define _CRT_SECURE_NO_WARNINGS

// Convert a string to uppercase.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

	char str[80];
	int i;

	// It's not necessary to manually add the null (terminator) onto the end of string constants; C++ 
	// (compiler) does this for you. Therefore, the string "this is a test" will appear in memory (
	// one-dimensional array of character) like this:
	// t h i s  i s  a  t e s t 0
	// 0 1 2 3 4 ...............14
	strcpy(str, "this is a test");

	// This for loop stops when the condition str[i] == null (ASCII = 0), because all characters here including
	// space (ASCII = 32) are non-zero, but the null, which marks the end of the string, is zero.
	for (i = 0; str[i]; i++)         // True is any non-zero value.
		str[i] = toupper(str[i]);

	cout << str;

}