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

	TwoDShape(double width, double height) {
		this->width = width;
		this->height = height;
	}

//	TwoDShape(double x) {
//		width = height = x;
//	}

	TwoDShape(double x) {
		height = x;
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

	//	Triangle(const char* str, double width, double height) : TwoDShape(width, height) {
	//		strcpy(style, str);
	//	}

	Triangle(const char* str, double height) : TwoDShape(height) {
		strcpy(style, str);
	}

	Triangle(double x) : TwoDShape(x) {
		strcpy(style, "isosceles");
	}

	double area() {

		return getWidth() * getHeight() / 2;

	}

	void showStyle() {
		cout << "Triangle is " << style << endl;
	}
};

class ColorTriangle : public Triangle {

	char color[20];

public:
	//	ColorTriangle(const char* clr, const char* style, double w, double h) : Triangle(style, w, h) {
	//		strcpy(color, clr);
	//	}

	ColorTriangle(const char* clr, const char* style, double h) : Triangle(style, h) {
		strcpy(color, clr);
	}

	void showColor() {

		cout << "Color is " << color << endl;

	}

};

int main() {

	//	ColorTriangle t1("Blue", "right", 8.0, 12.0);
	//	ColorTriangle t2("Red", "isosceles", 2.0, 2.0);

	ColorTriangle t3("Blue", "right", 8.0);
	ColorTriangle t4("Red", "isosceles", 2.0);

	cout << "Info for t3:\n";
	t3.showStyle();
	t3.showDim();
	t3.showColor();
	cout << "Area is " << t3.area() << endl;

	cout << endl;

	cout << "Info for t4: \n";
	t4.showStyle();
	t4.showDim();
	t4.showColor();
	cout << "Area is " << t4.area() << endl;

}