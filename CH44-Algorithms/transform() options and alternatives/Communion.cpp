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
double midpoint2(int a, int b);
double midpoint3(int a, int b);
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

	show("Contents of v3:\n", v3);
	show("Contents of v4:\n", v4);

	cout << endl;

	cout << "Compute midpoints between v3 and v4 and store results in v5.\n" << endl;
	transform(v3.begin(), v3.end(), v4.begin(), v5.begin(), midpoint);

	show("Contents of v5:\n", v5);

	cout << endl;

	cout << "Compute midpoints between the first 5 elements of v3 and whose next 5 elements" 
		 << "starting from its 6th element. And store results in v5.\n";
	transform(v3.begin(), v3.begin() + 5, v3.begin() + 5, v5.begin(), midpoint);

	show("Contents of v5:\n", v5);

	cout << endl;

	vector<double> d(5);

	cout << "Compute midpoints between the first 5 elements of v3 and whose next 5 elements"
		 << "starting from its 6th element. And store results in a vector of double, d.\n";
	transform(v3.begin(), v3.begin() + 5, v3.begin() + 5, d.begin(), midpoint3);  // return doubles

	show("Contents of d:\n", d);

	cout << endl;
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


// Return the whole number midpoint between two values.
double midpoint2(int a, int b) {

	return ((a - b) / 2) + b;

}


// Return the whole number midpoint between two values.
double midpoint3(int a, int b) {

	return ((double)((a - b) / 2)) + b;

}


// Return the reciprocal of a double.
double reciprocal(double val) {

	if (val == 0.0)
		return 0.0;

	return 1.0 / val;

}
