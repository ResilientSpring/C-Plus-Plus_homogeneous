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

};

int main() {



}