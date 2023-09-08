#include <iostream>
using namespace std;

int main() {

	// In a declaration statement,  

	int x;

	// preceding a variable name with a * causes that variable to be a pointer.

	int *p;  // A pointer is a variable that can hold the memory address of another variable.


	// preceding a variable name with ** causes that variable to be a pointer to a pointer.

	int **q;  // A pointer to a pointer is a variable that can hold the memory address of another pointer.


	// ----- End of declaration statements.

	x = 10;

	p = &x;  // get address of total.  & is an operator standing for the memory address of its operand.

// 	q = &x;   a pointer to a pointer cannot hold the memory address of a variable. 

	q = &p;

	cout << q << endl;   // the memory address of the pointer to the pointer.

	cout << &q << endl;

	cout << *q << endl;  // * is an operator representing the value at the memory address of its operand.

	cout << **q << endl;

	cout << *(*q) << endl;
}

/*
  In the case of a normal pointer, the value of the pointer is the address of a value.
  In the case of a pointer to a pointer, the first pointer contains the address of the second pointer.
*/