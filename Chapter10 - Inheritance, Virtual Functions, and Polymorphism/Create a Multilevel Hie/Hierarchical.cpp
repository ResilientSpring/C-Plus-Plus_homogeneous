// A multilevel hierarchy.
#define _CRT_SECURE_NO_WARNINGS
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
	ColorTriangle t2("Red", "isosceles", 2.0, 2.0);

	cout << "Info for t1:\n";
	t1.showStyle();
	t1.showDim();
	t1.showColor();
	cout << "Area is " << t1.area() << endl;

	cout << endl;

	cout << "Info for t2: \n";
	t2.showStyle();
	t2.showDim();
	t2.showColor();
	cout << "Area is " << t2.area() << endl;

}