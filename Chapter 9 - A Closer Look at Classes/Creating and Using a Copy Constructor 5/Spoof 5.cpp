/*

Copy constructor invoked when passing an object to a function.

*/

#include <iostream>
using namespace std;

class MyClass {

	int val;
	int copynumber;

public:

	MyClass(int i) {
		val = i;
		copynumber = 0;
		cout << "Inside normal constructor\n";
	}

	// Copy constructor Here, obj is a reference to an object that is being used to initialize another object.
	MyClass(const MyClass& obj) {

		val = obj.val;
		copynumber = obj.copynumber + 1;

		cout << "Inside copy constructor.\n";
	}

	~MyClass() {

		if (copynumber == 0)
			cout << "Destructing original.\n";
		else
			cout << "Destructing copy #" << copynumber << endl;

	}

	int getval() {
		return val;
	}

};


void display(MyClass ob) {

	cout << ob.getval() << endl;

}


int main() {

	MyClass a(10);

	cout << a.getval() << endl;

	MyClass b = a;

	cout << b.getval() << endl;

}