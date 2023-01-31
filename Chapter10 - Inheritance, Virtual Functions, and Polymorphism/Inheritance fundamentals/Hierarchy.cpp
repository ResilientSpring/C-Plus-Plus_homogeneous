// A simple class hierarchy
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