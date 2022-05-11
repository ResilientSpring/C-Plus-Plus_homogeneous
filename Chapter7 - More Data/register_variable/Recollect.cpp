// Demonstrate register.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int summation(int nums[], int n);

int main() {

	int vals[] = { 1, 2, 3, 4, 5 };
	int result;

	result = summation(vals, 5);

	cout << "Summation is " << result << "\n";

	return 0;

}

int summation(int nums[], int n) {
	register int i;                 // Store the variable in SRAM.
	register int sum = 0;

	for ( i = 0; i < n; i++)
	{
		sum = sum + nums[i];
	}

	return sum;
}