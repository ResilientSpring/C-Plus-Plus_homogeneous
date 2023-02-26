// Return a Pointer.

#include <iostream>
using namespace std;

char* get_substring(char* sub, char* str);

int main() {
	char *substring;

	substring = get_substring("three", "one two three four");

	cout << "substring found: " << substring;
}


// Succeeding a function's return type with asterisk * causes the function to return 
// a pointer of that return type.
char* get_substring(char *sub, char *str) {  // get_substring() returns a char pointer.
	int t;
	char *p, *p2, *start;

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

