// Display a file using get()

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {

	char ch;

	if (argc != 2) {

		cout << "Usage: PR <filename> \n";

		return 1;
	}

	// Because you are dealing with a file, the class of the stream object shall be ifstream.
	ifstream input_stream(argv[1], ios::binary);

	if (!input_stream) {

		cout << "Cannot open file. \n";

		return 1;
	}


	// while loop
	while (input_stream) {  // input_stream will be false when eof is reached.

		input_stream.getline(ch);

	}

}