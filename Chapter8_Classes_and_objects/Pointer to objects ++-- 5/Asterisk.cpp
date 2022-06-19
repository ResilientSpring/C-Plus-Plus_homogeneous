// Incrementing and decrementing an object pointer.
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
	int remiss[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	remiss[1] = 0;

	P_example objectives[] = { P_example(), P_example() };

	objectives[0].set_num(10);
	objectives[0].show_num();

	P_example* p;

	p = &objectives[0];

	p->show_num();

	objectives[1].set_num(20);
	objectives[1].show_num();

}