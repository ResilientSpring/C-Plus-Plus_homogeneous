#include <stdio.h>
using namespace std;

class Abstract_TwoDShape {

	double width;
	double height;
	const char*  name;

public:

	Abstract_TwoDShape() {
		width = height = 0.0;
		name = "none";
	}

	Abstract_TwoDShape(double w, double h, const char* n) {
		width = w;
		height = h;
		name = n;
	}

	Abstract_TwoDShape(double x, const char* n) {
		width = height = x;
		name = n;
	}

	Abstract_TwoDShape(Abstract_TwoDShape& ob) {
		width = ob.width;
		height = ob.height;
		name = ob.name;
	}

	// Accessor methods for width and height. 
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

	const char* getName() {
		return name;
	}

	void showDim() {
		printf("Width and height are %.2f and %.2f.\n", width, height);
	}
};

int main() {



}