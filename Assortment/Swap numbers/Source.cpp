#include <iostream>
using namespace std;

void swap(int* c, int* d);

int main() {

	int a = 1, b = 2;

	swap(&a, &b);

	cout << "a is " << a << " while b is " << b << endl;
}

void swap(int* c, int* d) {

	*c = *c ^ *d;
	*d = *c ^ *d;
	*c = *c ^ *d;

}