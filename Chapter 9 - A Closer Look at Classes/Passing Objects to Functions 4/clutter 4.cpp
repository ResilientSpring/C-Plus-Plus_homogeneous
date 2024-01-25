// Pass an object to a function.

#include <iostream>
using namespace std;

class MyClass {

	int value;

public:
	
	MyClass(int value) {
		this->value = value;
	}

	int get_value() { return value; }

	void set_value(int value) {
		this->value = value;
	}

};


void display(MyClass object) {    // display() takes a MyClass object as a parameter.

	cout << object.get_value() << "\n";

}


int main() {

	

}