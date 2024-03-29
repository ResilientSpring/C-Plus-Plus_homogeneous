#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class TwoDShape {

	double width;
	double height;

public:

	TwoDShape(double width, double height) {
		this->width = width;
		this->height = height;
	}

	void showDim() {

		cout << "width and height are " << width << " and " << height << endl;

	}

	// accessor functions 
	double getWidth() {
		return width;
	}

	double getHeight() {
		return height;
	}

	void setWidght(double width) {
		this->width = width;
	}

	void setHeight(double height) {
		this->height = height;
	}
};

class Triangle : public TwoDShape {

	char style[20];

public:

	// When a base class has a non-default constructor, the derived class must explicitly call it  
	// to initialize the base class portion of a Triangle object.
	Triangle(const char* str) {  
		strcpy(style, str);
	}

	void showStyle() {
		cout << "Triangle is " << style << "\n";
	}
};


int main() {

	Triangle t1("isosceles", 4.0, 4.0);
	Triangle t2("right", 8.0, 12.0);

	cout << "Info for t1: \n";
	t1.showStyle();
	t1.showDim();
	cout << "Area is " << t1.area() << endl;

	cout << endl;
	cout << "Info for t2: \n";
	t2.showStyle();
	t2.showDim();
	cout << "Area is " << t2.area() << endl;

}