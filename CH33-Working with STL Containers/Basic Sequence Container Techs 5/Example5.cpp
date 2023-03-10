// Demonstrate the basic sequence container operations.
//
// This example uses vector, but the same techniques can be applied to any sequence container.

#include <iostream>
#include <vector>
using namespace std;

void show(const char* msg, vector<char> vect);

int main() {

	// Declare an empty vector that can hold char objects.
	vector<char> v;

	// Declare an object of iterator class.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	// Insert character 'A' into v at the point specified by the iterator and then return the iterator at 'A'.
	itr = v.insert(itr, 'A');

	// Insert character 'B' immediately before the element specified by the iterator, and then return the iterator at 'B'.
	itr = v.insert(itr, 'B');

	// Insert character 'C' immediately before the element specified by the iterator, and then return the iterator at 'C'.
	v.insert(itr, 'C');

	// Display the contents of v.
	show("The contents of v: ", v);

	// Declare a reverse iterator.
	vector<char>::reverse_iterator ritr;

	// Use a reverse iterator to show the contents of v in reverse.
	cout << "Here is v in reverse: ";
	for (ritr = v.rbegin(); ritr != v.rend(); ++ritr)
		cout << *ritr << " ";
	cout << "\n\n";


	// Create another vector that is the same as the first.
	vector<char> v2(v);
}


// Display the contents of a vector<char> by using an iterator.
void show(const char* msg, vector<char> vect) {

	vector<char>::iterator itr;

	cout << msg;

	for (itr = vect.begin(); itr != vect.end(); ++itr)
		cout << *itr << " ";
	cout << "\n";
}