#include <iostream>
using namespace std;

int main() {

	int nums[10] = { 2, 4, 8, 9, 0, 5, 1, 7, 3, 6 };

	*(nums) = 2023;

	for (int i = 0; i < 10; i++)
		cout << *(nums + i) << " ";
}