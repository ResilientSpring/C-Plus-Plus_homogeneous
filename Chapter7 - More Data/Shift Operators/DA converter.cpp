// Example of bitshifting

#include <iostream>
using namespace std;

void show_binary(unsigned int decimal_number);

int main() {

	int i = 1, t;

	// shift left
	for (t = 0; t < 8; t++)
	{
		show_binary(i);

		i = 1 << 1;    // Left-shift i one position.

	}

	cout << "\n";

	// shift right
	for (t = 0; t < 8; t++) {

		i = i >> 1;    // Right-shift i one position.

		show_binary(i);   
	}

}

void show_binary(unsigned int decimal_number) {

	for (int i = 128; i > 0; i = i / 2)
		if (decimal_number & i)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}