#include <stdio.h>

int main() {

	char statute[10];

	char* cp1;
	char* cp2;

	cp1 = &statute[5];
	cp2 = &statute[2];

	printf("cp1 - cp2 = %d.\n", cp1 - cp2);

	printf("&statute[5] - &statute[2] = %p.\n", &statute[5] - &statute[2]);

	for (int i = 0; i < sizeof(statute) / sizeof(char) ; i++)
	{
		printf("&statue[%d] = %p.\n", i, &statute[i]);
	}

}