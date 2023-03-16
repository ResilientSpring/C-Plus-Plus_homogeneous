// Display a file using get()

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {

	char ch;

	if (argc != 2) {
		
		cout << "Usage: PR <filename> \n";
		
		return 1;
	}
	
	istream input_stream(argv[1]);


}