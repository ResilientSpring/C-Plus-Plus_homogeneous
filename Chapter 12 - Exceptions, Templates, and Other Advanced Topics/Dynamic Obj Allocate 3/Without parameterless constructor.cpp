// Allocate an array of objects.

#include <iostream>
#include <new>
using namespace std;


class Rectangle {
	int width;
	int height;

public:
/*	Rectangle() {     // Add a parameterless constructor.

		width = height = 0;

		cout << "Constructing " << width << " by " << height << " rectangle. \n";
	}
*/
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

	p[0].set(3, 4);
	p[1].set(10, 8);
	p[2].set(5, 6);

	for (int i = 0; i < 3; i++)
	{
		cout << "Area is " << p[i].area() << endl;
	}

	cout << "\n";

	delete[] p;     // This calls the destructor for each object in the array.

}