#include <iostream>
using namespace std;

int main() {

	int x, *p, **q;

	x = 10;

	p = &x;  // Assign p the address of x.

	q = &p;  // Assign q the address of p.

	cout << **q; 

}