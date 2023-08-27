#include <iostream>
using namespace std;

int main() {

	// The general form of a one-dimensional array declaration is: type name[size];
	int *pi[10];

	int var = 8;

	// ----- End of declaration statements.

	pi[2] = &var;

	cout << *pi[2];  // * is an operator representing the value at the memory address of its operand. 

}