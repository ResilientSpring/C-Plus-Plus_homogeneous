#include <iostream>
using namespace std;

class B {

public:

	// Without dclaring a virtual function.
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

class D2 : public B {

public:

	// redefine who() for D2
	void who() {

		cout << "Second derivation\n";

	}

};


int main() {

	B base_obj;

	B* p;

	D1 D1_obj;
	D2 D2_obj;

	p = &base_obj;

	p->who();

	p = &D1_obj;
	p->who();

	p = &D2_obj;
	p->who();
}