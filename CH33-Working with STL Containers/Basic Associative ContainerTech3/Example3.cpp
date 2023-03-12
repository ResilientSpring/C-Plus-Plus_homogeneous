// Demonstrate the basic associative container operations.

// This example uses map, but the same basic techniques can be applied to any associative container.

#include <iostream>
#include <string>
#include <map>
using namespace std;


void show(const char *message, map<string, int> m);


int main() {

	// Declare an empty map that holds key/value pairs in which the key is a string and the value is an int.
	map<string, int> m;

	// Insert characters into m. An iterator to the inserted object is returned. 
	m.insert(pair<string, int>("Alpha", 100));
	m.insert(pair<string, int>("Gamma", 300));
	m.insert(pair<string, int>("Beta", 200));

	// Declare an iterator to a map<string, itr>.
	map<string, int>::iterator itr;

	// Display the first element in m.

	itr = m.begin();

	cout << "Here is the first key/value pair in m: " << itr->first << ", " << itr->second << endl;

	// Display the last element in m.
	itr = m.end();
	--itr;
	cout << "Here is the last key/value pair in m: " << itr->first << ", " << itr->second << endl << endl;

	// Display the entire contents of m.
	show("Entire contents of m: ", m);

	// Show the size of m, which is the number of elements currently held by map.
	cout << "Size of m is " << m.size() << endl << endl;

	// Declare a reverse iterator to a map<string, map>.
	map<string, int>::reverse_iterator ritr;

	// Now, show the contents of m in reverse order.
	cout << "The contents of m in reverse: " << endl;

	for (ritr = m.rbegin(); ritr != m.rend(); ritr++)
		cout << ritr->first << ", " << ritr->second << endl;

	cout << endl;

	// Find an element given its key.
	itr = m.find("Beta");

	if (itr != m.end())
		cout << itr->first << " has the value " << itr->second << endl;
	else
		cout << "Key not found. " << endl << endl; 

	
	// Create another map that is the same as the first
	map<string, int> m2(m);
	show("Contents of m2: ", m2);


	// Compare two maps.
	if (m2 == m)
		cout << "m2 and m are equivalent. " << endl << endl;


	// Insert more elements into m and m2.
	cout << "Insert more elements into m and m2." << endl;

	m.insert(make_pair("Epsilon", 99));
	m2.insert(make_pair("Zeta", 88));
	show("Contents of m are now: ", m);
	show("Contents of m2 are now: ", m2);

	// Determine the relationship between m and m2. This is a lexicographical comparison. Therefore, the first
	// non-matching element in the container determines which container is less than the other.
	if (m < m2)
		cout << "m is less than m2." << endl << endl;

}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *message, map<string, int> m) {
	
	cout << message << endl;;

	map<string, int>::iterator itr;

	for (itr = m.begin(); itr != m.end(); itr++)
		cout << itr->first << ", " << itr->second << endl;

	cout << endl;
}