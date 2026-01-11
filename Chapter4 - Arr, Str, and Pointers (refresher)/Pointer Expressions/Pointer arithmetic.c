#include <stdio.h>

int main() {

	char amessage[] = "now is the time";

	char * p1;

	p1 = amessage;

	printf("%p\n", p1);

	printf("%p\n", p1++);

	printf("%p\n", p1++);

}