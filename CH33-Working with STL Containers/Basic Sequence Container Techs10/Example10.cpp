// Demonstrate the basic sequence container operations.
//
// This example uses vector, but the same techniques can be applied to any sequence container.

#include <iostream>
#include <vector>
using namespace std;

void show(const char *msg, vector<char> vect);

int main() {

	// Declare an empty vector that can hold char objects.
	vector<char> v;

	// Declare an object of iterator class.
	vector<char>::iterator itr;

	// Obtain an iterator to the start of v.
	itr = v.begin();

	// Insert character 'A' into v at the point specified by the iterator and then return the iterator at 'A'.
	itr = v.insert(itr, 'A');

	// Insert character 'B' immediately before the element specified by the iterator, and then return the iterator at 'B'.
	itr = v.insert(itr, 'B');

	// Insert character 'C' immediately before the element specified by the iterator, and then return the iterator at 'C'.
	v.insert(itr, 'C');

	// Display the contents of v.
	show("The contents of v: ", v);

	// Declare a reverse iterator.
	vector<char>::reverse_iterator ritr;

	// Use a reverse iterator to show the contents of v in reverse.
	cout << "Here is v in reverse: ";

	for (ritr = v.rbegin(); ritr != v.rend(); ++ritr)
		cout << *ritr << " ";

	cout << "\n\n";

	// Create another vector that is the same as the first.
	vector<char> v2(v);

	show("The contents of v2: ", v2);

	cout << "\n\n";

	// Show the size of v, which is the number of elements currently held by v.
	cout << "Size of v is " << v.size() << endl;

	// Compare two containers.
	if (v2 == v)
		cout << "v and v2 are equivalent. \n\n";


	// Insert more characters into v and v2. This time, insert them at the end.
	cout << "Insert more characters into v and v2. This time, insert them at the end of the vector." << endl;

	v.insert(v.end(), 'D');
	v.insert(v.end(), 'E');
	v2.insert(v2.end(), 'X');

	show("The contents of v: ", v);
	show("The contents of v2: ", v2);

	cout << "\n";

	// Determine if v is less than v2. This is a lexicographical comparison. Therefore, the first non-matching 
	// element determines which container is less than another.
	if (v < v2)
		cout << "v is less than v2" << endl << endl;


	// Now, insert z at the start of v.
	cout << "Insert z at the start of v." << endl;

	v.insert(v.begin(), 'z');

	show("The content of v: ", v);

	cout << "\n";

	// Now, compare v to v2 again.
	if (v < v2) cout << "v is less than v2";
	else if (v == v2);
	else if (v > v2) cout << "Now, v is greater than v2." << endl << endl;


	// Remove the first element from v2.
	v2.erase(v2.begin());

	show("v2 after removing the first element: ", v2);


	// Create another vector.
	vector<char> v3;
	v3.insert(v3.end(), 'x');
	v3.insert(v3.end(), 'Y');
	v3.insert(v3.end(), 'Z');

	show("The contents of v3: ", v3);
}


// Display the contents of a vector<char> by using an iterator.
void show(const char *msg, vector<char> vect) {

	vector<char>::iterator itr;

	cout << msg;

	for (itr = vect.begin(); itr != vect.end(); itr++)
		cout << *itr << " ";
	cout << "\n";
}