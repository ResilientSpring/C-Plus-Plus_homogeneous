// Create an array of objects.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cctype>

class MyClass {
	int x;
public:
	void set_x(int i) {
		x = i;
	}

	int get_x() {
		return x;
	}
};

int main() {
	MyClass objects[4];   // Create an array of objects.

	int i;

	for ( i = 0; i < 4; i++)	
		objects[i].set_x(i);

	for (i = 0; i < 4; i++)
		printf("Objects[%d].get_x(): %d \n", i, objects[i].get_x());
	
}