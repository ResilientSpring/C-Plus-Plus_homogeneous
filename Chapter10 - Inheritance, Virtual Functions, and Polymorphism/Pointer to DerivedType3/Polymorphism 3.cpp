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

	B* p;  // pointer to object of type B
	B B_ob; // object of type B
	D D_ob;  // object of type D

	p = &B_ob;

	cout << p << endl;

	p = &D_ob;

	cout << p << endl;

	// Thus, in this example, p can be used to access all elements of D_ob that is inherited from B_ob.
	p->~B();

	// However, elements specific to D_ob cannot be accessed through p.
	// p->~D();
}