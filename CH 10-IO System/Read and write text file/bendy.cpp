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



}