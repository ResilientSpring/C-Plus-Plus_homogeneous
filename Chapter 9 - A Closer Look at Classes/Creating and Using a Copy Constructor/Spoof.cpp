/*

Copy constructor invoked when passing an object to a function.

*/

#include <iostream>
using namespace std;

class MyClass {

	int val;
	int copynumber;

public:

	MyClass(int i) {
		val = i;
		copynumber = 0;
		cout << "Inside normal constructor\n";
	}

	MyClass() {


	}

};


int main() {

}