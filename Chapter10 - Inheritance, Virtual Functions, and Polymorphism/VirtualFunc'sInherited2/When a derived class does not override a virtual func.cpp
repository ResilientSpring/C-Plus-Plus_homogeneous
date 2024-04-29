#include <iostream>
using namespace std;

class B {

public:

	// Without declaring a virtual function.
	void who() {
		cout << "Base\n";
	}

};

class D1 : public B {

public:

	// redefine who() for D1
	void who() {

		cout << "First derivation\n";

	}

};

// Derive from D1, not B.
class D2 : public B {

	// who() not defined.
};

int main() {

	B* p;

	D2 d2;

	p = &d2;

	p->who();

}