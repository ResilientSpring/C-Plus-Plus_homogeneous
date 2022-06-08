#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

class MyClass {
	int x, y;

public:
	MyClass(int i, int j) {
		x = i;
		y = j;
	}

	int get_x() {
		return x;
	}

	int get_y() {
		return y;
	}
};

int main() {

	MyClass objects[4][2] = { {MyClass(1, 2), MyClass(3, 4)}, {MyClass(5, 6), MyClass object(7, 8)}, };

}