// Demonstrate register.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main() {

}

int summation(int nums[], int n) {
	register int i;                 // Store the variable in SRAM.
	register int sum = 0;

	for ( i = 0; i < n; i++)
	{
		sum = sum + nums[i];
	}
}