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

	vector<int> v;
	
	for (int i = 1; i < 11; i++)
		v.push_back(i);

	cout << "Contents of v: ";
	for_each(v.begin(), v.end(), show);
	
	cout << "\n";

	for_each(v.begin(), v.end(), summation);
	cout << "Summation of v: " << summation(0);

}