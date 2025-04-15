#include <stdio.h>

int main() {

	printf("%d.\n", sizeof(char));

	printf("%d.\n", sizeof(int));

	char statute[10];

	printf("&statute[5] - &statute[2] = %d.\n", &statute[5] - &statute[2]);

	printf("&statute[5] - &statute[2] = %p.\n", &statute[5] - &statute[2]);

	for (int i = 0; i < sizeof(statute) / sizeof(char); i++)
	{
		printf("&statue[%d] = %p.\n", i, &statute[i]);
	}

}