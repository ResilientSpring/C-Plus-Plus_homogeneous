// This program will not work right.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable to be a pointer.
	
	double x, y;
	int* p;       // This pointer is an object that can contain a memory address of an integer. 

	x = 123.23;
	p = (int*)&x;   // Use cast to assign double * to int *.

}