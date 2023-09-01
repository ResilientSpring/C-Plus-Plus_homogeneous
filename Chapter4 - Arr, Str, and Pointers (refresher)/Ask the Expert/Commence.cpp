#include <iostream>
using namespace std;

int main() {

	int nums[10];
	int i;

	for (i = 0; i < 10; i++) {

		*nums = i;

		nums++;  // ERROR -- cannot modify nums
	}

}