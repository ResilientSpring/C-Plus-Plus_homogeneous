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

//                         unsigned char takes up 1 byte. [2]
unsigned char right_rotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t;

	t = ch_to_be_rotated;

	// value must be shifted into the second byte of t so that bits being shifted off the right side
	// can be caught.
	t = t << 8;

	for (int i = 0; i < n; i++) {

		t = t >> 1;

		// Because the bit being shifted right moves to bit 7, let's check whether the bit 7 is a 1.
		if (t & 128)  // If bit 7 is 1,
			t = t | 32768;  // then we set bit 15 to 1.

	}

	// Once rotation is complete, the value must be shifted back into the low-order byte of t so that
	// the value can be returned. (function's return type is unsigned char.)
	t = t >> 8;

	return t;
}


int main() {

	char ch = 'T';

	printf("Original value in binary:\n");
	show_binary(ch);

	printf("Rotating right 8 times:\n");

	for (int i = 0; i < 8; i++) {

		ch = right_rotate(ch, 1);

	}

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