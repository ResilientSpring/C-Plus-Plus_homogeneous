// Write formatted output to a text file. 

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	// Create an ofstream object and attempt to open the file test.dat
	ofstream fout("test.dat");

	// Verify that the file has been successfully opened.
	if (!fout) {
		
		cout << "Cannot open.";

		return 1;
	}


	// Write output to the file.
	fout << 10 << " " << -20 << " " << 30.2 << "\n" << "This is a test.";

	fout.close();

}