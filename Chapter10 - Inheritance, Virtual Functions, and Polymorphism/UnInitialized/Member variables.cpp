// Add a constructor to triangle.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects.
class TwoDShape {

public:

	double width;
	double height;

	void showDim() {
		cout << "Width and height are " << width << " and " << height << "\n";
	}

	// accessor functions
	double getWidth() {
		return width;
	}

	double getHeight() {
		return height;
	}

	void setWidth(double w) {
		width = w;
	}

	void setHeight(double h) {
		height = h;
	}

};

// Triangle is derived from TwoDShape.
class Triangle : public TwoDShape {

	char style[20];  // now private.

public:

	// Constructor for Triangle.
	Triangle(const char* str, double w, double h) {

		// Initialize the base class portion.
		setWidth(w);
		setHeight(h);

		// Initialize the derived class portion.
		strcpy(style, str);

	}


	double area() {
		return getWidth() * getHeight() / 2;
	}

};

int main() {

	TwoDShape twoDshape;

	cout << twoDshape.height;
	
}
