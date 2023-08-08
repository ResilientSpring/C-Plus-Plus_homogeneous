/*
   Loop until a random number that is greater than 20000.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

	int i, r;

	r = rand();

	// The conditional expression need not involve the loop control variable.
	for (i = 0; r < 20000; i++) {
		r = rand();
	}


	cout << "Number is " << r << ". It was generated on try " << i << ".";

}