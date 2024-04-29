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

	B base_obj;

	B* p;

	D1 D1_obj;
	D2 D2_obj;

	p = &D2_obj;

	p->who();

}