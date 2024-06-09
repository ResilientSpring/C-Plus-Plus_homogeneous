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