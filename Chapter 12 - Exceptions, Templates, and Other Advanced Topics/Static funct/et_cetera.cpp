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


};