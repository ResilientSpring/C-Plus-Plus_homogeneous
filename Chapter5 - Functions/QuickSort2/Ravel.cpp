#include <iostream>
#include <cstring>
using namespace std;

void quicksort(char *items, int len);
void qs(char *items, int left, int right);

int main() {

	char str[] = "jfmckldoelazlkper";

	cout << "Original order: " << str << "\n";

	quicksort(str, strlen(str));

	cout << "Sorted order: " << str << "\n";

}


// Se up a call to the actual sorting function.
void quicksort(char *items, int len) {
	qs(items, 0, len - 1);
}


// A recursive version of Quicksort for sorting characters.
void qs(char *items, int left, int right) {

	char comparand, y;

	comparand = items[(left + right) / 2];

	do {

		while ((items[left] < comparand) && (left < right))
			left++;

		while ((comparand < items[right]) && (right > left))
			right--;

		if (left <= right) {
			y = items[left];
			items[left] = items[right];
			items[right] = y;
			left++;
			right--;
		}

	} while (left <= right);

	if (left < right)
		qs(items, left, right);

	if(left )

}
