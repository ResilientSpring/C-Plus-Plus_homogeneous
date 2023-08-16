// Returning objects.

#include <iostream>
using namespace std;

class MyClass {

	int val;

public:

	MyClass(int i) {
		val = i;
		cout << "Inside constructor\n";
	}


	~MyClass() {
		cout << "Destructing\n";
	}


	int getValue() {

		return val;

	}

	// Return an object.
	MyClass mkBigger() {

		MyClass o(val * 2);
		
		return o;
	}
};


void display(MyClass ob) {

	cout << ob.getValue() << endl;

}


int main() {

	cout << "Before constructing a.\n";

	MyClass a(10);

	cout << "After constructing a. \n\n";

	//////////////////////////////////////////

	cout << "Before call to display(). \n";

	display(a);

	cout << "After display() returns. \n\n";

	///////////////////////////////////////////

	cout << "Before call to mkBigger(). \n";

	a = a.mkBigger();

	cout << "After miBigger returns. \n\n";

	///////////////////////////////////////////

}