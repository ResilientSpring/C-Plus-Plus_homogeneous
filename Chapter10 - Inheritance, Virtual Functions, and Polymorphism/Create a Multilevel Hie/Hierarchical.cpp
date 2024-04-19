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

	Triangle(const char* str, double w, double h) : TwoDShape(w, h) {
		strcpy(style, str);
	}

	Triangle(double x) : TwoDShape(x) {
		strcpy(style, "isosceles");
	}

	double area(){

		return getWidth() * getHeight() / 2;
	
	}

	void showStyle() {
		cout << "Triangle is " << style << endl;
	}
};

class ColorTriangle : public Triangle {

	char color[20];

public:
	ColorTriangle(const char* clr, const char* style, double w, double h) : Triangle(style, w, h) {
		strcpy(color, clr);
	}

	void showColor() {

		cout << "Color is " << color << endl;

	}

};

int main() {

	ColorTriangle t1("Blue", "right", 8.0, 12.0);

}