#include <iostream>
using namespace std;

class B {

public:
	B() {
		cout << "Constructing base portion\n";
	}

	~B() {
		cout << "Destructing base portion\n";
	}

};

class D : public B {

public:
	D() {
		cout << "Constructing derived portion\n";
	}

	~D() {
		cout << "Destructing derived portion\n";
	}

};

int main() {

	D ob;

	// do nothing but construct and destruct ob

}