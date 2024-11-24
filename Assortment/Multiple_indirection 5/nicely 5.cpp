#include <iostream>
using namespace std;

void LocateHandleBuffer(int* indirection, int** multiple_indirection);
void Comparison(int* a, int* b);

int main() {

	int i = 8;

	int* single_indirection;

	single_indirection = &i;

	cout << "The value of single_indirection is " << single_indirection << "\n";

	cout << "The memory address of single_indirection is " << &single_indirection << "\n";

	LocateHandleBuffer(single_indirection, &single_indirection);

	void (*fp)(int* a, int* b);

	// Like array name, function name also returns the memory address of the function.
	fp = Comparison;

	fp(&i, &i);

	cout << "i is now " << i << endl;
}

// int** indicates the memory address of a pointer.
void LocateHandleBuffer(int* indirection, int** multiple_indirection) {

	cout << "indirection is " << indirection << "\n";

	cout << "multiple_indirection is " << multiple_indirection << endl;

	cout << "The memory address of multiple_indirection is " << &multiple_indirection << endl;
}

void Comparison(int* a, int* b) {

	int c;

	if (*a > *b)
		c = *a;
	else
		c = *b;

	*a = c * (*b);

}