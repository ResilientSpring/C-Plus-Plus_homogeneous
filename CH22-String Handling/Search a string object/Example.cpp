// Search a string.

#include <iostream>
#include <string>
using namespace std;

void show_result(string s, string::size_type i);

int main() {

	string::size_type index;

	// Create a string.
	string str("one two three, one two three");
	string str2;

	cout << "String to be searched: " << str << endl << endl;

	cout << "Searching for the first occurence of 'two' \n";

	index = str.find("two");

	show_result(str, index);
}


void show_result(string s, string::size_type i) {

	if (i == string::npos)
	{
		cout << "No match found." << endl;
		return;
	}

	cout << "Match found at index " << i << endl;

	cout << "Remaining string from point of match: " << s.substr(i) << endl << endl;

}