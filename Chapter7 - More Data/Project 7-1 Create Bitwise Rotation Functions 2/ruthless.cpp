#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t = ch_to_be_rotated;

	for (int i = 0; i < n; i++)
	{
		t <<= 1;  // Compound assignment [1]

		if (t & 256)
			t = t | 1;    // put a 1 on the right end.

	}

	return t;   // return the lower 8 bits.
}


int main() {



}


// References:
// 1.  https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_assignment_operators