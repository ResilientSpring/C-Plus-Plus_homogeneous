#include <iostream>
using namespace std;

void show_binary(unsigned int u);

int main() {

	show_binary(255);
	show_binary(252);
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

/*  if(252 & 128)
* 
    if(1111 1100 & 1000 0000)

	1111 1100
	1000 0000
  &------------
    1000 0000


*/