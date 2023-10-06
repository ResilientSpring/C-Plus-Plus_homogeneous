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
	end = &str[len - 1]; // end points to the last character in the string, not the null terminator.

	// len - 1 because although there are 14 characters, the 14th character is indexed at 13.


	cout << endl;

	cout << "start :" << &start;
	cout << "  " << "end: " << &end << endl;


	while (start < end)
	{

		// swap chars
		t = *start;
		*start = *end;
		*end = t;

		// advance pointers
		start++;
		end--;
	}


	cout << "Reversed: " << str << endl;

}

