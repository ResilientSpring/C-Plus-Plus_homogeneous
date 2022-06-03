#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {

	int len;

	printf("Enter length (1 to 79): ");
	scanf("%d", &len);

	while (len > 0 && len < 80)
	{
		printf(".");

		len--;
	}
}