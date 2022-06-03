#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
	int *i, j[10];

	double *f, g[10];

	int x;

	i = j;
	f = g;

	for ( x = 0; x < 10; x++)
	{
		cout << i + x << ' ' << f + x << '\n';
	}

	return 0;

}