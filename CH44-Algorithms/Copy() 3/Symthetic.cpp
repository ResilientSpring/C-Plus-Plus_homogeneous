// Use copy to copy elements from a list to a vector.
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

void show(const char *message, list<char> lst);
void show(const char *message, vector<char> v);

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


void show(const char *message, list<char> lst) {

	cout << message;

	list<char>::iterator itr;

	for (itr = lst.begin(); itr != lst.end(); itr++)
		cout << *itr;

	cout << "\n\n";
}


void show(const char *message, vector<char> v) {

	cout << message;

	vector<char>::iterator itr;

	for (itr = v.begin(); itr != v.end(); itr++)
		cout << *itr;

	cout << "\n\n";
}