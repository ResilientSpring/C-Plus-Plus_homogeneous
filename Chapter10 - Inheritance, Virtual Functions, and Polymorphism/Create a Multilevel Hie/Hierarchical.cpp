// A multilevel hierarchy.
#include <iostream>
#include <cstring>
using namespace std;

class TwoDShape {

	double width;
	double height;

public:

	TwoDShape() {
		width = height = 0.0;
	}

	TwoDShape(double w, double h) {
		width = w;
		height = h;
	}

	TwoDShape(double x) {
		width = height = x;
	}

	void showDim() {

		cout << "Width and height are " << width << " and " << height << "\n";

	}

	double getWidth() { return width; }
	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) {
		height = h;
	}

};

class Triangle : public TwoDShape {
	char style[20];  // now private

public:
	Triangle() {

		strcpy(style, "unknown");

	}

	Triangle(char* str, double w, double h) : TwoDShape(w, h) {
		strcpy(style, str);
	}

	Triangle(double x) : TwoDShape(x) {
		strcpy(style, "isosceles");
	}
};

int main() {



}