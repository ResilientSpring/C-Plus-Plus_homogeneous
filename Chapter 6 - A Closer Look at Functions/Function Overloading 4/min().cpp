// Create various versions of min().

#include <iostream>
using namespace std;

int main() {
	int i = 10, j = 32;


}

// min() for ints. Return the smallest value.
int min(int a, int b) {
	if (a < b)
		return a;
	else
		return b;
}

// min() for chars -- ignore case.
char min(char a, char b) {
	if (tolower(a) < tolower(b))
		return a;
	else
		return b;
}

/*
	min() for int pointers.
	Compare values and return the pointer to the smallest value.
*/
int* min(int* a, int* b) {
	if (*a < *b)
		// return *a;
		return a;
	else
		// return *b;
		return b;
}

