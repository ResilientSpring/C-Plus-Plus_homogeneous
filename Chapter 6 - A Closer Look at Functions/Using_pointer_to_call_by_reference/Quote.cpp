// Exchange the value of the variables pointed to by x and y.

void swap(int *x, int *y) {
	int temp;

	temp = *x; // save the value at address x.
	*x = *y;   // put y into x
	*y = temp; // put x into y


}