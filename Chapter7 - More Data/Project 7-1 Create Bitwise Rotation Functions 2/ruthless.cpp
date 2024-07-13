#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t = ch_to_be_rotated;

	// A loop is established that performs the required number of rotations, one at a time.
	for (int i = 0; i < n; i++)
	{
		// The value of t is left-shifted one place, regardless of the required number of rotations.
		t <<= 1;  // Compound assignment. [1]

		if (t & 256)
			t = t | 1;    // put a 1 on the right end.

	}

	return t;   // return the lower 8 bits.
}


int main() {



}


// References:
// 1.  https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_assignment_operators