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

}