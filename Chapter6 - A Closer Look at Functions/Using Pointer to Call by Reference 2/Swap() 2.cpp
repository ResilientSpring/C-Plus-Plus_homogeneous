// Demonstrate the pointer version of swap().

#include <iostream>
using namespace std;

// Declare swap() using pointers.
void swap(int* x, int* y);

int main() {

	int i, j;

	i = 10;
	j = 20;

	cout << "Initial values of i and j: " << i << " " << j << endl;

	swap(&i, &j);

	cout << "Swapped values of i and j: " << i << " " << j << endl;

}


void swap(int* x, int* y) {

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}
