#include <iostream>
using namespace std;

int main() {

	// Created an int pointer.
	int *i;

	// Created a double pointer. 
	double *f;

	int j[10];

	double g[10];

	// Assign the memory address of the first element of array j and g to pointer i and f.
	i = j;
	f = g;


	// Add values 0 through 9 to these pointers and display the results. (Print memory address of 
	// each element of the array.)
	for (int x = 0; x < 10; x++)
		cout << i + x << " " << f + x << endl;
}