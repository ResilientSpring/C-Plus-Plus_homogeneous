#include <stdio.h>

void show_binary(int decimal_number);
void show_binary_2(int decimal_number);

int main() {

	int test = 1024;

	show_binary_2(test);
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
	// & 1000 0000 0000 0000    (32768)
	//------------------------
	//   0 

	//   decimal_number, say, 26051
	//   0110 0101 1100 0011
	// & 0100 0000 0000 0000    (16384)
	//------------------------
	//    1 

	// Check bit by bit. Examine if the 1st highest bit is on, 2nd highest bit is set, and so on.
	for (int i = 32768; i > 0; i = i >> 1)
	{                // i > 0 because if the least bit is on, that bit stands for 1.


	//  if (decimal_number & i) is non-zero, meaning if bitwise AND finds the target bit is on 
		if (decimal_number & i) {

			printf("1");

		}
		else if (!(decimal_number & i)) {  // if bitwise AND finds the target bit is 0

			printf("0");

		}

	}

}
