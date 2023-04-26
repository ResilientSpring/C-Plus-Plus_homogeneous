// Use copy to copy elements from a list to a vector.
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

template<class T>
void show(const char *message, T const);
void show(const char *message, list<char> lst);

int main() {

	list<char> lst;

	// Add elements to lst.
	char str[] = "Algorithms act on containers";
	for (int i = 0; str[i]; i++)
		lst.push_back(str[i]);

	// Create a vector that initiallly contains 40 periods.
	vector<char> v(40, '.');

	show("Contents of lst:\n", lst);
	show("Contents of v: \n", v);

	// Copy lst into v.
	copy(lst.begin(), lst.end(), v.begin() + 5);

	// Display result.
	show("Contents of v after copy: \n", v);

}


template<class T>
void show(const char *message, T const) {

	cout << message;

	T::iterator itr;

	for (itr = const.begin(), itr != const.end(), itr++)
		cout << *itr;

	cout << "\n\n";
}


void show(const char *message, list<char> lst) {

	cout << message;

	list<char>::iterator itr;

	for (itr = lst.begin(); itr != lst.end(); itr++)
		cout << *itr;

	cout << "\n\n";
}