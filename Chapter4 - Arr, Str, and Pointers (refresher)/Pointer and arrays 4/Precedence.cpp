#include <iostream>
using namespace std;

int main() {

	char str[80] = "the inexorable progress of science";

	char* p1;

	p1 = str;  // p1 = &str[0]

	printf(" *(p1 + 5) is %c.  \n", *(p1 + 5));

	// The parentheses surrounding p1 + 5 are required 
	// as the * operation has a higher precedence over that of + .
	// Without the surrounding parentheses, the expression would first locate  
	// the value pointed to by p1 (the first location in the array) and then add 4 to it.
	printf(" *p1 + 5  is %c.  \n", *p1 + 5);

}