#include <iostream>
#include <math.h>
using namespace std;

void show_binary(unsigned int u);

//                    unsigned char takes up 1 byte.
unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

//  unsigned int takes up 4 bytes.
	unsigned int t = ch_to_be_rotated;

	t <<= n;

	for (int i = pow(2, 31); i > 0; i = i / 2) {



	}	

	if (t & 256)
		t = t | 1;

	return t;
}


int main() {

	char ch = 'T';
	printf("Original value in binary:\n");
	show_binary(ch);

	printf("Rotating left 8 times: \n");
	ch = lrotate(ch, 8);
	show_binary(ch);
}


void show_binary(unsigned int u) {

	for (int i = 128; i > 0; i = i / 2) {

		if (u & i)
			printf("1");
		else
			printf("0");

	}

	printf("\n");
}

// References:
// 1. 