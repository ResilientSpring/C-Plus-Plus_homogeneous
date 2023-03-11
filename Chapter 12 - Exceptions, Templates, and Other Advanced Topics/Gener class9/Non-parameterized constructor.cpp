// A simple generic class.

#include <iostream>
using namespace std;

template <class T>

class MyClass {

	T x, y;

public:

	MyClass() {

	}

	T division() {
		return x / y;
	}

};

int main() {

	MyClass<double> d_ob;

	cout << "double division: " << d_ob.division() << endl;

	MyClass<int> i_ob;

	cout << "integer division: " << i_ob.division() << endl;

}