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


}

// Display the contents of a map<string, int> by using an iterator.
void show(const char *message, map<string, int> m) {
	
	cout << message << endl;;

	map<string, int>::iterator itr;

	for (itr = m.begin(); itr != m.end(); itr++)
		cout << itr->first << ", " << itr->second << endl;

	cout << endl;
}