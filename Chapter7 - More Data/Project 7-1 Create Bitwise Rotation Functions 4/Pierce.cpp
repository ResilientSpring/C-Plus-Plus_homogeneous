#include <iostream>
using namespace std;

void show_binary(unsigned int u);

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

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

	return t;   // return the lower 8 bits.  (An unsigned char takes up a byte. [2])
}


int main() {

	char ch = 'T';

	printf("Original value in binary: \n");
	show_binary(ch);

	printf("Rotating left 8 times:\n");
	ch = lrotate(ch, 8);
	printf("%c \n", ch);

	printf("Rotating left 7 times:\n");
	ch = lrotate(ch, 7);
	printf("%c \n", ch);

	printf("Rotating left 6 times:\n");
	ch = lrotate(ch, 6);
	printf("%c \n", ch);

	printf("Rotating left 9 times:\n");
	ch = lrotate(ch, 9);
	printf("%c \n", ch);

	printf("Rotating left 10 times: \n");
	ch = lrotate(ch, 10);
	printf("%c \n", ch);


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