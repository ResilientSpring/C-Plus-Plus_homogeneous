#include <iostream>
using namespace std;

void swap(int* a, int* b);

int main() {

	int a = 1, b = 2;

	swap(&a, &b);

	cout << "a is " << a << " while b is " << b << endl;
}

void swap(int* a, int* b) {

	int c = *a;
	int d = *b;

	c = c ^ d;
	d = c ^ d;
	c = c ^ d;

	*a = c;
	*b = d;

}