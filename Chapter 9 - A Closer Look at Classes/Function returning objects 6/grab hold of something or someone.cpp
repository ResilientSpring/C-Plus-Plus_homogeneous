// Returning objects.

#include <iostream>
using namespace std;

class MyClass {

public:

	int value;

	MyClass(int value) {

		this->value = value;

		cout << "Inside constructor\n";
	}


	~MyClass() {
		cout << "Destructing\n";
	}


	int getValue() {

		return value;

	}

	// Return an object.
	MyClass mkBigger() {

		MyClass o = MyClass(value * 2);

		return o;
	}
};


void display(MyClass ob) {

	cout << ob.getValue() << endl;

}


int main() {

	cout << "Before constructing a.\n";

	MyClass a = MyClass(10);

	cout << "After constructing a. \n\n";

	///////////////////////////////////////

	cout << "Before call to display(). \n";

	display(a);

	cout << "After display() returns. \n\n";

	////////////////////////////////////////

	cout << "Before call to mkBigger(). \n";

	a = a.mkBigger();

	cout << "After mkBigger() returns. \n\n";

	/////////////////////////////////////////

	cout << "Before the second call to display(). \n";

	display(a);

	cout << "After display() returns. \n\n";

}