#include <iostream>
using namespace std;

void show_binary(unsigned int u);
void show_binary2(unsigned int u);

int main() {

	show_binary(65535);
	show_binary2(65535);

}

// Display the bits within a byte.
void show_binary(unsigned int u) {

	for (int t = 128; t > 0; t = t / 2)
		if (u & t)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}

void show_binary2(unsigned int u) {

	for (int t = 32768; t > 0; t = t / 2)
		if (u & t)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}