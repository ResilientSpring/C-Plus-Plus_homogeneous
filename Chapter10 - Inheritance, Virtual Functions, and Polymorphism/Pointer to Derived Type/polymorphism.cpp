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

	B* p;  // pointer to object of type B
	B B_ob; // object of type B
	D D_ob;  // object of type D

	p = &B_ob;

	cout << p << endl;
}