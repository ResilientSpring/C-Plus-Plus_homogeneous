// Removing the override of area() from the Triangle class.

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

	// Constructor with three parameeters.
	Triangle(const char* str, double w, double h) : TwoDShape(w, h, "triangle") {

		strcpy(style, str);

	}

	// Construct an isosceles triangle.
	Triangle(double X) : TwoDShape(X, "triangle") {

		strcpy(style, "isosceles");

	}

	// This now overrides area() declared in TwoDShape.
	//double area() {

	//	return getWidth() * getHeight() / 2;

	//}

	void showStyle() {

		printf("Triangle is %s.\n", style);

	}
};

// A derived class of TwoDShape for rectangles.
class Rectangle : public TwoDShape {

public:

	// Construct a rectangle. 
	Rectangle(double w, double h) : TwoDShape(w, h, "rectangle") {

	}

	// Construct a square.
	Rectangle(double x) :TwoDShape(x, "rectangle") {

	}

	bool isSquare() {

		if (getWidth() == getHeight())
			return true;

		return false;
	}

	// This is another override of area().
	double area() {

		return getWidth() * getHeight();

	}

};

int main() {

	// declare an array of pointers to TwoDShape objects.
	TwoDShape* shapes[4];

	shapes[0] = &Triangle("right", 8.0, 12.0);  // Triangle's object's memory address does not exist. 
	shapes[1] = &Rectangle(10);
	shapes[2] = &Rectangle(10, 4);
	shapes[3] = &Triangle(7.0);   // Triangle does not override the virtual function in its base class.
	                              // So, Triangle has a virtual function inherited from its base class.
	                              // So, Triangle is per se an abstract class.
	                              // An abstract class cannot have its own object.
	for (int i = 0; i < 4; i++)
	{
		printf("object is %s.\n", shapes[i]->getName());

		printf("Area is %f.\n", shapes[i]->area());

		printf("\n");
	}
}