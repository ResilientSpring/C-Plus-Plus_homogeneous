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


int main() {



}