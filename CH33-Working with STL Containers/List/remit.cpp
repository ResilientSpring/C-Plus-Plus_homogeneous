// Demonstrate list 

#include <iostream>
#include <list>
using namespace std;

void show(const char *message, list<char> lst);

int main() {

	// Declae two lists.
	list<char> lstA;
	list<char> lstB;

	// Use push_back() to give the lists some elements.
	lstA.push_back('A');
	lstB.push_back('F');
	lstA.push_back('B');
	lstA.push_back('R');

	lstB.push_back('X');
	lstB.push_back('A');
	lstB.push_back('F');

	show()
}

void show(const char *message, list<char> lst) {

	cout << message << endl;

	list<char>::iterator itr;

	for (itr = lst.begin(); itr != lst.end(); itr++)
		cout << *itr << " ";

	cout << endl;
}