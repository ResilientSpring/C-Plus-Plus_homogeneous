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
 	show("Initial contents of v: \n", v);
	cout << endl;


	// Transform v by applying reciprocal() function.
	// Put the result back into v.
	cout << "Compute reciprocals for v and store the results back in v. \n";
	transform(v.begin(), v.end(), v.begin(), reciprocal);

	show("Transfomred contents of v: \n", v);

	// Transform v a second time, putting a result into a new sequence.
	cout << "Transform v again. This time, putting the result in v2.\n";
	vector<double> v2(10);
	transform(v.begin(), v.end(), v2.begin(), reciprocal);

	show("Here is v2:\n", v2);

	cout << endl;

	// Now, demonstrate the two-sequence form of transform()
	cout << "Demonstrate double-sequence form of transform(). \n";
	vector<int> v3, v4, v5(10);

	for (int i = 0; i < 10; i++)
		v3.push_back(i);

	for (int i = 10; i < 20; i++) {

		if (i % 2)
			v4.push_back(i);
		else
			v4.push_back(-i);
	}
		

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
