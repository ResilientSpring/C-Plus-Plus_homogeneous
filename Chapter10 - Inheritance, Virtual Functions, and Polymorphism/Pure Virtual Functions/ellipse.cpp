#define _CRT_SECURE_NO_WARNINGS
// Use a pure virtual function.
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects.
class TwoDShape {

	// these are private
	double width;
	double height;

	// add a name field.
	char name[20];

public:

	// Default constructor. 
	TwoDShape() {
		width = height = 0.0;
		strcpy(name, "unknown");
	}

	// Constructor for TwoDShape.
	TwoDShape(double w, double h, char* n) {

		width = w;
		height = h;
		strcpy(name, n);
	}

	// Construct object with eual width and height.
	TwoDShape(double x, char* n) {
		width = height = x;
		strcpy(name, n);
	}

	void showDim() {
		
		printf("width and height are %f and %f.\n", width, height);

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

	char* getName() {
		return name;
	}

	// area() is now a pure virtual function.
	virtual double area() = 0;

};

// Triangle is derived from TwoDShape.
class Triangle : public TwoDShape {

	char style[20];   // now private.

public:

	// A default constructor. This automatically invokes the default constructor of TwoDShape.
	Triangle() {

		strcpy(style, "unknown");

	}
};

int main() {



}