// A simple class hierarchy
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class twoDShape {
	int number;
public:
	double width, height;

	void showDim() {
		cout << "Width and height are " << width << " and " << height << "\n";
	}
};

// If the access specifier is not used, then it is private by default if the derived class is a class.
class Triangle : twoDShape {
public:
	char style[20];

	double area() {

		// Triangle can refer to members of TwoDShape as if they were part of Triangle.
		cout << width * height / 2 << "\n";
	}

	void showStyle() {
		cout << "Triangle is " << style << "\n";
	}
};


int main() {

	Triangle t1;

	// When the base class is inherited as private, 
	// then all public members of the base class become private members of the derived class.
	t1.width = 4.0;
	t1.height = 4.0;
	strcpy(t1.style, "isosceles");  // The style is accessible.

	std::cout << "Info for t1: \n";
	t1.showStyle();
	t1.showDim();  // Class twoDshape's public showDim() has become a private member of class Triangle.
	t1.area() ;

	std::cout << "\n";
	std::cout << "Info for t2:\n";
	t2.showStyle();
	t2.showDim();
	std::cout << "Area is " << t2.area() << "\n";  // area() is accessible.
}