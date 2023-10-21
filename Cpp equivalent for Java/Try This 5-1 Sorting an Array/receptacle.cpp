#include <iostream>
using namespace std;

int main() {

	int nums[] = { 99, -10, 100123, 18, -978, 5623, 463, -9, 287, 49 };

	for(int i = 0; i < sizeof(nums)/sizeof(int); i++)
		for (int j = 10 - 1; j > i; j--)
		{
			if (nums[j] < nums[j - 1]) {
				int k = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = k;
			}
		}
	
	cout << "Sorted array is: \n";
	for (int i : nums)
		cout << i << " ";

	cout << endl;
}