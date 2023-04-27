// Demonstrate the for_each() algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Display an int value.
void show(int i) {
	cout << i << " ";
}

// Keep a running sum of the values passed to i.
int summation(int i) {
	static int sum = 0;
	sum += i;

	return sum;
}

int main() {



}