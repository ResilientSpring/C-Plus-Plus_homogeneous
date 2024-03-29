// Pass an object to a function.

#include <iostream>
using namespace std;

class MyClass {

	int value;

public:

	MyClass(int value) {
		this->value = value;
	}


	int get_value() {
		return value;
	}

	void set_value(int value) {
		this->value = value;
	}

};


void display(MyClass ob) {

	// C++ creates a copy of ob.

	cout << ob.get_value() << endl;

	// C++ destroys the copy of ob.
}


void change(MyClass ob) {

	// C++ creates a copy of ob.

	ob.set_value(100);

	cout << "Value of ob inside: ";

	display(ob);

	// C++ destroys the copy of ob.
}



int main() {

	MyClass a(10);

	cout << "Value of a before calling change(): ";
	display(a);   // Pass a MyClass object to display().

	change(a);    // Pass a MyClass object to change().
	cout << "Value of a after calling change(): ";
	display(a);

}

// Unlike Java who automatically passes class objects to functions by reference, freeing programmers from
// thinking about pointers, C++ gives programmers a choice between call-by-value or call-by-reference for 
// class objects.