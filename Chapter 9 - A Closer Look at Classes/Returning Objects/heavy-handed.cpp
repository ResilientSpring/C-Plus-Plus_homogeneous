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

		return o;

	}


	MyClass mkBigger2() {

		MyClass o(value * 3);

		// Visual Studio's C++ compiler does not remind me of returning an instance of class MyClass.

	}


	int get_value2() {
		// Visual Studio's C++ compiler does not remind me of returning an integer.
	}

};


void display(MyClass ob) {

	cout << ob.get_value() << endl;

}


int main() {

	cout << "Before constructing a. " << endl;
	MyClass a(10);
	cout << "After constructing a. " << endl << endl;

	cout << "Before call to display(). " << endl;
	display(a);
	cout << "After display() returns. " << endl << endl;

}