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

int main() {



}