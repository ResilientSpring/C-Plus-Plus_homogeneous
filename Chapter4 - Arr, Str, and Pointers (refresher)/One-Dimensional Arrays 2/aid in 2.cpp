#include <iostream>
using namespace std;

int main() {

	int sample[10];  // An array that can catch hold of 10 integers.

	for (int t = 0; t < 10; t++) {

		sample[t] = t;

		cout << "This is sample[" << t << "]: " << sample[t] << endl;
	}

}