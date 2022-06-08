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
	MyClass objects[4][2] = { {MyClass(1, 2), MyClass(3, 4)}, {MyClass(5, 6), MyClass(7, 8)}, 
								{MyClass(9, 10), MyClass(11, 12)}, {MyClass(13, 14), MyClass(15, 16)} };

	for (int i = 0; i < 4; i++)
	{
		printf("%d  ", objects[i][0].get_x());
		printf("%d  ", objects[i][0].get_y());

	}
}