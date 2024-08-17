#include <stdio.h>

int main() {

	int var, count, incr;


	// first assigns count the value 19, assigns incr the value 10, then adds 1 to count, and 
	// finally assigns var the value produced by the entire comma expression, which is 20.
	var = (count = 19, incr = 10, count + 1);

	printf("var is %d \n", var);

}