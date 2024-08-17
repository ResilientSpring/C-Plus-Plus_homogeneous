#include <stdio.h>

int main() {

	int var, count, incr;


	// first assigns count the value 19, assigns incr the value 10, then adds 1 to count, and 
	// finally assigns var the value produced by the entire comma expression, which is 20.
	var = (count = 19, incr = 10, count + 1);
	// Parenthesis are required in that comma has a lower precedence than assignment operator.

	printf("var is %d \n", var);

	/* The value of a comma-separated list of expressions is the value of the right-most expression.
	   The value of the other expressions will be discarded. 
	*/

	var = (incr++, count++);

	printf("var is now %d, count is now %d, and incr is now %d.\n", var, count, incr);

	var = (incr++, ++count);

	printf("var is now %d, count is now %d, and incr is now %d.\n", var, count, incr);

	var = (count++, incr++, count + 1); // var = count + 1;

	printf("var is now %d, count is now %d, and incr is now %d.\n", var, count, incr);

	var = (++count, ++incr, count + 1);  // var = count + 1;

	printf("var is now %d, count is now %d, and incr is now %d.\n", var, count, incr);

	var = (count = 19, incr = 10, count + 1); // var = count + 1;
}