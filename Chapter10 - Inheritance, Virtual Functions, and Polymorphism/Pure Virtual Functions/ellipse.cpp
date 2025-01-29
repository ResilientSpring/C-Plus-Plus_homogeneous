// Use a pure virtual function.
#include <iostream>
#include <cstring>
using namespace std;

// A class for two-dimensional objects.
class TwoDShape {

	// these are private
	double width;
	double height;

	// add a name field.
	char name[20];

public:

	// Default constructor. 
	TwoDShape() {
		width = height = 0.0;
		strcpy(name, "unknown");
	}

};

int main() {



}