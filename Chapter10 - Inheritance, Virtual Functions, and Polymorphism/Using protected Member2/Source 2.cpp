#include <iostream>
using namespace std;

class B {

protected:
	int a, b;

public:
	void set(int a, int b) {
		this->a = a;
		this->b = b;
	}

	void show() {

		cout << a << " " << b << endl;

	}
};

class D : protected B {
	int k;
public:
	// D may access B's a and b
	void set_k() {
		k = a * b;
	}

	void show_k() {

		cout << k << "\n";

	}
};


int main() {

	D ob;
	ob.set(2, 3);  
	ob.show();     

	ob.set_k();
	ob.show_k();

}