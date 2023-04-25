// Demonstrate the transform() algorithm.
//
// Both versions of transform() are used within the program.

// The first alters the sequence of doubles so that it contains reciprocal values.
// The second creates a sequence that contains the midpoints between the values in 
// two other sequences.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	// First, demonstrate the single-sequence form of transform()
	vector<double> v;

	// Put values into v.
	for (int i = 0; i < 10; i++)
		v.push_back((double)i);

	cout << "Demonstrate single-sentence form of transformation(). \n";
}