#include <stdio.h>

extern int running_average(int i);
extern void reset();
// extern static int sum;
// extern int sum, count;
extern int sum;
extern int count;           //  Trying to access static global variable in the source_2.cpp

int main() {
	int num;

	do
	{
		printf("%s", "Enter numbers (-1 to quit, -2 to reset): ");
		
		if (scanf("%d", &num) == 0) {

			printf("The operation failed.\n");

		}
		else if (scanf("%d", &num) == 1) {

			printf("The operation succeeded.\n");

		}

		if (num == -2)
		{
			reset();
			continue;
		}

		if (num != -1)
		{

			printf("Running average is: %d", running_average(num));

			printf(", where the sum is %d.\n", sum);

		}

	} while (num != -1);

	return 0;
}