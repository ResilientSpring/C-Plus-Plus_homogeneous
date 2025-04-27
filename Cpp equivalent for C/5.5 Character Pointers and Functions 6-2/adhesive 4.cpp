#include <stdio.h>

int main() {

	const char* pmessage;

	pmessage = "now is the time";

	printf("%s\n", pmessage);

	printf("%c\n", pmessage);

	printf("%c\n", *pmessage);

	printf("\t%c\n", pmessage[0]);




	printf("\n\n\n\n\n%5c\n", *(pmessage + 2) );

	printf("%5c\n", pmessage[2]);
}