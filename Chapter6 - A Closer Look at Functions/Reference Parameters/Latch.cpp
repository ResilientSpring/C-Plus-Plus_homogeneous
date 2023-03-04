// Using a reference parameter.

#include <iostream>
using namespace std;

void f(int& i);

int main() {
	int val = 1;

	cout << "Old value for val: " << val << "\n";

	f(val);  // Pass address of val to f()

	cout << "New value for val: " << val << "\n";
}


void f(int &i) {

	// Assign a value to the variable referred to by i.
	i = 10;  // this modifies calling argument.

}

