// Function template example.

#include <iostream>
using namespace std;

// This is a function template.
// A generic function that exchanges the values of its arguments. 
template<class X> void swapargs(X a, X b) {  // Here, X is the generic data type.

	X temp;
	temp = a;
	a = b;
	b = temp;

}


int main() {
	int i = 10, j = 20;
	float x = 10.1, y = 23.3;
	char a = 'x', b = 'z';

	cout << "Original i, j: " << i << " " << j << endl;
	cout << "Original x, y: " << x << " " << y << endl;
	cout << "Original a, b: " << a << " " << b << endl;

	swapargs(i, j); // swap integers
	swapargs(x, y); // swap floats
	swapargs(a, b); // swap chars

	cout << "Swapped i, j: " << i << " " << j << endl;
	cout << "Swapped x, y: " << x << " " << y << endl;
	cout << "Swapped a, b: " << a << " " << b << endl;
}