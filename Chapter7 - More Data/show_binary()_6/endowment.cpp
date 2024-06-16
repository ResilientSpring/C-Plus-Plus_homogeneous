#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(127);
	show_binary(127);
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

/*  if(191 & 128)
*
	if(1011 1111 & 1000 0000)

	1011 1111
	1000 0000
  &------------
	1000 0000


*/