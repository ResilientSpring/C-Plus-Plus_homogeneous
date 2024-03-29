// Demonstrate a static member function.

#include <iostream>

class Test {
	static int count;

public:

	Test() {
		count++;
		std::cout << "Constructing object " << std::endl;
	}

	~Test() {
		std::cout << "Destroying object " << count << std::endl;

		count--;
	}

	// A static memeber function.
	static int numObjects() {
		return count;
	}
};

int Test::count;

int main() {
	Test a, b, c;

	std::cout << "There are now " << Test::numObjects << " in existence. \n\n";

	Test* p = new Test();

	std::cout << "After allocating a Test object, there are now " << Test::numObjects << " in existence.\n\n";


	delete p;

	std::cout << "After deleting an object, there are now " << a.numObjects() << " in existence. \n\n";
}