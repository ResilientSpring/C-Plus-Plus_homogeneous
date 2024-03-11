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

};


int main() {



}