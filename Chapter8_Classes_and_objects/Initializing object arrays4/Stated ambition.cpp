#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cctype>
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
	MyClass objects[4][2] = MyClass[4][2];
}