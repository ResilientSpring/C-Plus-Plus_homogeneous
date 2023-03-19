// Demonstrate the sort() algorithm.

#include <cstdlib>
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main() {

	vector<int> v(10);

	// Initialize v with random values.
	for (unsigned i = 0; i < v.size(); i++)
	{
		v[i] = rand() % 100;
	}

	show("Original order: \n", v);
	cout << endl;



}

// Display the contents of a vector<int>.
void show(const char *message, vector<int> vect) {
	
	vector<int>::iterator itr;

	cout << message << endl;

	for (itr = vect.begin(); itr != vect.end(); itr++)
		cout << *itr << " ";

	cout << endl;

}