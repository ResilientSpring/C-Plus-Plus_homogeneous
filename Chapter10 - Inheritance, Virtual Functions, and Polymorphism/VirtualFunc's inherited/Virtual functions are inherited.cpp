#include <iostream>
using namespace std;

class B {

public:

	virtual void who() {
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
class D2 : public D1 {

public:

	void who() {

		cout << "Second derivation\n";

	}

};

int main() {

	B* p;

	D2 d2;

	p = &d2;

	p->who();

}