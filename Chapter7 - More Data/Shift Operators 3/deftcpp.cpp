#include <iostream>
using namespace std;

void show_binary(unsigned int decimal_number);

int main() {

	int target = 192;

	for (int i = 0; i < 8; i++)
	{
		show_binary(target);

		target = target << 1;

		printf("192 after being left shift one bit has become %d \n\n", target);
	}

	cout << "\n";

	target = 192;

	for (int i = 0; i < 8; i++)
	{
		show_binary(target);

		target = target >> 1;

		printf("192 after being right shift one bit has become %d \n\n", target);
	}

	cout << endl;

	target = 3;

	// left shft bits for eight times.
	for (int i = 0; i < 8; i++)
	{
		show_binary(target);

		printf("%d after being left shift one bit", target);

		target = target << 1;

		printf(" has become %d \n", target);
	}

	cout << endl;
}

void show_binary(unsigned int decimal_number) {

	for (int i = 128; i > 0; i = i / 2)
		if (decimal_number & i)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}