#include <iostream>
using namespace std;

int main() {

	int nums[10];

	for (int i = 0; i < 10; i++)
		nums[i] = rand();

	cout << "Original array is: \n";
	for (int i : nums)
		cout << i << " ";

	for(int i = 0; i < 10; i++)
		for(int j = 10 - 1; j > i ; j--) // j must be > i, otherwise j will be - 1 after j--, e.g., nums[-1]
			if (nums[j] < nums[j-1])
			{
				int k = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = k;

			}

}