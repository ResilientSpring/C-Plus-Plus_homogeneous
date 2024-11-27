// Index a pointer as if it were an array.
#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char* p;
	int i;
	char str[80] = "This Is A Test";

	printf("Original string: %s \n", str);

	p = str;  // assign p the address of the start of the array, i.e &str[0]

	// now, index p.
	for (int i = 0; p[i]; i++) {

		if (isupper(p[i]))
			p[i] = tolower(p[i]);
		else if (islower(p[i]))
			p[i] = toupper(p[i]);

	}
}