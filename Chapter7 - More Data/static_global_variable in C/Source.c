#include <stdio.h>

int running_average(int i);
void reset();

int main() {
	int num;

	do
	{

		printf("%s", "Enter numbers (-1 to quit, -2 to reset): ");

		if (scanf("%d", &num) == 1) {

			printf("Operation succeeded.\n");

		}
		else if (scanf("%d", &num) == 0) {

			printf("Operation failed. \n");

		}

		if (num == -2)
		{
			reset();
			continue;
		}

		if (num != -1)
		{
			cout << "Running average is: " << running_average(num);
		}

		cout << '\n';

	} while (num != -1);

	return 0;
}