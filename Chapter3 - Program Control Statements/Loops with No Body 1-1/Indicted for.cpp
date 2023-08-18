// The body of a for loop can be empty.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int sum = 0;

	// sum the numbers from 1 through 10
	for (int i = 1; i <= 10; i++) {

		sum = sum + i;

	}

	cout << "Sum is " << sum;
}