#include <iostream>
using namespace std;

class B {
	int a, b;
public:
	void set(int a, int b) {

		this->a = a;
		this->b = b;
	}

};

class D : public B {

	int k;

public:

	D(int k) {
		this->k = k;
	}

	void show_k() {
		cout << k << endl;
	}
};

int main() {



}