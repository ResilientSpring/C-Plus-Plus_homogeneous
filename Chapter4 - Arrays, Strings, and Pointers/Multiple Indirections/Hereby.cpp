#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cctype>
#include <string.h>
using namespace std;

int main() {
	int x, * p, ** q;

	x = 10;
	p = &x;
	q = &p;

	cout << **q;
}