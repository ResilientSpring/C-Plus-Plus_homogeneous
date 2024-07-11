#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t = ch_to_be_rotated;

	for (int i = 0; i < n; i++)
	{
		t = t << 1;

		/*  If a bit shifts out, it will be in bit 8 of the integer t.

			If this is the case, put that bit on the right side.
		*/

		if (t & 256)
			t = t | 1;    // put a 1 on the right end.

	}

	return t;   // return the lower 8 bits.
}


int main() {



}