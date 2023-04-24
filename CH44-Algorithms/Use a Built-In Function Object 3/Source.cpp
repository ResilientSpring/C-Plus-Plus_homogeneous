// Demonstrate negate and multiplies function objects.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

template<class T>
void show(const char *message, T cont);

int main() {

	vector<int> v, v2, result(10);

	for (unsigned i = 0; i < 10; i++)
		v.push_back(i);

	for (unsigned i = 0; i < 10; i++)
		v2.push_back(i);

	show("Contents of v:\n", v);
	show("Contents of v2:\n", v2);
	cout << endl;

}

// Display the contents of a container.
template<class T>
void show(const char *message, T cont) {

	cout << message;

	T::iterator itr;

	for (itr = cont.begin(); itr != cont.end(); itr++)
		cout << *itr << " ";

	cout << "\n";
}