// Demonstrate vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {

	// Declare a vector that has an initial capacity of 10.
	vector<int> v(10);

	// Assign its elements some values. 
	for (unsigned i = 0; i < v.size(); ++i)
		v[i] = i * i;
}