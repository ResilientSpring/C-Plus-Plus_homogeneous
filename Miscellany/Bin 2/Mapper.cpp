#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*
#define print_flag 0
#define read_flag 0
#define topology_flag 0
#define label_flag 0
#define map_flag 0
#define output_flag 0
#define decomposition_flag 0
*/

void read_blif(string blif);

int K;
string model_name;

int main(int argc, char** argv) { // [1]

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

	ifstream fin;

	fin.open(blif, ios::in);

	if (!fin) {

		cout << "Cannot open the file" << endl;

		return;
	}

	string temp, port, node;  // [2]

	// model name
	fin >> temp >> model_name;

	if (1) {
		cout << "Model name : " << model_name << endl;
	}

	// input port
	fin >> temp;

	while (1) {

		fin >> port;

		if (strcmp(port.c_str(), ".outputs") == 0) {
			break;
		}
		else {

			if (port[0] != '\\') {

				// create new node
				// store into input vector
				G_node.push_back(port);
				G_input.push_back(port);
			}
		}
	}
}



/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111
  2. https://github.com/alan861130/Logic-synthesis/blob/main/src/map.cpp

*/