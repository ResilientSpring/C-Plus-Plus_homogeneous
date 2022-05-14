// Demonstrate the string functions.
#define _CRT_SECURE_NO_WARNINGS  // [1]
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	char s1[80], s2[80];

	strcpy(s1, "C++");
	strcpy(s2, " is power programming.");

	cout << "lengths: " << strlen(s1);
	cout << ' ' << strlen(s2) << "\n";

	if (!strcmp(s1, s2))
	{
		cout << "The strings are eual.\n";
	}
	else
		cout << "The strings are not equal.\n";

	strcat(s1, s2);
	cout << s1 << '\n';

	strcpy(s2, s1);
	cout << s1 << " and " << s2 << "\n";

	if (!strcmp(s1, s2))
	{
		cout << "s1 and s2 are now the same.\n";
	}

	return 0;

}

// Reference: 
// 1. https://stackoverflow.com/a/55677474