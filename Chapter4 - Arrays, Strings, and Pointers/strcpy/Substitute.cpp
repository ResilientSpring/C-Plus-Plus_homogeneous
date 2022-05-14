#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS

int main() {
	char string1[30], string2[30];

	strcpy(string1, "underprivilege");

	cout << "string1: " << string1 << "\n";

	strcpy(string2, "C is power programming.");

	cout << "string2: " << string2 << "\n";

	return 0;

}