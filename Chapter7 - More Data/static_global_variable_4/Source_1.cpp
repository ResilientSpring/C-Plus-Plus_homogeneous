#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

extern int running_average(int i);
extern void reset();
// extern static int sum;
// extern int sum, count;
extern int sum;
extern int count;           //  Trying to access static global variable in the source_2.cpp

int main() {
	int num;

	do
	{
		cout << "Enter numbers (-1 to quit, -2 to reset): ";
		cin >> num;

		if (num == -2)
		{
			reset();
			continue;
		}

		if (num != -1)
		{
			cout << "Running average is: " << running_average(num);
			// cout << ", where the sum is " << sum << " and count is " << count;
			cout << ", where the sum is " << sum ;
		}

		cout << '\n';

	} while (num != -1);

	return 0;
}