#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[10];

	srand(10); // set seed to 10. [2]

	for (int i = 0; i < 10; i++) {

		// The rand() function in <stdlib.h> returns a pseudo-random integer between 0 and 
		// RAND_MAX. You can use srand(unsigned int seed) to set a seed. [1]
		arr[i] = rand();   
	}

	printf("The array to be underwent the bubble sort: \n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	int arr2[15];

	for (int i = 0; i < 15; i++)
		arr2[i] = rand() % 20;  // int r = rand() % 20;  for random int between 0 and 19. [1]

	printf("The second array to undergo the bubble sort: \n");

	for (int i : arr2)
		printf("%d ", i);

}

/* References:
   
   1. https://stackoverflow.com/a/822361
   2. https://www.programiz.com/cpp-programming/library-function/cstdlib/srand

*/