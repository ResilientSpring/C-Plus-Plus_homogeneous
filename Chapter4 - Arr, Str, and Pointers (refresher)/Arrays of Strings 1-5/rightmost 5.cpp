#include <stdio.h>

int main() {

	char numbers[10][80] = {

		{'T', 'o', 'm'},
		{'5', '5', '5', '-', '3', '3', '2', '2'},
		{'M', 'a', 'r', 'y'},
		{'5', '5', '5', '-', '8', '9', '7', '6'}

	};

	printf("To get the character 'a' in Mary, ");
	printf("access numbers[2][1], which is %c.\n", numbers[2][1]);

	printf("To get the character 'M' in Mary, ");
	printf("access numbers[2][0], which is %c.\n", numbers[2][0]);

	printf("To access an individual string, ");
	printf("simply specify only the left index. %s.\n", numbers[2]);
}