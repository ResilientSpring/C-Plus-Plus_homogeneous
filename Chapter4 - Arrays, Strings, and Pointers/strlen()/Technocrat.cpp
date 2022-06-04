#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cctype>
#include <string.h>
using namespace std;

int main() {
	char str[] = "cliche";
	printf("The length of the string str is %d .\n", strlen(str));

	char str[11] = "hi there";
	printf("The length of the string str is %d . \n", strlen(str));
}