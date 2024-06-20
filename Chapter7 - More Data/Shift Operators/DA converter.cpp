// Example of bitshifting

#include <iostream>
using namespace std;

int main() {




}

void show_binary(unsigned int decimal_number) {

	for (int i = 128; i > 0; i = i / 2)
		if (decimal_number & i)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}