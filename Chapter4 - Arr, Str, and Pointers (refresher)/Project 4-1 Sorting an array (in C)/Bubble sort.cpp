#include <stdio.h>
#include <stdlib.h>

int main() {

	int arr[10];

	for (int i = 0; i < 10; i++) {

		// The rand() function in <stdlib.h> returns a pseudo-random integer between 0 and 
		// RAND_MAX. You can use srand(unsigned int seed) to set a seed.
		arr[i] = rand();
	}
}