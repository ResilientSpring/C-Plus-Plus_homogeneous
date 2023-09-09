/*
		Project 4-2

		Reverse a string in place.

*/

#include <iostream>
using namespace std;

int main() {

	// The string to be reversed is contained in str.
	char str[] = "this is a test";
	
	// The pointers "start" and "end" will be used to access the string.
	char *start, *end;

	int len;
	char t;

	cout << "Original string: " << str << endl;

	len = strlen(str);

	start = str;
	end = &str[len - 1];

}