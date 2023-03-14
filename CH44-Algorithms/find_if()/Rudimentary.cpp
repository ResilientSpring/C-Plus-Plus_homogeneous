// Demonstrate the find_if() algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool is_short_str(string str);

int main() {

	vector<string> v;
	vector<string>::iterator itr;

	v.push_back("one");
	v.push_back("two");
	v.push_back("three");
	v.push_back("four");
	v.push_back("five");
	v.push_back("six");


	// Find all strings that are less than 4 characters long.
	cout << "Searching for all strings that have 3 or fewer characters. \n";

	itr = v.begin();

	do {
		itr = find_if(itr, v.end(), is_short_str);
	} while ();

}

bool is_short_str(string str) {
	
	if (str.size() <= 3)
		return true;

	return false;
}