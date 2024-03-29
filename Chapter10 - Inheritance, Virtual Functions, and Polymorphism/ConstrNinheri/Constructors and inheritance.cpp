// Add a constructor to triangle.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects.
class TwoDShape {

	// these are private
	double width;
	double height;

public:
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
	Triangle(const char *str, double w, double h) {
		
		// Initialize the base class portion. (Initialize the TwoDShape portion of Triangle)
		setWidth(w);
		setHeight(h);

		// Initialize the derived class portion.
		strcpy(style, str);
		
	}


	double area() {
		return getWidth() * getHeight() / 2;
	}

	void showStyle() {

		cout << "Triangle is " << style << endl;

	}

};

int main() {
	
	TwoDShape parent = TwoDShape();

	Triangle t1 = Triangle("isosceles", 4.0, 4.0);
	Triangle t2("right", 8.0, 12.0);

	cout << "Info for t1:\n";
	t1.showStyle();
	t1.showDim();
	cout << "Area is " << t1.area() << "\n";

	cout << "\n";
	cout << "Info for t2: \n";
	t2.showStyle();
	t2.showDim();
	cout << "Area is " << t2.area() << endl;
}
