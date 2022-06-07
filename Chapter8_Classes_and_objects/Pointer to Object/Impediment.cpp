// A simple example using an object pointer.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cctype>
#include <string.h>

class P_example {
	int num;
public:
	void set_num(int value) {
		num = value;
	}

	void show_num() {
		printf("%d", num);
	}
};

int main() {
	P_example object, * pointer;

	object.set_num(1);
	object.show_num();

	pointer = &object;
	pointer->set_num(20);
	pointer->show_num();
}