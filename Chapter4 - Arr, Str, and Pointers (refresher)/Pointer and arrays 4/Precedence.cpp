#include <iostream>
using namespace std;

int main() {

	char str[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char* p1;

	p1 = str;  // p1 = &str[0]

	printf(" *(p1 + 4) is %c.  \n", *(p1 + 4));

	// The parentheses surrounding p1 + 4 are necessary 
	// because the * operation has a higher priority than the + operation.
	// Without them, the expression would first find the value pointed to by p1 
	// (the first location in the array) and then add 4 to it.
	printf(" *p1 + 4  is %c.  \n", *p1 + 4);

}