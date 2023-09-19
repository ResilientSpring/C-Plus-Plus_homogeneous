// This program will not work right.
#include <iostream>
using namespace std;

int main() {

	double x, y;

	int *p;

	x = 123.23;

	cout << "&x: " << &x << endl;


	p = (int *)&x;   // Use cast to assign double * to int *

	cout << "&x: " << &x << endl;
	cout << "p: " << p << endl;

	y = (double) *p;      // What will this do?
	cout << y;   // What will this print?
}