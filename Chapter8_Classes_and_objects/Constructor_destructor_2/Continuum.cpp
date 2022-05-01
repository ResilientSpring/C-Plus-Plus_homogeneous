// A simple constructor and destructor.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class MyClass {
public:
	int x;

	// Declare constructor and destructor.
	MyClass();                                 // Constructor
	~MyClass();                                // Destructor

};

// Implement MyClass constructor.
MyClass::MyClass() {
	x = 10;
}

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