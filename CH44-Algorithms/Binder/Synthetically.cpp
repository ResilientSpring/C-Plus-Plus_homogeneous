// Demonstrate bind2nd()

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