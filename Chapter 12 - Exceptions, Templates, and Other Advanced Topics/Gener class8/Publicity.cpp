// A simple generic class.

#include <iostream>
using namespace std;

template <class T>

/*
class Immediately_Below_template_declaration {

};

*/

class MyClass {

	T x, y;

public:

	MyClass(T x, T y) {
		this->x = x;
		this->y = y;
	}

	T division() {
		return x / y;
	}

};

int main() {

	MyClass<double> d_ob(10.0, 3.0);

	cout << "double division: " << d_ob.division() << endl;

	MyClass<int> i_ob(10, 3);

	cout << "integer division: " << i_ob.division() << endl;

}