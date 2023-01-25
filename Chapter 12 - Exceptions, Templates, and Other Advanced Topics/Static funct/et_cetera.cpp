// Demonstrate a static member function.

#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>

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

	static int numObjects() {
		return count;
	}
};

int main() {
	Test a, b, c;

	std::cout << "There are now " << Test::numObjects << " in existence. \n\n";

	Test* p = new Test();
}