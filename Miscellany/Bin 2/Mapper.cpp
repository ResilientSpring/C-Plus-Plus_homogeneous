#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
using namespace std;

void read_blif(string blif);

int K;
int number_of_primary_inputs = 0;
int number_of_primary_outputs = 0;
int number_of_intermediate_nodes = 0;
string model_name, intermediate;

map<string, LUT*> find_Node;

vector<string> primary_inputs;
vector<string> intermediate_nodes;
vector<string> primary_outputs;


class LUT {      // [3]
public:
	string ID;

	bool in_use;
	vector<int> fanins;
	int fanout;
	int number_of_fanouts;

	int label;
	int operate;

	LUT *first = NULL;
	LUT *second = NULL;
};



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
		input_stream >> intermediate;     // [2]

		if (intermediate == "\\")
			continue;
		else if (intermediate == ".outputs")
			break;
		else {

			LUT *n = new LUT();
			n->ID = intermediate;
			n->label = 0;
			find_Node[intermediate] = n;  // intermediate here serves as a key.
			primary_inputs.push_back(intermediate);

		}

	}

}



/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111

*/