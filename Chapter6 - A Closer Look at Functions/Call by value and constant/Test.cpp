// Test to see whether intger is a constant by default?

#include <iostream>
using namespace std;

int reciprocal(int *x);

int main() {

	int t = 10;

	cout << "Reciprocal of 10 is " << reciprocal(&t) << "\n";

	cout << "Value of t is still: " << t << "\n";

	return 0;
}


int reciprocal(int *x) {

	*x = 1 / *x;

	return *x;
}