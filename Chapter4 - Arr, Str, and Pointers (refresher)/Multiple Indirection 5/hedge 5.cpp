#include <iostream>
using namespace std;

int main() {

	// In a declaration statement, preceding a variable name with ** causes that variable to be 
	// a pointer to a pointer.
	int x, *p, **q;

	// ----- End of declaration statements.

	x = 10;

	p = &x;

	q = &p;

	cout << *q << endl;

	cout << 
}