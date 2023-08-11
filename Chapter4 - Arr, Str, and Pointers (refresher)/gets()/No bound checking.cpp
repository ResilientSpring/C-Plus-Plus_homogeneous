// Using gets() to read a string from the keyboard.
#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	char str[10];
	cout << "Enter a string: ";

	gets_s(str);  // read a string using gets()

	cout << "Here is your string: " << str << endl;

}