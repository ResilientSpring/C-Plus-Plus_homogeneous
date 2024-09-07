#include <iostream>
using namespace std;

class ThreeD {

	int x, y, z;  // 3-D coordinates

public:

	ThreeD() {

		x = y = z = 0;
	}

	ThreeD(int i, int j, int k) {
		x = i;
		y = j;
		z = k;
	}

	// Overload the plus sign.
	ThreeD operator+(ThreeD op2) {  // Overload '+'

		ThreeD temp;

		// These are integer additions and the + remains its original meaning relative to them.
		temp.x = x + op2.x;
		temp.y = y + op2.y;
		temp.z = z + op2.z;

		return temp;  // Return a new object. Leave arguments unchanged. 
	}

	// Overload assignment.
	ThreeD operator=(ThreeD op2) {	// Overload '=' for ThreeD.

		// These are integer assignments and the '=' retains its original meaning relative to 
		// them. 
		x = op2.x;
		y = op2.y;
		z = op2.z;

		return *this;  // Return the modified object.

	}

	// The operator that you are overloading is substituted for the '-', 
	// and type is the type of value returned.
	ThreeD operator-(ThreeD op2) {

		return ThreeD();

	}

	// Show X, Y, Z coordinates.
	void show() {

		cout << x << ", ";
		cout << y << ", ";
		cout << z << "\n";
	}
};


int main() {

	ThreeD a(1, 2, 3), b(10, 10, 10), c;

	cout << "Original value of a: ";
	a.show();
	cout << "Original value of b: ";
	b.show();

	cout << "\n";

	c = a + b;  // add a and b together
	cout << "Value of c after c = a b: ";
	c.show();

	cout << "\n";

	c = a + b + c;  // add a, b and c together
	cout << "Value of c after c = b = a: ";
	c.show();

	cout << "\n";

	c = b = a;  // demonstrate multiple assignment.
	cout << "value of c after c = b = a: ";
	c.show();
	cout << "Value of b after c = b = a: ";
	b.show();

}