// A short example that uses a virtual function.

#include <iostream>
using namespace std;

class B {

public:

	// Declare a virtual function.
	virtual void who() {  
		cout << "Base\n";
	}

};

class B1 : public B {

public:

	// redefine who() for B1
	void who() {

		cout << "First derivation\n";

	}

};


int main() {




}