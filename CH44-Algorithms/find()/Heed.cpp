// Demonstrate the find() and find_if() algorithms.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> v;
	vector<string>::iterator itr;

	v.push_back("one");
	v.push_back("two");
	v.push_back("three");
	v.push_back("four");
	v.push_back("five");
	v.push_back("six");

	cout << "Contents of v: ";

	for (unsigned i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	cout << endl << endl;


}