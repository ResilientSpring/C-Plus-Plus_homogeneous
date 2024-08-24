#include <stdio.h>

int main() {

	int i, j;

	j = 10;

	i = (j++, j + 100, 999 + j);

	printf("i is %d.\n", i);

}