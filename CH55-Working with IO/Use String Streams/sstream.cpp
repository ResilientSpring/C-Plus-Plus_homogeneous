// Use a string stream.

#include <iostream>
#include <sstream>
using namespace std;

int main() {

	char ch;

	// Create an output string stream.
	ostringstream strout;

	cout << "Use an output string stream called strout." << endl;

	// Write output to the string stream.
	strout << 10 << " " << -20 << " " << 30.2 << "\n";
	strout << "This is a test.";

	// Now, obtain a copy of the current contents of the string stream buffer.
}