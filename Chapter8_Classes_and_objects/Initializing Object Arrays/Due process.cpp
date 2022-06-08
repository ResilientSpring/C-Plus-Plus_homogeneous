// Initialize an array of objects 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

class MyClass {
	int x;
public:
	MyClass(int i) {
		x = i;
	}

	int get_x() {
		return x;
	}
};

int main() {
	MyClass objects[4];
}