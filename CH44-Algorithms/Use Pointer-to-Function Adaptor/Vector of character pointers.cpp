// Use a pointer-to-function adaptor.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstring>
using namespace std;

int main() {

	// A vector of character pointers that point to character strings (character arrays).
	vector<const char *> v;
	vector<const char *>::iterator itr;

	v.push_back("One");
	v.push_back("Two");
	v.push_back("Three");
	v.push_back("Four");
	v.push_back("Five");


	show_range("Sequence contains: ", v.begin(), v.end());

	cout << endl;

	cout << "Searching sequence for Three. \n\n";

	// Use a pointer-to-function adaptor.
	itr = find_if(v.begin(), v.end(), not1(bind2nd(ptr_fun(strcmp), "Three")));

	
	if (itr != v.end())
	{
		cout << "Found! \n";

		show_range("Sequence from that point is: ", itr, v.end());
	}

}


// Show a range of elements.
template<class InIter>
void show_range(const char *message, InIter start, InIter end) {

	InIter itr;
	
	cout << message;

	for (itr = start; itr != end; itr++)
		cout << *itr << " ";

	cout << endl;

}