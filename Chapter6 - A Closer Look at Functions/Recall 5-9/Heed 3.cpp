// Return a pointer.

#include <iostream>
#include <cstring>
using namespace std;

char* get_substring(char* substring, char* string);

int main() {

	char aString[18];
	char anotherString[] = "three";
	const char* substring = "I like C++";

	strcpy(aString, "Like");
}

// In declaration, succeeding a function's return type with asterisk * causes the function to  
// return a pointer of that return type.
char* get_substring(char* substring, char* string) {

	// Return pointer to substring or null if not found.

	int t;
	char* p, * p2, * start;

	for (t = 0; string[t]; t++) {
		p = &string[t];           // Reset pointers.
		start = p;
		p2 = substring;

		while (*p2 && *p2 == *p) {      // Check for substring.
			p++;
			p2++;
		}

		// If at end of p2 (i.e., substring), then a match has been found.
		if (!*p2)
			return start;  // Return pointer to beginning of substring.
	}
}

