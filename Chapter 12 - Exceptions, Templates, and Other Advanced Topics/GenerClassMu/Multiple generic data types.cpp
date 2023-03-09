/* This example uses two generic data types in a class definition. */

#include <iostream>
using namespace std;

template <class T1, class T2>

class MyClass {

	T1 i;
	T2 j;

public:

	MyClass(T1 i, T2 j) {
		this->i = i;
		this->j = j;
	}

	void show() {
		cout << i << ' ' << j << '\n';
	}

};

int main() {

	MyClass<int, double> ob1(10, 0.23);

	MyClass<char, const char*> ob2('X', "This is a test");

	ob1.show();

	ob2.show();

}