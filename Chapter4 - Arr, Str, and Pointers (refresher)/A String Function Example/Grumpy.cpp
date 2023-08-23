// Demonstrate the string functions.
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {

	char s1[80], s2[80];

	strcpy(s1, "C++");
	strcpy(s2, " is power programming.");

	cout << "lengths: " << strlen(s1);

}
