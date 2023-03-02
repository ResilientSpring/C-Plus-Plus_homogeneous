// Print a string backwards using recursion.

#include <iostream>

void reverse(char* s);

int main() {

	char str[] = "this is a test";

	reverse(str);

}

// Print string backwards.
void reverse(char* s) {

	if (*s)
		reverse(s + 1);
	else
		return;

	printf("%s", *s);
}
