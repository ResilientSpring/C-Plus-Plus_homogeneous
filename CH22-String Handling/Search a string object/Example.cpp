// Search a string.

#include <iostream>
#include <string>
using namespace std;

int main() {

	string::size_type index;

	// Create a string.
	string str("one two three, one two three");
	string str2;

	cout << "String to be searched: " << str << endl << endl;

	cout << "Searching for the first occurence of 'two' \n";

	index = str.find("two");
}


void show_result(string s, string::size_type i) {

	if (i == string::npos)
	{
		cout << "No match found." << endl;
		return;
	}

}