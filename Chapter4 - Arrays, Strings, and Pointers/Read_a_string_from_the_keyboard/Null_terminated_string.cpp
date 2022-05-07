// Using cin to read a string from the keyboard.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
	char str[80];

	cout << "Enter a string: ";
	cin >> str;
	cout << "Here is your string: ";
	cout << str;

	return 0;
}