// From book <Using the C++ Standard Template Libraries> Chapter 2 Using Sequence Containers.
// Page 70.

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {

	list<string> my_words{ "three", "six", "eight" };
	list<string> your_words{ "seven", "four", "nine" };

	my_words.splice(my_words.begin(), your_words, your_words.begin());

	copy(your_words.begin(), your_words.end(), ostream_iterator<string>(cout, " "));
	
	cout << endl;

	copy(my_words.begin(), my_words.end(), ostream_iterator<string>(cout, " "));

	cout << endl;

}
