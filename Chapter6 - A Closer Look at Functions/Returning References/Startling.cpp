// Returning a reference.

#include <iostream>
using namespace std;

double& f();  // Return a reference.  Here, f() returns a reference to a double.

double val = 100.0;

int main() {
	
	double x;

	cout << f() << endl;  // display val's value.

	x = f();  // assign value of val to x

	cout << x << endl;   // display x's value.

	f() = 99.1;  // Change val's value.


}

// This function returns a reference to a double.
double& f() {
	return val;
}

