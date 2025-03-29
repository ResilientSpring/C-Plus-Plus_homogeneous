#include <stdio.h>

int _set_printf_count_output(1);

int main() {

	int i;

	printf("This is a test%n", &i);

	printf("%d", i);

}