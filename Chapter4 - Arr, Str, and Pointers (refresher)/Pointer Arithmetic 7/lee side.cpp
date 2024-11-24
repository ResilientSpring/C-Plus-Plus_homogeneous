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

	for ( x = 0; x < 10; x++)
	{
		printf("%p %p \n", )
	}

}