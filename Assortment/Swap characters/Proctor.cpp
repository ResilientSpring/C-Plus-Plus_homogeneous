#include <iostream>
using namespace std;

void swapper(char &c, char &d);

int main() {

	char a[] = "err on the side of caution.";
	char b[] = "wishful thinking";

	printf("The content of the 'a' array of characters: %c \n", a);

	printf("The content of the 'a' array of characters: %s \n", a);  // [1]
	printf("The content of the 'b' array of characters: %s \n", b);

	swapper(a, b);
}


void swapper(char& c, char& d) {

	c = c ^ d;
	d = c ^ d;
	c = c ^ d;

}


// References:
// 1. https://stackoverflow.com/questions/50312194/how-to-print-a-char-array-in-c-through-printf
