#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void read_blif(string blif);

int K;
string model_name;

int main(int argc, char **argv) { // [1]

	if (argc != 4) {

		cout << "Usage:  \n";
		cout << "./mapping <path_to_the_input_blif> <LUT_size_(K)> <output_file_name>" << endl;
		exit(1);
	}

	string input_blif = argv[1];

	K = stoi(argv[2]);

	cout << "Input File: " << argv[1] << endl;
	cout << "K: " << argv[2] << endl;
	cout << "Output File: " << argv[3] << endl;
}


void read_blif(string blif) {

	ifstream input_stream;

	input_stream.open(blif);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}

	while (input_stream)
	{

	}

}



/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111

*/