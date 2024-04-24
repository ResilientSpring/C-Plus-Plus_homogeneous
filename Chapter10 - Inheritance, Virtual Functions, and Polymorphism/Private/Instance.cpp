// A simple class hierarchy
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

class twoDShape {
public:
	double width;
	double height;

	void showDim() {
		std::cout << "Width and height are " << width << " and " << height << "\n";
	}

};


int main() {

	twoDShape t1;

	t1.height;
	t1.width;
}