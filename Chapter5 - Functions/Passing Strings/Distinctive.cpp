// Pass a string to a function.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {

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
