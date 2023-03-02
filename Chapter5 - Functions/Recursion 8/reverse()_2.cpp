// If this promgram works. then it would mean that void reverse() is not part of std library.

#include <iostream>

void reverse(char* s);

int main() {

	char str[] = "this is a test";

	reverse(str);

}

// Print string backwards.
void reverse(char *s) {

	if (*s)
		reverse(s + 1);
	else
		return;


	std::cout << *s;
}
