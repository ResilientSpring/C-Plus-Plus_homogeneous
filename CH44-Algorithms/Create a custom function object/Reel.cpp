// Demonstrate both unary and binary function objects.
// 
// This program reworks the example shown in the recipe "Use transform() to Change a Sequence"
// That program used function pointers in calls to transform().
// This version uses function objects.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<class T>
void show(const char *message, vector<T> vect);

// A function object that computes a reciprocal.
class reciprocal : unary_function<double, double> {

public:
	result_type sum;

	result_type operator()(argument_type val) {
		if (val == 0.0)
			return 0.0;

		return 1.0 / val;   // return reciprocal
}
};


// A function object that finds the midpoint between two values.
class midpoint : binary_function<int, int, double> {

public:
	result_type operator()(first_argument_type a, second_argument_type b) {

		return ((a - b) / 2) + b;
	}
};


int main() {

	vector<double> v;

	// Put values into v.
	for (int i = 0; i < 10; i++)
		v.push_back((double)i);

	show("Initial contents of v: \n", v);

	cout << endl;

	// First, demonstratre a unary function object.

	// Transform v by applying the reciprocal function object. 
	// Put the result back into v.
	cout << "Use a unary function object in calls to transform() to compute reciprocals for v and";
	cout << " store the results back in v.\n";
	transform(v.begin(), v.end(), v.begin(), reciprocal());


	show("Transformed contents of v: \n", v);

	cout << endl;

	// Transform v a second time, putting the result into a new sequence.
	cout << "Use a unary function object to transform v again. \n";
	cout << "This time, store the results in v2.\n";
	vector<double> v2(10);
	transform(v.begin(), v.end(), v2.begin(), reciprocal());

	show("Here is v2:\n", v2);

	cout << endl;

	vector<int> v3, v4, v5(10);

	for (int i = 0; i < 10; i++)
		v3.push_back(i);
	
	for (int i = 10; i < 20; i++) {
		
		if (i % 2)
			v4.push_back(i);
		else
			v4.push_back(-i);
	}

	show("Contents of v3: \n", v3);
	show("Contents of v4: \n", v4);
	cout << endl;

	// Now, demonstrate a binary function object.
	cout << "Now, use a binary function object to find the midpoint between elements in v3 and v4";
	cout << " and store the results in v5. \n";
	transform(v3.begin(), v3.end(), v4.begin(), v5.begin(), midpoint());

	show("Contents of v5:\n", v5);
}


template<class T> 
void show(const char *message, vector<T> vect) {

	cout << message;

	for (unsigned i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << "\n";

}