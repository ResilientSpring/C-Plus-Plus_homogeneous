#include <iostream>
using namespace std;

void swap(int &c, int &d);

int main() {


	int a = 3, b = 4;

	swap(a, b);

	cout << "a is " << a << " while b is " << b << endl;

}

void swap(int &c, int &d) {

	int e;

	// encrypted message = message ^ key
	e = c ^ d;


}