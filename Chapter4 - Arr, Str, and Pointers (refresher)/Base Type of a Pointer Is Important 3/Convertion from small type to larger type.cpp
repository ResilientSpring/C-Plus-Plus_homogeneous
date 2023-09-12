// This program will not work right.
#include <iostream>
using namespace std;

int main() {

	int x, y;

	double *p;

	x = 123;
	p = (double *)&x;   // Use cast to assign double * to int *

	y = *p;      // What will this do?
	cout << y;   // What will this print?
}