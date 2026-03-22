#include <stdio.h>

int main() {

	char amessage[] = "now is the time";

	char ** p1;

	p1 = &amessage[0];

	printf("%p\n", p1++);

	printf("%p\n", p1++);

	printf("%p\n", p1);
}

/*

Assuming on a 32-bit system, let p1 be a pointer to a pointer to a char with a current value of 2,000 (that is, p1 contains the address 2,000), then after the expression:

	p1++;

the content of p1 will be ?


A. 2001 because a char takes up a byte in C on a byte-addressed system.

B. 2004 because a pointer takes up 4 bytes in C on a byte-addressed system.

C. Other.

*/

// Reference: https://chatgpt.com/c/695e890f-e938-8321-9aef-5dcff68fc90d
