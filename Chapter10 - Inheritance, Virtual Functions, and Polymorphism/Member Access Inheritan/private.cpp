#include <iostream>
using namespace std;

class TwoDShape {

	double width;
	double height;

public:

	void showDim() {
		std::cout << "Width and height are " << width << " and " << height << "\n";
	}

};

class Triangle :public TwoDShape {

	char style[20];

	double area() {
		return width * height / 2;   // Error! Cannot access.
	}

	void showStyle() {
		cout << "Triangle is " << style << "\n";
	}
};

int main() {



}