#include <iostream>
using namespace std;

int main() {

	double x, y;

	int *p;

	x = 123.23;

	p = reinterpret_pointer_cast<int *>(&x);

}