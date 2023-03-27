// Allocate an object.

#include <iostream>
#include <new>
using namespace std;

class Rectangle {

	int width;
	int height;

public:

	Rectangle(int width, int height) {

		this->width = width;

		this->height = height;

		cout << "Constructing " << width << " by " << height << " rectangle.\n";

	}


	~Rectangle() {
		cout << "Destructing " << width << " by " << height << " rectangle. \n";
	}

	
	int area() {
		return width * height;
	}

};


int main() {
	
	Rectangle *p;



}