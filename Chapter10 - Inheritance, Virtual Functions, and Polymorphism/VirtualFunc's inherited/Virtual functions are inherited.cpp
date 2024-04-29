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
class D2 : public D1 {

public:

	// redefine who() for D2
	void who() {

		cout << "Second derivation\n";

	}

};

int main() {



}