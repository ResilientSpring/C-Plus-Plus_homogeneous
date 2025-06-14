static int sum = 0, count = 0;  // These are known only in the file in which they are declared.

int running_average(int i) {
	sum = sum + i;

	count++;

	return sum / count;
}

void reset() {
	sum = 0;

	count = 0;
}