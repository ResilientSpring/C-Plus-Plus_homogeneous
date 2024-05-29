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
		width = height - x;
		strcpy(name, n);
	}

};


