#include <stdio.h>

int main() {

	char statute[10];

	printf("&statute[1] - &statute[3] = %d.\n", &statute[1] + &statute[3]);

	printf("&statute[5] - &statute[2] = %p.\n", &statute[5] - &statute[2]);

	for (int i = 0; i < sizeof(statute) / sizeof(char); i++)
	{
		printf("&statue[%d] = %p.\n", i, &statute[i]);
	}

}