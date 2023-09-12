// This program will not work right.
#include <iostream>
using namespace std;

int main() {

	double x, y;

	int *p;

	x = 123.23;
	p = (int *)  &x;   // Use cast to assign double * to int *

}