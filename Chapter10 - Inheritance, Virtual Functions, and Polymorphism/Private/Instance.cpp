// A simple class hierarchy
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class twoDShape {
public:
	double width;
	double height;

	void showDim() {
		std::cout << "Width and height are " << width << " and " << height << "\n";
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
}