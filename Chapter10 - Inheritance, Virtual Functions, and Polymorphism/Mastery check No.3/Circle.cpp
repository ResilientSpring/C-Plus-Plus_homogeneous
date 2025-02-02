#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects. 
class TwoDShape {

	// these are private. 
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

	// Constructor for TwoDShape
	TwoDShape(double w, double h, const char* n) {
		width = w;
		height = h;
		strcpy(name, n);
	}

	// Construct object with equal width and height.
	TwoDShape(double x, const char* n) {
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

	// Add area() to TwoDShape and make it virtual.
	virtual double area() {
		cout << "Error: area() must be overridden.\n";
		return 0.0;
	}
};

class Circle : public TwoDShape {

	double diameter;
	double radius = diameter / 2;

public:

	void set_diameter(double diameter) {
		this->diameter = diameter;
	}

	Circle(double diameter) {

		this->diameter = diameter;

	}

	double area() {

		printf("The area of this circle is %.3f.\n", radius * radius * 3.1415926);

		return radius * radius * 3.1415926;
	}

};


int main() {

	TwoDShape* base_class_pointer;

	Circle circle(18.75);

	base_class_pointer = &circle;

	base_class_pointer->area();

}