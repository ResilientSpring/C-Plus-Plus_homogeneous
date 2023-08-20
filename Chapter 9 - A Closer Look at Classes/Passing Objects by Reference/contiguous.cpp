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


void display(MyClass &ob) {
	
	cout << ob.get_value() << endl;

}


int main() {



}