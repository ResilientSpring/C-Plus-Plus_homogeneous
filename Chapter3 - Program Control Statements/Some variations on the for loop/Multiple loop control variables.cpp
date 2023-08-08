#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a = log(999998.7654321);
	double b = log2(100000000 + 0.01);

	double c = ceil(b);
	double d = floor(a);

	int i, j, k;

	for (i = 0, j = 10, k = -100; k > -91 ; ++i, --j, k++) {

		cout << a << " " << b << " " << c << " " << d << endl;

	}

}