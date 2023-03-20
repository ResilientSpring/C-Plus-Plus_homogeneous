#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <cstring>
#include <sstream>
using namespace std;

void read_blif(string blif);

int K;
int number_of_primary_inputs = 0;
int number_of_primary_outputs = 0;
int number_of_intermediate_nodes = 0;
string blif_name, intermediate;

char model[] = ".model";

map<string, vertex*> find_Node;

vector<string> primary_inputs;
vector<string> intermediate_nodes;
vector<string> primary_outputs;

vector<string> operand;


class vertex {      // [3]
public:
	string ID;

	bool in_use;
	vector<int> fanins;
	int fanout;
	int number_of_fanouts;

	int label;
	int operate;

	int type;
	int level;
	int and_or_inv;

	vertex* first = NULL;
	vertex* second = NULL;

} sitting_vertex;



class model {

public:

	string name;
	vector<vertex> node;
	vector<vertex> LUT;

} sitting_model;



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

	ifstream input_stream;

	input_stream.open(blif);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}

	/*

	do
	{
		getline(input_stream, blif_name);

	} while (blif_name.find(".model") == string::npos);

	*/

	input_stream >> blif_name;

	if (strcmp(blif_name.c_str(), model) == 0)
		input_stream >> blif_name;



	while (input_stream)
	{
		input_stream >> intermediate;     // [2]

		if (intermediate == "\\")
			continue;
		else if (intermediate == ".outputs")
			break;
		else {

			vertex* n = new vertex();
			n->ID = intermediate;
			n->label = 0;
			find_Node[intermediate] = n;  // intermediate here serves as a key.
			primary_inputs.push_back(intermediate);
			number_of_primary_inputs++;        // [4]
		}

	}

	while (input_stream)
	{
		input_stream >> intermediate;

		if (intermediate == "\\") continue;
		else if (intermediate == ".names") break;
		else {
			primary_outputs.push_back(intermediate);
			number_of_primary_outputs++;
		}
	}

	// Fetch nodes between PI and PO.
	while (input_stream)
	{
		while (input_stream)
		{
			input_stream >> intermediate;

			if (intermediate[0] == '0' || intermediate[0] == '1' || intermediate[0] == '-')
				break;

		}
	}

}



/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111

*/