#include <iostream>
using namespace std;

// The function searches a string for a substring.
char *get_substring(char *substring, char *string);

int main() {



}


// Return "pointer to substring" or null if not found.
char *get_substring(char *substring, char *string) {

	int t;
	char *p, *p2, *start;

	for (t = 0; string[t]; t++) {

		p = &string[t];

		start = p;

		p2 = substring;

		while (*p2 && *p2 == *p)   // Check for substring
		{
			p++;
			p2++;
		}

		// If at end of p2 (i.e, substring), then a match has been found.
		if (!*p2)
			return start;   // Return the pointer to the beginning of substring.

	}

	return 0;  // no match found.

}