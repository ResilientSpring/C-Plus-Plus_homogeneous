#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable (p) to be a pointer.
	
	int *p, num;

	// ----- End of declaration statements.

	p = &num;   // & is an operator standing for the memory address of its operand.

	*p = 100;   // * is an operator representing the value at the memory address of its operand.

	cout << num << ' ';

	(*p)++;

	cout << num << ' ';

	(*p)--;

	cout << num << '\n';

}