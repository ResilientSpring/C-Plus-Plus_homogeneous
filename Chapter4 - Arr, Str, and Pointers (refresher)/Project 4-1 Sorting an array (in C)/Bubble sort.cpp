#include <stdio.h>
#include <stdlib.h>

int srand(unsigned int 8);

int main() {

	int arr[10];

	for (int i = 0; i < 10; i++) {

		// The rand() function in <stdlib.h> returns a pseudo-random integer between 0 and 
		// RAND_MAX. You can use srand(unsigned int seed) to set a seed. [1]
		arr[i] = rand();   // int r = rand() % 20;  for random int between 0 and 19. [1]
	}


}

/* References:
   
   1. https://stackoverflow.com/a/822361


*/