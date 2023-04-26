// Use copy to copy elements from a list to a vector.
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

template<class T>
void show(const char *message, T const);

int main() {

}


template<class T>
void show(const char *message, T const) {

	cout << message;

	T::iterator itr;

	for (itr = const.begin(), itr != const.end(), itr++)
		cout << *itr;

	cout << "\n\n";
}