#include <iostream>
using namespace std;

void bubble_sort(int arr[]);

int main() {

	int nums[] = { 27, 7, 36, 15, 1, 9 };

	bubble_sort(nums);

	for (int i : nums)
		cout << i << " ";

}


void bubble_sort(int arr[]) {

	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++)       // Set a debug stop point at line 22, to see the value of int size.
		for (int j = size - 1; j > i; j--) {

			if (arr[j] < arr[j - 1])
			{
				int k = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = k;
			}

		}

}