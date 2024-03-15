#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
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

	TwoDShape(double x) {
		width = height = x;
	}

	TwoDShape(const TwoDShape& obj) {
		width = obj.width;
		height = obj.height;
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

	void setWidth(double width) {

		this->width = width;

	}

	void setHeight(double height) {
		this->height = height;
	}
};


class Triangle :public TwoDShape {

	char style[20];

public:

	Triangle() {
		strcpy(style, "unknown");
	}

	Triangle(const char* str, double width, double height) :TwoDShape(width, height) {
		strcpy(style, str);
	}

	Triangle(double x) :TwoDShape(x) {
		strcpy(style, "isosceles");
	}

	Triangle(Triangle& obj) : TwoDShape(obj.getWidth(), obj.getHeight()) {
		strcpy(style, obj.getStyle());

	}

	double area() {
		return getWidth() * getHeight() / 2;
	}

	void showStyle() {
		cout << "Triangle is " << style << endl;
	}

	char* getStyle() {
		return style;
	}
};


int main() {

	Triangle t1;
	Triangle t2("right", 8.0, 12.0);
	Triangle t3(4.0);
	Triangle t4 = t3;   // Copy constructor is used when copying in initialization at decleration.

	t1 = t2;  // Copy constructor is not used in assignment.

	cout << "Info for t1: " << endl;
	t1.showStyle();
	t1.showDim();
	cout << "Area is " << t1.area() << endl;

	cout << endl;

	cout << "Info for t2: " << endl;
	t2.showStyle();
	t2.showDim();
	cout << "Area is " << t2.area() << endl;

	cout << endl;

	cout << "Info for t3: \n";
	t3.showStyle();
	t3.showDim();
	cout << "Area is " << t3.area() << endl;

	cout << endl;

	cout << "Info for t4: \n";
	t4.showStyle();
	t4.showDim();
	cout << "Area is " << t4.area() << endl;

	cout << endl;
}