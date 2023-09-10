#include <iostream>
using namespace std;

int main() {

	int x, *p, **q;

	x = 10;

	p = &x;  // Assign p the address of x.

	q = &p;  // Assign q the address of p.

	cout << **q;  // prints the value of x. (Accessing x's value through q. Notice that two * are required.)

}