/* 

This program uses a function prototype to enforce strong type checking
 
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

void sqr_it(int* i);

int main() {
	int x;

	x = 10;

	sqr_it(x); // Error!

	return 0;
}

void sqr_it(int* i) {
	*i = *i * *i;
}