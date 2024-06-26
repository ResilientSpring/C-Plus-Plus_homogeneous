#include <iostream>
using namespace std;

void show_binary(unsigned int decimal_number);

int main() {

	int target = 192;

	for (int i = 0; i < 8; i++)
	{
		show_binary(target);

		target = target << 1;
	}

	cout << "\n";

}

void show_binary(unsigned int decimal_number) {

	for (int i = 128; i > 0; i = i / 2)
		if (decimal_number & i)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}