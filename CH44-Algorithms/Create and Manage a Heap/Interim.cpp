// Demonstrate the heap algorithms.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(const char *message, vector<char> vect);

int main() {

	vector<char> v;

	for (int i = 0; i < 20; i+=2)
		v.push_back('A' + i);
	
	show("v before building heap: \n", v);
	cout << endl;

	// Construct a heap.
	make_heap(v.begin(), v.end());

	show("v after building heap: \n", v);
	cout << endl;

	// Push H onto heap.
	v.push_back('H');                // first, put H into vector.

	push_heap(v.begin(), v.end());   // Now, push H onto heap.


	show("v after pushing H onto heap: \n", v);
	cout << endl;

	
	// Pop value from heap.
	pop_heap(v.begin(), v.end());

	show("V after popping from heap: \n", v);
	cout << endl;

	// Sort the heap
	sort_heap(v.begin(), v.end() - 1);

	show("V after sorting the heap: \n", v);
}


// Display the contents of a vector<char>
void show(const char *message, vector<char> vect) {

	cout << message;

	for (unsigned i = 0; i < vect.size(); ++i)
		cout << vect[i] << " ";
	
	cout << "\n";
}
