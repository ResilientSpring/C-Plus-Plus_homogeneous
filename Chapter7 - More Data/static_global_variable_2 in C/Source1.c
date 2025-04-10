#include <stdio.h>

extern int running_average(int i);
extern void reset();

int main() {
	int num;

	do
	{
		printf("%s", "Enter numbers (-1 to quit, -2 to reset): ");
		scanf("%d", &num);

		if (num == -2)
		{
			reset();
			continue;
		}

		if (num != -1)
		{
			printf("Running average is: %d.\n", running_average(num));
		}

	} while (num != -1);

	return 0;
}