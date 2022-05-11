// Compute a running average of numbers entered by the user.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int running_average(int i);

int main() {
	int num;

	do
	{
		cout << "Enter numbers (-1 to quit): ";
		cin >> num;

		if (num != -1)
		{
			cout << "Running average is: " << running_average(num);
		}

		cout << "\n";

	} while (num > -1);
}

int running_average(int i) {

	// Because sum and count are static, they will retain their values between calls to running_average().
	static int sum = 0, count = 0;

	sum = sum + i;

	count++;

	return sum / count;
}