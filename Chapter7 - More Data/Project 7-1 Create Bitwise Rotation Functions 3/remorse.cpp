#include <iostream>
using namespace std;

unsigned char lrotate(unsigned char ch_to_be_rotated, int n) {

	unsigned int t = ch_to_be_rotated;

	t <<= n;

	if (t & 256)
		t = t | 1;

	return t; 
}


int main() {



}


void show_binary(unsigned int u) {

	for (int i = 128; i > 0; i = i / 2) {

		

	}

}

// References:
// 1. 