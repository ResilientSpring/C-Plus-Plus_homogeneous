// Use copy to copy elements from a list to a vector.
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

template<class T>
void show(const char *message, T const);

int main() {

	list<char> lst;

	// Add elements to lst.
	char str[] = "Algorithms act on containers";
	for (int i = 0; str[i]; i++)
		lst.push_back(str[i]);

}


template<class T>
void show(const char *message, T const) {

	cout << message;

	T::iterator itr;

	for (itr = const.begin(), itr != const.end(), itr++)
		cout << *itr;

	cout << "\n\n";
}