#include <stdio.h>

int main() {

	_set_printf_count_output(1);

	int i;

	printf("This is a test%n", &i);

	printf("%d", i);

}