#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int globalx = 123;

void globalfn(void) {
	printf("The value of a global var is:%d\n", globalx);
}

int main() {
	int localx = 456;
	globalfn();
	printf("The value of a local var is: %d\n", localx);
}