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

	double arcs() {

		// Triangle can refer to members of TwoDShape as if they were part of Triangle.
		return width * height / 2;    
	}

	void showStyle() {
		std::cout << "Triangle is " << style << "\n";
	}
};