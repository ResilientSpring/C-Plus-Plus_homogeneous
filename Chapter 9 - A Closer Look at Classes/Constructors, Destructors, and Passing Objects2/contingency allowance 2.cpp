// Constructors, destructors, and passing objects.

#include <iostream>
using namespace std;


class MyClass {

	int value;

public:

	MyClass(int value) {

		this->value = value;

		cout << "Inside constructor" << endl;
	}


	~MyClass() {

		cout << "Destructing" << endl;

	}

	int get_value() {
		return value;
	}

};


void display(MyClass ob) {

	cout << ob.get_value() << endl;

	// When the function terminates and the copy of the object used as an argument is destroyed, the 
	// destructor function is called.  This is necessary because the object has gone out of scope.
}


// There will be two calls to the destructor of MyClass's instance.
int main() {

	MyClass a = MyClass(10);

	cout << "Before calling display(). " << endl;

	// The first is when the parameter to display() goes out of scope.
	display(a);

	cout << "After display() returns. " << endl;

	// The second is when "a" inside main() is destroyed when the program ends.
}