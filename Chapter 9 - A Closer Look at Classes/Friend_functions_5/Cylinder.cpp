#include <iostream>
using namespace std;

class Cylinder; // a forward declaration.

enum colors {red, green, yellow};

class Cube {

	colors color;

public:

	Cube(colors c) {
		color = c;
	}

	friend bool sameColor(Cube x, Cylinder y);

};

class Cylinder {
	colors color;

public:
	Cylinder(colors c) {
		color = c;
	}

	friend bool sameColor(Cube x, Cylinder y);
};

bool sameColor(Cube x, Cylinder y) {
	if (x.color == y.color) return true;
	else return false;
}

int main() {

	Cube cube1(red);
	Cube cube2(green);
	Cylinder cy1(green);

	if (sameColor(cube1, cy1))
	{
		cout << "cube 1 and cy1 are the same color. \n";
	}

}