#include <iostream>
using namespace std;

int main() {

	// In a declaration statement,  

	int x;

	// preceding a variable name with a *causes that variable to be a pointer.

	int *p;  // A pointer is a variable that can hold a memory address of a variable.


	// preceding a variable name with ** causes that variable to be a pointer to a pointer.
	
	int **q;  // (A pointer to a pointer is a variable that can hold a memory address of a pointer.)

	// ----- End of declaration statements.

	x = 10;

	p = &x;

	q = &p;

	cout << *q << endl;

	cout << **q << endl;
}