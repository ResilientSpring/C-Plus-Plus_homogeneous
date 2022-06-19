// Incrementing and decrementing an object pointer.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cctype>
#include <iomanip>

class P_example {
	int num;

public:
	void set_num(int val) {
		num = val;
	}

	void show_num() {
		printf("%d\n", num);
	}
};

int main() {
	P_example objectives[2], *p;

	objectives[0].set_num(10);   // Access objects directly.
	objectives[1].set_num(20);   

	p = &objectives[0];   // obtain pointer to the first element.
	p->show_num();        // Show value at objetives[0] using pointer.
	p++;                  // Advance to next object.

}