// Declare loop control variable inside the for.
#include <iostream>
using namespace std;


int main() {

	int sum = 0;
	int factorial = 1;

	// coompare the factorial of the numbers through 5
	for (int i = 1; i < 5; i++)
	{
		sum += i;

		factorial *= i;
	}

}