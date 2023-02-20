// Change the contents of an array.
#include <iostream>
using namespace std;

void cube(int* n, int num);

int main() {
	int i;
	int nums[10];

	for (i = 0; i < 10; i++)
		nums[i] = i + 1;


	cout << "Original contents: ";

	for (i = 0; i < 10; i++)
		cout << nums[i] << " ";

	cout << "\n";

	cube(nums, 10);

	cout << "Altered contents: ";

	for (i = 0; i < 10; i++)
		cout << nums[i] << " ";
}

void cube(int *n, int num) {
	while (num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}