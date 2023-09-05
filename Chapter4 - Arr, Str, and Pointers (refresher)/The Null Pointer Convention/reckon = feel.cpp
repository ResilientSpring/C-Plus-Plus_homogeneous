#include <iostream>
using namespace std;

int main() {

	float *p = 0;  // p is now a null pointer

	// To check for a null pointer, use an if statement:
	if (p) {

		cout << "p is not null" << endl;

	}

	if (!p) {

		cout << "p is null" << endl;
	}

}