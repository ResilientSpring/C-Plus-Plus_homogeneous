#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream out("text");


	// If the file cannot be opened, the stream object will be be false.
	if (!out) {

		cout << "Cannot open file. \n";

		return 1;

	}

	out << 10 << " " << 123.23 << "\n";  // Output to the file.
	out << "This is a short text file.";


	// A stream is linked to a file through an open operation and disassociated from it through
	// a close operation.
	out.close();

}