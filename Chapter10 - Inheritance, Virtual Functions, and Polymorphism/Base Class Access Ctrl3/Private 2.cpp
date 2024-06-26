#include <iostream>
using namespace std;

class B {
	int a, b;
public:
	void set(int a, int b) {

		this->a = a;
		this->b = b;
	}

	void show() {
		cout << a << " " << b << "\n";
	}
};

// When the base class is inherited as private, 
// then all public members of the base class become private members of the derived class.
class D : private B {

	int k;

public:

	D(int k) {
		this->k = k;
	}

	void show_k() {
		cout << k << endl;
	}

	// i = 10;  // Error! i is private to B and access is not allowed.
};

int main() {

	D ob(3);

	ob.set(1, 2);  // Cannot access the member of base class through D.
	ob.show();     // Cannot access the member of base class through D.

	ob.show_k();   // uses member of derived class.

}