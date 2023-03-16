#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream out("test");


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


	////////////////////////////////////////////////


	char ch;
	int i;
	float f;
	char str[80];

	ifstream in("test");

	// If the file cannot be opened to read, the stream object will be false.
	if (!in) {

		cout << "The file cannot be opened.";
		
		return 1;
	}

	in >> i >> f >> ch >> str;  // Read from the file.

	cout << i << " " << f << " " << ch << " " << str;

	cout << endl << endl;

	cout << i << " " << f << " " << str;

	cout << endl << endl;

	cout << i << " " << f << " " << ch << "\n";
	cout << str;

	cout << endl;
}