#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {
	int* p, num;

	p = &num;
	*p = 100;                 // Assign num the value 100 through p.
	cout << num << ' ';
	(*p)++;                   // Increment num through p.
}