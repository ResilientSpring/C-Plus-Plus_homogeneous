#include <iostream>
using namespace std;

void f(int* i);

int main() {
	int val = 1;

	cout << "Old value for val: " << val;

	f(&val);

	cout << "New value for val: " << val;
}


void f(int *i) {

	*i = 10;
}
