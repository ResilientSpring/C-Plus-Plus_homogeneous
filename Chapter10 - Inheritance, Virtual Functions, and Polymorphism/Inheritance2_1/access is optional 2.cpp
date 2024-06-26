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

// If the access specifier is not used, then it is private by default if the derived class is a class.
class Triangle : twoDShape {
public:
	char style[20];

	double area() {

		// Triangle can refer to members of TwoDShape as if they were part of Triangle.
		std::cout << "Area is " << width * height / 2 << "\n";
	}

	void showStyle() {
		std::cout << "Triangle is " << style << "\n";
	}
};


int main() {

	Triangle t1;
	Triangle t2;

	// When the base class is inherited as private, 
	// then all public members of the base class become private members of the derived class.
	t1.width = 4.0;
	t1.height = 4.0;
	strcpy(t1.style, "isosceles");  

	t2.width = 8.0;
	t2.height = 12.0;
	strcpy(t2.style, "right");  // The style is accessible.

	std::cout << "Info for t1: \n";
	t1.showStyle();
	t1.showDim();  // Class twoDshape's public showDim() has become a private member of class Triangle.
	t1.area();

	std::cout << "\n";
	std::cout << "Info for t2:\n";
	t2.showStyle();
	t2.showDim();
    t2.area();  // area() is accessible.
}