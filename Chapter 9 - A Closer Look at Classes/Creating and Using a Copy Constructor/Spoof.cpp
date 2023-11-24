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

	// Copy constructor
	MyClass(const MyClass &ob) {

		val = ob.val;
		copynumber = ob.copynumber + 1;

		cout << "Inside copy constructor.\n";
	}

	~MyClass() {

		if (copynumber == 0)
			cout << "Destructing original.\n";
		else
			cout << "Destructing copy " << copynumber << endl;

	}

	int getval() {
		return val;
	}

};


int main() {

}