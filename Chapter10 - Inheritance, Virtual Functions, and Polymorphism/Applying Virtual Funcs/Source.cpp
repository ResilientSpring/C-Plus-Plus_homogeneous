#include <iostream>
#include <cstring>
using namespace std;

class TwoDShape {

	double width;
	double height;

	char name[20];

public:

	// Default constructor.
	TwoDShape() {

		width = height = 0.0;
		strcpy(name, "unknown");
	}

	// Constructor for TwoDShape
	TwoDShape(double w, double h, char* n) {
		width = w;
		height = h;
		strcpy(name, n);
	}

	// Construct object with equal width and height.
	TwoDShape(double x, char* n) {
		width = height = x;
		strcpy(name, n);
	}

	void showDim() {
		cout << "Width and height are " << width << " and " << height << endl;
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
};


