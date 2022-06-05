#include <stdio.h>

int main() {
	char* p[] = { "This is the first sentence.", "This is the second sentence."};

	for (int i = 0; i < 4; i++)
	{
		printf("%s \n", p[i]);

	}
}

// Source: <Modern C for Absolute Beginners> Chapter 12.7 Array of Pointers