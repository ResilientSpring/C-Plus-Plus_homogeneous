// Returning objects.

#include <iostream>
using namespace std;

class MyClass {

	int value;

public:

	// Normal constructor.
	MyClass(int value) {
		this->value = value;
		cout << "Inside constructor" << endl;
	}

	~MyClass() {
		cout << "Destructing." << endl;
	}

	int get_value() {
		return value;
	}

	// Return an object.
	MyClass mkBigger() {

		MyClass o(value * 2);

	}

};


int main() {


}