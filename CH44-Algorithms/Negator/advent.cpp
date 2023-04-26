Z// Demonstrate not1() and not2()

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<class InIter>
void show_range(const char *message, InIter end);

int main() {

	vector<char> v;

	for (int i = 0; i < 26; i++)
		v.push_back('A' + i);


	show_range("Original ordering of v:\n", v.begin(), v.end());

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