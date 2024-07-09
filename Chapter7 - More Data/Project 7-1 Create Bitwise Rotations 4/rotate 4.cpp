#include <iostream>
using namespace std;

// Left-rotate a byte n places.
unsigned char lrotate(unsigned char value, int n) {

	unsigned int t;  // An unsigned int is larger than a byte.

	t = value;  // A char is 8 bits in size.

	// A loop is established that performs the required number of rotations, one at a time.
	for (int i = 0; i < n; i++)
	{
		// If a char's bits shift left one position, the char's leftmost bit 
		// will be shifted to the bit 8 of the integer t.
		t = t << 1;

		// If the value of bit 8 is a 1, then bit 0 is set to 1.
		if (t & 256)
			t = t | 1;

		/*
								(t)
			 & 0001 0000 0000   (256)
			 --------------------------


		*/
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