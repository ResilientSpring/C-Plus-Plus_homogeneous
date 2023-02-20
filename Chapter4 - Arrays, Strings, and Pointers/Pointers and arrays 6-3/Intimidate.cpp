#include <iostream>
using namespace std;

int main() {
	// int num[80] = 2468;

	int num[80] = { 2, 4, 6, 8, 2468 };

	cout << "Original string: " << num << endl;

	// To access the value stored in the memory address
	cout << endl << "{";

	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		cout  << *(num + i) << " ";

	cout << "}" << endl;

	// Without parentheses surrounding *num + i, the compiler would first find the value pointed to by num (the
	// first location in the array) and then add i to it, because the * operation has a higher priority than 
	// the + operation.
	cout << endl << "{";

	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
		cout << *num + i << " ";

	cout << "}" << endl;
}
