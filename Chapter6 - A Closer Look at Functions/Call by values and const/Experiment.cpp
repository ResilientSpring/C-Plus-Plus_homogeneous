// Changing a call-by-value parameter does not affect the argument.

#include <iostream>
using namespace std;

double reciprocal(double *x);

int main() {
	double t = 10.0;
	cout << "Reciprocal of 10.0 is " << reciprocal(&t) << "\n";

	cout << "Value of t is still: " << t << "\n";

	return 0;
}

// Return the reciprocal of a value.
double reciprocal(double *x) {

	*x = 1 / *x;        // This does not change the value of t inside main().

	return *x;
}