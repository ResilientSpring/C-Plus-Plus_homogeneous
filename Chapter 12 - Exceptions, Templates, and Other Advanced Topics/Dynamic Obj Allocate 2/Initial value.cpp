// Allocate an array of objects.

#include <iostream>
#include <new>
using namespace std;


class Rectangle {
	int width;
	int height;

public:
	Rectangle() {     // Add a parameterless constructor.

		width = height = 0;

		cout << "Constructing " << width << " by " << height << " rectangle. \n";
	}

	Rectangle(int w, int h) {
		width = w;
		height = h;

		cout << "Constructing " << width << " by " << height << " rectangle. \n";
	}
};


int main() {

}