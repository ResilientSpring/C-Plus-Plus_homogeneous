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

class Triangle : public TwoDShape {

	char style[20]; 

public:

	/*A default constructor. This automatically invokes the default constructor of TwoDShape*/
	Triangle() {
		strcpy(style, "unknown");
	}

	// Constructor with three parameters.
	Triangle(char* str, double w, double h) : TwoDShape(w, h, "triangle") {
		strcpy(style, str);
	}

	// Construct an isosce as triangle.
	Triangle(double x) : TwoDShape(x, "triangle") {
		strcpy(style, "isosceles");
	}

	// This now overrides area() declared in TwoDShape.
	double area() {
		return getWidth() * getHeight() / 2;
	}
};