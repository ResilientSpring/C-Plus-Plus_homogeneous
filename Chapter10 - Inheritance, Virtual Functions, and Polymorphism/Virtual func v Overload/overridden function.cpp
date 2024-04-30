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

	// override who()
	void who() {

		cout << "First derivation\n";

	}

};

class D2 : public B {

public:

	// override who()
	void who() {

		cout << "Second derivation\n";

	}

};

class D3 : public D2 {
public:
	// override who()
	void who() {
		cout << "Third derivation\n";
	}
};


int main() {

	B base_obj;

	B* p;

	D1 D1_obj;
	D2 D2_obj;
	D3 D3_obj;

	p = &base_obj;

	p->who();

	p = &D1_obj;
	p->who();

	p = &D2_obj;
	p->who();

	cout << "-------------------\n";

	D1_obj.who();
	D2_obj.who();
	D3_obj.who();
}