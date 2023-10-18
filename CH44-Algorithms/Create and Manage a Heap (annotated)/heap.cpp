// Demonstrate the heap algorithms.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(const char *message, vector<char> vect);

int main() {

	vector<char> v;

	for (int i = 0; i < 20; i += 2)
		v.push_back('A' + i);

	show("v before building heap: \n", v);
	cout << endl;

	// Construct a heap.
	make_heap(v.begin(), v.end());  // specify the range of elements to be made into a heap.

	show("v after building heap: \n", v);
	cout << endl;

	// To push H onto heap:
	v.push_back('H');                // Step1: put H into vector.

	push_heap(v.begin(), v.end());   // Step2: To add an element into the heap, call push_heap().


	show("v after pushing H onto heap: \n", v);
	cout << endl;
}


// Display the contents of a vector<char>
void show(const char *message, vector<char> vect) {

	cout << message;

	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << " ";

	cout << "\n";
}
