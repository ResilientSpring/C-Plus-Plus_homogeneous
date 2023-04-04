// Demonstrate the sort() algorithm.

#include <cstdlib>
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

void show(const char *message, vector<int> vect);

int main() {

	vector<int> v(10);

	// Initialize v with random values.
	for (unsigned i = 0; i < v.size(); i++)
	{
		v[i] = rand() % 100;
	}

	show("Original order: \n", v);
	cout << endl;

	// Sort the entire container.
	sort(v.begin(), v.end());

	show("Order after sorting into natural order: \n", v);
	cout << endl;


	// Now, sort into descending order by using greater()
	sort(v.begin(), v.end(), greater<int>());

	show("Order after sorting into descending order: \n", v);
	cout << endl;


	// Sort a subset of the container.
	sort(v.begin() + 2, v.end() - 2);

	show("After sorting elements v[2] to v[7] into natural order: \n", v);
}

// Display the contents of a vector<int>.
void show(const char *message, vector<int> vect) {

	vector<int>::iterator itr;

	cout << message << endl;

	for (itr = vect.begin(); itr != vect.end(); itr++)
		cout << *itr << " ";

	cout << endl;

}