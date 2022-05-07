/*
* Chapter 2.6.2.2 Code Sharing
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int global = 0;

int f1();
int f2();

int main() {
	cout << f1();

	cout << "\n";

	cout << f1();
}

int f1() {
	static int s1 = 1;
	global += 1;
	s1 += 1;

	return global + s1;
}

int f2() {
	return f1() + 1;
}