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
	make_heap(v.begin(), v.end());  // specify the range of elements to be made into a heap. [Note1]

	show("v after building heap: \n", v);
	cout << endl; // In a heap, the top element (also called the first element) is the largest element. [Note2]

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

// Notes:
// 
// 1. Container that supports random access can be used to "hold a heap".
// 
// 2. Effect: The highest priority element is immediately available at top, in the sorted/unsorted heap.
