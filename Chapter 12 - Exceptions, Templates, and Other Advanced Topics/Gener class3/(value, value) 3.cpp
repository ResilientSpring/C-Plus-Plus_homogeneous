// A simple generic class.

#include <iostream>
using namespace std;

template <class T>

class MyClass {
	T x, y;

public:
	MyClass(T a, T b) {
		x = a;
		y = b;
	}

	T div() {
		return x / y;
	}

};


int main() {

	MyClass myClass = MyClass
}
