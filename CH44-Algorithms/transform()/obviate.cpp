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

template<class T>
void show(const char *message, vector<T> vect);
int midpoint(int a, int b);
double reciprocal(double val);


int main() {

	// First, demonstrate the single-sequence form of transform()
	vector<double> v;

	// Put values into v.
	for (int i = 0; i < 10; i++)
		v.push_back((double)i);

	cout << "Demonstrate single-sentence form of transformation(). \n";
// 	show("Initial contents of v: \n", v);
}

// Display the contents of a vector<int>.
template<class T>
void show(const char *message, vector<T> vect) {

	cout << message;

	for (unsigned i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";

	cout << "\n";

}

// Return the whole number midpoint between two values.
int midpoint(int a, int b) {

	return ((a - b) / 2) + b;

}


// Return the reciprocal of a double.
double reciprocal(double val) {

	if (val == 0.0)
		return 0.0;

	return 1.0 / val;

}
