#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t = ch_to_be_rotated;

	t <<= n;

	if (t & 256)
		t = t | 1;

	return t;   // return the lower 8 bits.
}


int main() {



}


// References:
// 1.  https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_assignment_operators