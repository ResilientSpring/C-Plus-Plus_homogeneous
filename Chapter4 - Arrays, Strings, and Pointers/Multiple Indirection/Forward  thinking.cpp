#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cctype>
#include <string.h>

int main() {
	int x, * p, ** q;

	x = 10;
	p = &x;
	q = &p;

	printf(**q);
}