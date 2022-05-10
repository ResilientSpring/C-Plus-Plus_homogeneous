#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int running_average(int i);
void reset();

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
		}

		cout << '\n';

	} while (num != 1);

	return 0;
}