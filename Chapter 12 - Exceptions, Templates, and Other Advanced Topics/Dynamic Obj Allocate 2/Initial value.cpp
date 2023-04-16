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

	~Rectangle() {
		cout << "Destructing " << width << " by " << height << " rectangle. \n";
	}

	void set(int w, int h) {
		width = w;
		height = h;
	}

	int area() {
		return width * height;
	}
};


int main() {

	Rectangle *p;

	try
	{
		p = new Rectangle[3];
	}
	catch (bad_alloc xa)
	{
		cout << "Allocation Failure \n";
		return 1;
	}

	cout << "\n";


}