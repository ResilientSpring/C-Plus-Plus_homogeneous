#include <stdio.h>

void show_binary(int decimal_number);
void show_binary_2(int decimal_number);

int main() {



}


void show_binary(int decimal_number) {

	// decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 1111 1111 1111 1111    (65535)
	//------------------------
	//   0110 

	// if (decimal_number & 65535) is non-zero
	if (decimal_number & 65535) {


	}

}

void show_binary_2(int decimal_number) {

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 1111 1111 1111 1111    (65535)
	//------------------------
	//   0110 

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{

	}

	// if (decimal_number & 65535) is non-zero
	if (decimal_number & 65535) {


	}

}