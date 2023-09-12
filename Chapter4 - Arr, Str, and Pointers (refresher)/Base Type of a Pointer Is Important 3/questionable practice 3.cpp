// This program will not work right.
#include <iostream>
using namespace std;

int main() {

	int x = 123;
	double y, *p;

	p = (double *) &x;   // Use cast to assign int * to double * ;

	y = *p;      // What will this do?
	cout << y;   // What will this print?
}