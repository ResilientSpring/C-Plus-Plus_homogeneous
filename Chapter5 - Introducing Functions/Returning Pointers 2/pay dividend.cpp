#include <iostream>
using namespace std;

// The function searches a string for a substring.
const char *get_substring(const char *substring, const char *string);

int main() {

	const char *substr;
	substr = get_substring("three", "one two three four");

	cout << "substring found: " << substr;

}


// Return "pointer to substring" or null if not found.
const char *get_substring(const char *substring, const char *string) {

	int t;
	const char *p, *p2, *start;

	for (t = 0; string[t]; t++) {

		p = &string[t];

		start = p;

		p2 = substring;

		while (*p2 &&  *p2 == *p)   // Check for substring
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