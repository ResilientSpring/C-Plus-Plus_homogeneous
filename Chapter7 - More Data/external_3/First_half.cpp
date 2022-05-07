#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int x, y;
char ch;

void func1();
extern void func22();

int main() {
	cout << x;

	return 0;
}

void func1() {
	x = 123;
}