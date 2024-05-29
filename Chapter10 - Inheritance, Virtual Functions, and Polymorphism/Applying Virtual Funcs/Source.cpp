#include <iostream>
#include <cstring>
using namespace std;

class TwoDShape {

	double width;
	double height;

	char name[20];

public:

	TwoDShape() {

		width = height = 0.0;
		strcpy(name, "unknown");
	}

	TwoDShape(double w, double h, char* n) {
		width = w;
		height = h;
		strcpy(name, n);
	}

};


