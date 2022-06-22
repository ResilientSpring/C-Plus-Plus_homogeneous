#include <stdio.h>

int main() {
	int num1, num2;

	num1 = 5;

	__asm {
		mov eax, num1;
		mov num2, eax;
	}

	printf("%s %d\n", "The answer is: ", num2);
}