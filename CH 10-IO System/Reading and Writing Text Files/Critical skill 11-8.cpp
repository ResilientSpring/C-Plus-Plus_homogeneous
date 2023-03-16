// Write to file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream stream("test");

	if (!stream) {

		cout << "Cannot open file. \n";

		return 1;
	}

	stream << 10 << " " << 123.23 << endl;
	stream << "This is a short text file.";

	stream.close();

}