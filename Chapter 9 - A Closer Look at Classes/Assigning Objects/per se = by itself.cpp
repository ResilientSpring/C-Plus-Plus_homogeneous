// Demonstrate object assignment.

#include <iostream>
using namespace std;

class Test {
	int a, b;

public:

	void set_ab(int a, int b) {

		this->a = a;
		this->b = b;

	}

	void show_ab() {
		cout << "a is " << a << endl;
		cout << "b is " << b << endl;
	}


};


int main() {



}