// Demonstrate bind2nd() to bind a value to a function object.

#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
using namespace std;

template<class InIter>
void show_range(const char *message, InIter start, InIter end);

int main() {

	list<int> lst;
	list<int>::iterator res_itr;

	for (unsigned i = 1; i < 20; i++)
		lst.push_back(i);

	show_range("Original sequence:\n", lst.begin(), lst.end());
	cout << endl;

	// Use bind2nd() to create a unary function object that will return true when a value 
	// is less than 10.
	res_itr = remove_if(lst.begin(), lst.end(), bind1st(less<int>(), 10));  // Bind 10 to the function object.
	// remove_if() removes elements from the sequence defined by start and end  
	// for which the unary predicate defined by pfn is true.

	show_range("Resulting sequence: \n", lst.begin(), res_itr);

}


// Show range of elements.
template<class InIter>
void show_range(const char *message, InIter start, InIter end) {

	InIter itr;

	cout << message;

	for (itr = start; itr != end; itr++) {
		cout << *itr << " ";
	}

	cout << endl;

}