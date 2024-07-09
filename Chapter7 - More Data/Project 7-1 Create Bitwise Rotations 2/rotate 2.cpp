#include <iostream>
using namespace std;

// Left-rotate a byte n places.
unsigned char lrotate(unsigned char val, int n) {

	unsigned int t;

	t = val;

	for (int i = 0; i < n; i++)
	{
		// If a bit shifts left one position, it will be in bit 8 of the integer t.
		t = t << 1;

		if (t & 256)
			t = t | 1;


	}

	return t;   // return the lower 8 bits.
}

void show_binary(unsigned int u) {

	for (int t = 128; t > 0; t /= 2)
		if (t & u)
			printf("1 ");
		else
			printf("0 ");

	printf("\n");
}

int main() {



}