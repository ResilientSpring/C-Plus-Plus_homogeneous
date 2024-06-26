#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void christmas(int n);
void christmas2(int n);
void christmas3(int n);

int main() {

	printf("Enter a number n:");

	int n = scanf("%d", &n);

	christmas(n);

}

void christmas(int n){

	char a = '*';

	for (int i = 0; i < n; i++)
	{
		printf("%c*n  \n", a);
	}

}

void christmas2(int n) {

	char a = '*';

	for (int i = 0; i < n; i++)
	{
		printf("%c*n  \n", a);
	}

}

void christmas3(int n) {

	char a = '*';

	for (int i = 0; i < n; i++)
	{
		printf("%c*n  \n", a);
	}

}