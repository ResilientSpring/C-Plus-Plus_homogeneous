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
	lstA.push_back('F');
	lstA.push_back('B');
	lstA.push_back('R');

	lstB.push_back('X');
	lstB.push_back('A');
	lstB.push_back('F');

	show("Original contents of lstA: ", lstA);
	show("Original contents of lstB: ", lstB);

	cout << "Size of lstA is " << lstA.size() << endl;
	cout << "Size of lstB is " << lstB.size() << endl;

	cout << endl;

	// Sort lstA and lstB
	lstA.sort();
	lstB.sort();

	show("Sorted contents of lstA: ", lstA);
	show("Sorted contents of lstB: ", lstB);

	cout << endl;

	// Merge lstB into lstA.
	lstA.merge(lstB);

	show("lstA after merge: ", lstA);

	if (lstB.empty()) cout << "lstB is now empty.\n" << endl;

	// Remove duplicates from lstA.
	lstA.unique();

	show("lstA after call to unique(): ", lstA);

	cout << endl;

	// Give listB some new elements.
	lstB.push_back('G');
	lstB.push_back('H');
	lstB.push_back('P');

	show("New contents of lstB: ", lstB);

	cout << endl;

	// Now splice lstB into lstA.
	list<char>::iterator itr;
	itr = lstA.begin();
	itr = itr + 1;
	/*
	* According to C++ designer Bjarne Stroustrup's authored book <The C++ Programming Language (4th edition)>
	section on 33.1.1 has stated that "Iterator is akin to pointer in that it provides operations for indirect access
	(* for dereferencing)	and for moving to point to the next element (++ for moving to the next element)".

	This is to say pointer and iterator are very similar but not the same.
	*/
}

void show(const char *message, list<char> lst) {

	cout << message << endl;

	list<char>::iterator itr;

	for (itr = lst.begin(); itr != lst.end(); itr++)
		cout << *itr << " ";

	cout << endl << endl;
}