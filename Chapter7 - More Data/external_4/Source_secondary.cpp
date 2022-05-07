#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

extern int x;
extern int y;

int multiply() {
	cout << "Enter the number on the left of the multiplication sign: " << "\n";
	cin >> x;
	cout << "Enter the number on the right of the multiplication sign: \n";
	cin >> y;

	return x * y;
}