// Pass a pointer to a function.
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

// f() takes an int * pointer as a parameter.
void f(int* j);    // f() declares a pointer parameter.

int main() {
	int i;
	int* p;

	p = &i;    // p now points to i

	f(p);      // pass a pointer.

	cout << i;

}

// f() receives a pointer to an int
void f(int* j) {
	*j = 100;       // variable pointed to by j is assigned 100.
}