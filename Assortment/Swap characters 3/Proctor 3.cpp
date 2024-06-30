#include <iostream>
using namespace std;

void swapper(char* c, char* d);

int main() {

	char a[] = "err on the side of caution.";
	char b[] = "wishful thinking";

	printf("The content of the 'a' array of characters: %c \n", a);

	printf("The content of the 'a' array of characters: %s \n", a);
	printf("The content of the 'b' array of characters: %s \n", b);

	swapper(a, b);
}


void swapper(char* c, char* d) {

	for (int i = 0; i < strlen(); i++)
	{

	}

	c = c ^ d;
	d = c ^ d;
	c = c ^ d;

}


// References:
// 1. 
