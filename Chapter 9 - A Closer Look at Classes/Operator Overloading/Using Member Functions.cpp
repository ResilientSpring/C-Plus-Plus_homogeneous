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
	ThreeD operator-(ThreeD op2);  // op1 is implied. 

	void show();
};

// Overload+.
ThreeD ThreeD::operator+(ThreeD op2) {

	ThreeD temp;

	temp.x = x + op2.x;  // These are integer additions
	temp.y = y + op2.y;  // and the + remains its original 
	temp.z = z + op2.z;  // meaning relative to them. 

	return temp;

}

int main() {



}