// Return a pointer.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

char* get_substring(char* substring, char* string);

int main() {

	char aString[19];
	char anotherString[] = "three";
	char *substring;

	strcpy(aString, "one two three four");

	substring = get_substring(anotherString, aString);

	cout << "substring found: " << substring;
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

