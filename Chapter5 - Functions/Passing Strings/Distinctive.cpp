// Pass a string to a function.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void strIvertCase(char* str);

int main() {

	char str[80];

	strcpy(str, "This Is A Test");

	strIvertCase(str);

}

void strIvertCase(char* str) {
	
	while (*str) {
		
		// invert case
		if (isupper(*str))
			*str = tolower(*str);
		else if (islower(*str))
			*str = toupper(*str);
	}
}
