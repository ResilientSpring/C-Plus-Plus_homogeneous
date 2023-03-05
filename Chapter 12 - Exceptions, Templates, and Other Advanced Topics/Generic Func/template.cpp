// Function template example.

#include <iostream>
using namespace std;

// This is a function template.
// A generic function that exchanges the values of its arguments. 
template<class x> void swapargs(X &a, X &b) {  // Here, X is the generic data type.
	
	X temp;
	temp = a;
	a = b;
	b = temp;

}


int main() {

}