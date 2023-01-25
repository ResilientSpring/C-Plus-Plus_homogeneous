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
		cout << "Constructing object " << endl;
	}
};