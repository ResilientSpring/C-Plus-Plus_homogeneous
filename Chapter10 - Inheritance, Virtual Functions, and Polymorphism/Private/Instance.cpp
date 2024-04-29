#include <iostream>
using namespace std;

class twoDShape {
public:
	double width;
	double height;

	void showDim() {
		cout << "Width and height are " << width << " and " << height << "\n";
	}
};

class Shape {
	double width, height;
public:
	void set(double width, double height) {
		this->width = width;
		this->height = height;
	}
};

int main() {
	twoDShape t1;
	t1.height = 2;
	t1.width = 3;

	Shape s1;
	s1.set(4, 5); // Shape's instance can't access Shape's private members.
}