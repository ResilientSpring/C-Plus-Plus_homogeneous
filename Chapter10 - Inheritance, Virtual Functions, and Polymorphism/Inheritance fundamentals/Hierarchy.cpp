// A simple class hierarchy
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

// Triangle is derived from TwoDShape. (Triangle inherits TwoDShape)
class Triangle : public twoDShape {
public:
	char style[20];

	double area() {

		// Triangle can refer to members of TwoDShape as if they were part of Triangle.
		return width * height / 2;    
	}

	void showStyle() {
		std::cout << "Triangle is " << style << "\n";
	}
};

int main() {

	Triangle t1;
	Triangle t2;

	// All members of Triangle are available to Triangle objects, even those inherited from TwoDShape.
	t1.width = 4.0;
	t1.height = 4.0;
	strcpy(t1.style, "isosceles");

	t2.width = 8.0;
	t2.height = 12.0;
	strcpy(t2.style, "right");

	std::cout << "Info for t1: \n";
	t1.showStyle();
	t1.showDim();
	std::cout << "Area is " << t1.area() << "\n";

	std::cout << "\n";
	std::cout << "Info for t2:\n";
	t2.showStyle();
	t2.showDim();
	std::cout << "Area is " << t2.area() << "\n";
}