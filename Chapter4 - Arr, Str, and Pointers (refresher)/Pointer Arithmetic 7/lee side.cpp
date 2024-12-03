#include <iostream>
using namespace std;

int main() {

	int *i, j[10];

	double *f, g[10];

	int x;

	i = j;
	f = g;

	for (x = 0; x < 10; x++)
	{
		// When using a pointer in a cout statement, its address is automatically displayed in
		// the addressing format.
		cout << i + x << ' ' << f + x << '\n';
	}

	cout << "=====================================\n";

	for ( x = 0; x < 10; x++)
	{
		// For most 32-bit compilers, i will increase by 4 bytes and f will increase by 8 bytes
		// because C uses 4 bytes to encode an integer and 8 bytes to encode a double. 
		printf("%p %p \n", i + x, f + x);
	}

	cout << "=====================================\n";

	for (x = 0; x < 10; x++)
	{
		// Directly use array name.
		printf("%p %p \n", j + x, g + x);
	}

}