#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {

	int total;
	int* ptr;
	int val;

	total = 3200;
	ptr = &total;
	val = *ptr;

	printf("Total is %d .\n", val);
}