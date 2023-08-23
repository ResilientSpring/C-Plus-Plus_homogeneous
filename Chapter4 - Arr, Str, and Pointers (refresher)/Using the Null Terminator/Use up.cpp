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

	for (i = 0; str[i]; i++)
		str[i] = toupper(str[i]);

	cout << str;

}