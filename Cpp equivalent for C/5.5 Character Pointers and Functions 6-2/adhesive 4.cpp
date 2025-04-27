#include <stdio.h>

int main() {

	char* pmessage;

	pmessage = "now is the time";

	printf("%s\n", pmessage);

	printf("%c\n", pmessage);

	printf("%c\n", *pmessage);

	printf("\t%c\n", pmessage[0]);

}