#define _CRT_SECURE_NO_WARNINGS

// Pass a string to a function.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void strIvertCase(char* str);

int main() {

	char str[80] = "This Is A Test";

	strIvertCase(str);

	cout << str;

}

void strIvertCase(char* str) {

	while (*str) {

		// invert case
		if (isupper(*str))
			*str = tolower(*str);
		else if (islower(*str))
			*str = toupper(*str);

		str++;  // Move on to next char.
	}
}
