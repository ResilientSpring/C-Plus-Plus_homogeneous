// Return a Pointer.

#include <iostream>
#include <cstring>
using namespace std;

char* get_substring(char* sub, char* str);

int main() {
	char* substring;

	char search[80];
	char search_for[80];

	strcpy(search, "one two three four");
	strcpy(search_for, "three");

	substring = get_substring(search_for, search);

	cout << "substring found: " << substring;
}


// Succeeding a function's return type with asterisk * causes the function to return 
// a pointer of that return type.
char* get_substring(char* sub, char* str) {  // get_substring() returns a char pointer.
	int t;
	char* p, * p2, * start;

	for (t = 0; str[t]; t++) {

		p = &str[t];  // Reset pointers

		start = p;

		p2 = sub;

		while (*p2 && *p2 == *p) {  // Check for substring
			p++;
			p2++;
		}

		// if at end of p2 (i.e., substring), then a match has been found.
		if (!*p2)
			return start;    // return pointer to the beginning of substring.
	}

	return 0; // no match found.
}

