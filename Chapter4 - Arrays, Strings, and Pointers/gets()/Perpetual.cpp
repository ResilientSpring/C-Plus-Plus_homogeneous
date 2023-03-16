#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char str[80];

	cout << "Enter a string: ";

	gets_s(str);      // Read a string using gets()

	cout << "Here is your string: ";
	
	cout << str;


}