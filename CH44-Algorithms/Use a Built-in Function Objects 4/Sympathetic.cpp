// Demonstrate negate and multiplies function objects.

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void show(const char *message, vector<int> v);

int main() {

	vector<int> v, v2, result(10);

	for (unsigned i = 0; i < 10; i++)
		v.push_back(i);

	for (unsigned i = 0; i < 10; i++)
		v2.push_back(i);

	show("Contents of v:\n", v);
	show("Contents of v2:\n", v2);
	cout << endl;

	// Multiply v and v2 together.
	transform(v.begin(), v.end(), v2.begin(), result.begin(), multiplies<int>());

	show("Result of multiplying the elements in v with those in v2: \n", result);

	cout << endl;


	// Next, negate the contents of result.
	transform(v.begin(), v.end(), v.begin(), negate<int>());

	show("After negating v: \n", v);
}

// Display the contents of a container.
void show(const char *message, vector<int> v) {

	cout << message;

	vector<int>::iterator itr;

	for (itr = v.begin(); itr != v.end(); itr++)
		cout << *itr << " ";

	cout << "\n";
}