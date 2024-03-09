#include <iostream>
using namespace std;

class TwoDShape {

public:
	double width;
	double height;

	void showDim() {
		std::cout << "Width and height are " << width << " and " << height << "\n";
	}

};

class Rectangle : public TwoDShape {

public:
	bool isSquare() {

		if (width == height) return true;
		return false;
	}

};

int main() {



}