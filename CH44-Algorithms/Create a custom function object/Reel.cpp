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

}


template<class T> 
void show(const char *message, vector<T> vect) {

	cout << message;

	for (unsigned i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << "\n";

}