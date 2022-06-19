// Incrementing and decrementing an object pointer.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

class P_example {
	int num;

public:
	void set_num(int val) {
		num = val;
	}

	void show_num() {
		printf("%d \n", num);
	}
};

int main() {
	P_example objectives[2];
	P_example *p;

	objectives[0] = P_example();
	objectives[0].set_num(10);

	p = &objectives[0];

}
