// Initialize an array of objects.
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

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
	MyClass objects[4] = { -1, -2, -3, -4 };

	for (int i = 0; i < 4; i++)
	{
		printf("objects[%d].get_x(): %d \n", i, objects[i].get_x());

	}
}