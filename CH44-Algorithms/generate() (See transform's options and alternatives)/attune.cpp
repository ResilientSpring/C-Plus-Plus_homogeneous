// Generate a sequence.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double power_of_two();

int main() {

	vector<double> v(5);

	// Generate a sequence.
	generate(v.begin(), v.end(), power_of_two);

}

// A simple generator function that generates the powers of 2.
double power_of_two() {
	static double value = 1.0;
	double t;

	t = value;
}