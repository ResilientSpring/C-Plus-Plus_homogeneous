#define _CRT_SECURE_NO_WARNINGS

// Demonstrate the string functions.
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {

	char s1[80], s2[80];

	strcpy(s1, "C++");
	strcpy(s2, " is power programming.");

	cout << "lengths: " << strlen(s1);
	cout << ' ' << strlen(s2) << endl;

	if (!strcmp(s1, s2))
		cout << "The strings are equal. \n";
	else cout << "not equal\n";

	strcat(s1, s2);
	cout << s1 << endl;

	strcpy(s2, s1);
	cout << s1 << " and " << s2 << endl;

	if (!strcmp(s1, s2))
		cout << "s1 and s2 are now the same. " << endl;
}
