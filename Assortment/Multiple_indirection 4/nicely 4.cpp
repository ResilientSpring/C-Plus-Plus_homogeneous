#include <iostream>
using namespace std;

void LocateHandleBuffer(int* indirection, int** multiple_indirection);

int main() {

	int i = 8;

	int* single_indirection;

	single_indirection = &i;

	cout << "The value of single_indirection is " << single_indirection << "\n";

	cout << "The memory address of single_indirection is " << &single_indirection << "\n";

	LocateHandleBuffer(single_indirection, &single_indirection);

}

// int** indicates the memory address of a pointer.
void LocateHandleBuffer(int* indirection, int** multiple_indirection) {

	cout << "indirection is " << indirection << "\n";

	cout << "multiple_indirection is " << multiple_indirection << endl;

	cout << "The memory address of multiple_indirection is " << &multiple_indirection << endl;
}

void Comparison(int a, int b) {



}