// Create various versions of the neg() function.

#include <iostream>
using namespace std;

int neg(int n);
double neg(double n);
long neg(long n);


int main() {
	cout << "neg(-10): " << neg(-10) << endl;
	cout << "neg(9L): " << neg(9L) << endl;
	cout << "neg(11.23): " << neg(11.23) << endl;
}

// neg() for int.
int neg(int n) {
	return -n;
}

// neg() for double.
double neg(double n) {
	return -n;
}

// neg() for long.
long neg(long n) {
	return -n;
}
