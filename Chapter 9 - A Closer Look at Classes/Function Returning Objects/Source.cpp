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



}