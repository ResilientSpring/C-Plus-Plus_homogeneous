#include <iostream>
using namespace std;

int main() {
	// let p1 be an int pointer with a current value of 2000.
	int *p1;

	*p1 = 2000;

	p1++;

	cout << *p1;
}