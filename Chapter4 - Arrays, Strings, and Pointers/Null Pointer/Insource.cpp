#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cctype>
#include <iomanip>

int main() {
	float *p = 0;
	printf("%p, %d \n", p, *p);

	float *p2;
	p2 = 0;

	printf("%p \n", p2);

	float* q = NULL;
}