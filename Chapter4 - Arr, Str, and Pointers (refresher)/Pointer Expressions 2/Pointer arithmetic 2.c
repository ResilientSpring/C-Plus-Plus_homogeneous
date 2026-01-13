#include <stdio.h>

int main() {

	char amessage[] = "now is the time";

	char ** p1;

	p1 = &amessage[0];

	printf("%p\n", p1++);

	printf("%p\n", p1++);
}