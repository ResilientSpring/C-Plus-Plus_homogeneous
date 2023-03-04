
void quicksort(char *items, int len);
void qs(char* items, int left, int right);

int main() {
	
}


// Se up a call to the actual sorting function.
void quicksort(char *items, int len) {
	qs(items, 0, len - 1);
}


// A recursive version of Quicksort for sorting characters.
void qs(char *items, int left, int right) {
	
	int i, j;
	char x, y;

	i = left; j = right;
	x = items[(left + right) / 2];


}
