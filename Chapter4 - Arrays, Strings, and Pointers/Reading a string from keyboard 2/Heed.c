#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[80];

	scanf("%c", &str);

	prinf("This is your string: %c", *str);
}