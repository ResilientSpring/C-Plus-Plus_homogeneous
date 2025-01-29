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
};

int main() {



}