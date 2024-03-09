#include <iostream>
using namespace std;

class TwoDShape {

	double width;
	double height;

public:

	void showDim() {
		std::cout << "Width and height are " << width << " and " << height << "\n";
	}

	// accessor functions
	double getWidth() {
		return width;
	}

	double getHeight() { return height; }
	void setWidth(double w) { width = w; }
	void setHeight(double h) { height = h; }

};

class Triangle : public TwoDShape {

public:
	char style[20];

	double area() { return getWidth(); }

	void showStyle() {
		cout << "Triangle is " << style << "\n";
	}

};

int main() {

	Triangle t1;
	Triangle t2;

}