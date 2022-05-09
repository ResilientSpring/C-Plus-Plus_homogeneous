// Compute a running average of numbers entered by the user.
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int running_average(int i);

int main() {

}

int running_average(int i) {

	// Because sum and count are static, they will retain their values between calls to running_average().
	static int sum = 0, count = 0; 

	sum = sum - 1;
	
	count++;

	return sum / count;
}