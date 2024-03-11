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

	Triangle(const char* str, double width, double height) :TwoDShape(width, height) {  // Call TwoDShape constructor.
		strcpy(style, str);
	}
};


int main() {



}