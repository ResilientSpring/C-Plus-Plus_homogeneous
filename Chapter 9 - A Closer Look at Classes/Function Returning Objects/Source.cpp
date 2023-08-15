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
};

