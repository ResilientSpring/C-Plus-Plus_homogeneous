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

int main() {

}