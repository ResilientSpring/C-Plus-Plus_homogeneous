#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(255);
	show_binary(252);
	show_binary(240);
	show_binary(224);
	show_binary(192);
	show_binary(128);
	show_binary(127);
	show_binary(96);
	show_binary(84);
	show_binary(81);
	show_binary(72);
	show_binary(69);
	show_binary(64);
	show_binary(63);
	show_binary(62);
	show_binary(32);
	show_binary(27);
}

// Display the bits within a byte.
void show_binary(unsigned int u) {

	int t;

	for (t = 128; t > 0; t = t / 2)
		if (u & t)
			cout << "1 ";
		else
			cout << "0 ";

	cout << "\n";
}