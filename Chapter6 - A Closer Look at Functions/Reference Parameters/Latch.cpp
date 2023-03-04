// Using a reference parameter.

#include <iostream>
using namespace std;

void f(int& i);

int main() {

}


void f(int &i) {

	// Assign a value to the variable reffered to by i.
	i = 10;  // this modifies calling argument.

}

