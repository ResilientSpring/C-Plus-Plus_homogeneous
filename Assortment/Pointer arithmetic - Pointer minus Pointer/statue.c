#include <stdio.h>

int main() {

	char statute[10];

	char* cp1;
	char* cp2;

	cp1 = &statute[2];
	cp2 = &statute[5];

	printf("cp2 - cp1 = %d.\n", cp2 - cp1);

	printf("cp2 - cp1 = %p.\n", cp2 - cp1);

	for (int i = 0; i < sizeof(statute) / sizeof(char) ; i++)
	{
		cp1 = statute;

		printf("&statue[%d] = %p.\n", i, (cp + i));
	}

}