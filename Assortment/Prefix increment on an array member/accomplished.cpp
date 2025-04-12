#include <stdio.h>

int main() {

	int arr[10];

	for (int i = 0; i < 10; i++)
		arr[i] = 0;


	printf("%d\n", ++arr[0]);

	printf("%d\n", ++(arr[0]));

	printf("%d\n", arr[9]);

	printf("%d\n", ++arr[9]);

	printf("%d\n", arr[6]);

	printf("%d\n", ++(arr[6]));
}