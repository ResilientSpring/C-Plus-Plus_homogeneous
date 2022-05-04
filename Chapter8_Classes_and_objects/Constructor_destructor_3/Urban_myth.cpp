// A simple constructor and destructor.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class MyClass {
public:
	int x;

	// Declare constructor and destructor.

	// Implement MyClass constructor.
	MyClass() {
		x = 10;
	}

	~MyClass();                                // Destructor
};

// Implement MyClass destructor.
MyClass::~MyClass() {
	cout << "Destructing...\n";
}

int main() {
	MyClass ob1;
	MyClass ob2;

	cout << ob1.x << " " << ob2.x << "\n";

	return 0;
}