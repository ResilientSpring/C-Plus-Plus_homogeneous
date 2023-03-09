#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) { // [1]

	if (argc != 4) {

		cout << "Usage: ./mapping <path_to_the_input_blif> <LUT_size_(K)> <output_file_name> \n";

		exit(1);
	}

	string blif_file = argv[1];


}

/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111


*/