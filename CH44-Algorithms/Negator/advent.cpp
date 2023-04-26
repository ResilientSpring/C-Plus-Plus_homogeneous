// Demonstrate not1() and not2()

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<class InIter>
void show_range(const char *message, InIter start, InIter end);

int main() {

	vector<char> v;

	for (int i = 0; i < 26; i++)
		v.push_back('A' + i);


	show_range("Original ordering of v:\n", v.begin(), v.end());

	cout << endl;

	// Use not2() to reverse sort v.
	sort(v.begin(), v.end(), not2(less<char>()));

	show_range("AFter sorting v using not2( less<char>() ): ", v.begin(), v.end());

	cout << endl;

	// Use not1() to remove all characters that are not equal to H.
	vector<char>::iterator res_end;
	res_end = remove_if(v.begin(), v.end(), not1(bind2nd(equal_to<char>(), 'H')));

	show_range("v after removing elements not equal to H:\n", v.begin(), res_end);
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