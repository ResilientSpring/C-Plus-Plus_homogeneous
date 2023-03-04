 // Experiment to see whether integer and double are a constant by default.

#include <iostream>
using namespace std;

double reciprocal(double *x);

int main() {

	double t = 10.0;

	cout << "Reciprocal of 10.0 is " << reciprocal(&t) << "\n";

	cout << "Value of t is still: " << t << "\n";

	return 0;
}


double reciprocal(double *x) {

	*x = 1 / *x;        

	return *x;
}