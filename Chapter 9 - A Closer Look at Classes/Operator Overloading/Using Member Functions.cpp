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

	ThreeD operator+(ThreeD op2);  // op1 is implied.
	ThreeD operator=(ThreeD op2);
	ThreeD operator-(ThreeD op2);  // op1 is implied. 

	void show();
};

// Overload+.
ThreeD ThreeD::operator+(ThreeD op2) {

	ThreeD temp;

	// These are integer additions and the + remains its original meaning relative to them.
	temp.x = x + op2.x;  
	temp.y = y + op2.y;    
	temp.z = z + op2.z;  

	return temp;  // Return a new object. Leave arguments unchanged. 

}

// Overload assignment.
ThreeD ThreeD::operator=(ThreeD op2) {  // Overload '=' for ThreeD.

	// These are integer assignments and the '=' retains its original meaning relative to them. 
	x = op2.x;
	y = op2.y; 
	z = op2.z;

	return *this;  // Return the modified object.
}

ThreeD ThreeD::operator-(ThreeD op2)
{
	return ThreeD();
}

// Show X, Y, Z coordinates.
ThreeD ThreeD::show() {



}

int main() {



}