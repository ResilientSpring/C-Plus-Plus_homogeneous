#include <iostream>
using namespace std;

void show_binary(unsigned int u);

//                        unsigned char takes up 1 byte. [2]
unsigned char left_rotate(unsigned char ch_to_be_rotated, int n) {

	//  unsigned int takes up 4 bytes. [2]
	unsigned int t = ch_to_be_rotated;

	// A loop is established that performs the required number of rotations, one at a time.
	for (int i = 0; i < n; i++)
	{
		// The value of t is left-shifted one place, regardless of the required number of rotations.
		t <<= 1;  // Compound assignment. [1]

		// If the bit 8 after a left shift is 1, 
		if (t & 256)
			t = t | 1;    // then bit 0 is set to 1.

	}

	return t; // function's return type is unsigned char, so t will be converted into unsigned char.
}

unsigned char right_rotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t;

	t = ch_to_be_rotated;

	// First, move the value 8 bits higher.
	t = t << 8;

	for (int i = 0; i < n; i++) {

		t = t >> 1;

		// If a bit shifts out, it will be in bit 7 of the integer t. If this is the case, 
		// put that bit on the left side.
		if (t & 128)
			t = t | 32768;  // put a 1 on left end.

	}

	// Finally, move the result back to the lower 8 bits of t.
	t = t >> 8;

	return t;
}


int main() {


}

void show_binary(unsigned int u) {

	for (int i = 128; i > 0; i = i / 2) {


		// Either side of a bitwise operator is automatically converted into its binary representation.
		if (u & i) // Test if the bit 7, for example, is 1.
			printf("1");
		else
			printf("0");


	}

	printf("\n");
}


// References:
// 1.  https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_assignment_operators
// 2.  https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170