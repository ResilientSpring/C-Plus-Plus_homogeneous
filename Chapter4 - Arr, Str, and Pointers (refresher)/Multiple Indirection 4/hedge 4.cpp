#include <iostream>
using namespace std;

int main() {

	int x;
	int *p;
	int **q; // Declared to be a pointer to a pointer.


	cout << x << " " << &x << endl;

	x = 10;
	p = &x;

	cout << p << endl;

}