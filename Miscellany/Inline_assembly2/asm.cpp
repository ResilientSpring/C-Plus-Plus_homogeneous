#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

int main() {
	int num1, num2;
	num1 = 5;
	num2 = num1;

	printf("num2 = %d  \n", num2);

	_asm {
		.stack 100h
		.data

		num1 sdword ? ;  first number
		num2 sdword ? ;  second number

		.code
		main proc
		mov num1, 5;  initialize num1 with 5
		mov eax, num1;  load eax with contents of num1
		mov num2, eax;  store eax in num2
		ret
		main endp
		end
	}

}