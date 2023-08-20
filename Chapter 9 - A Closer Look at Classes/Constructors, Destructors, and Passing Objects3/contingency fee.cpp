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

	void set_value(int value) {
		this->value = value;
	}
};

// Call by reference.
void display(MyClass &ob) {

	cout << ob.get_value() << endl;

}

// Call by reference.
void change(MyClass &ob) {

	ob.set_value(100);

}


// There will be one call to the destructor of MyClass's instance.
int main() {

	MyClass a = MyClass(10);

	cout << "Before calling display(). " << endl;
	display(a);
	cout << "After display() returns. " << endl;

	change(a);
	cout << "After calling change(). \n";
	display(a);

	// The call is when "a" inside main() is destroyed when the program ends.
}