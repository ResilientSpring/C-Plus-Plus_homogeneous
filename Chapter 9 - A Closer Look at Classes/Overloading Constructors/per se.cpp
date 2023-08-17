#include <iostream>
using namespace std;


class Sample {

public:
	int x;
	int y;

	Sample() { x = y = 0; };     // Overload the default constructor.

	// Constructor with one parameter.
	Sample(int i) {	x = y = i; }


	// Constructor with two parameters.
	Sample(int i, int j) { x = i; y = j; }


};


int main() {



}