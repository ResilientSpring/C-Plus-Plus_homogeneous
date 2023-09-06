#include <iostream>
using namespace std;

int main() {

	// In a declaration statement,  

	int x;

	// preceding a variable name with a *causes that variable to be a pointer.
	int *p;  // A pointer is an object that can contain a memory address.

	// preceding a variable name with ** causes that variable to be a pointer to a pointer.
	int **q;

	// ----- End of declaration statements.

	x = 10;

	p = &x;

	q = &p;

	cout << *q << endl;

	cout << **q << endl;
}