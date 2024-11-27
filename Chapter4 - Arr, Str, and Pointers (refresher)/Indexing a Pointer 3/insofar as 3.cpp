// Index a pointer as if it were an array.
#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char* p;
	int i;
	char str[80] = "This Is A Test";

	printf("Original string: %s \n", str);

	p = &str[5]; 

	printf("p is %s \n", p);

	// now, index p.
	for (int i = 0; p[i]; i++) { // Access p as if it were an array.

		if (isupper(p[i]))
			p[i] = tolower(p[i]);
		else if (islower(p[i]))
			p[i] = toupper(p[i]);
	}

	printf("Inversed-case string: %s \n", str);
}