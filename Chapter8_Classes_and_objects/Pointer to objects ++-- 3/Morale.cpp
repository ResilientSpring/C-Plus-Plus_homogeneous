// Incrementing and decrementing an object pointer.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>

class P_example {
	int num;

public:
	void set_num(int val) {
		num = val;
	}

	void show_num() {
		printf("%d  \n", num);
	}
};

int main() {
	int array_of_integer[5];

	P_example array_of_P_example[2];
	
	array_of_P_example[0] = P_example();

	array_of_P_example[0].set_num(10);
	array_of_P_example[0].show_num();

	P_example *p;

	p = &array_of_P_example[0];

	p->show_num();
	
}