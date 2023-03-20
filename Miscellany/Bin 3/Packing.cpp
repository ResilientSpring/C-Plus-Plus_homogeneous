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
int reading_the_line_from_hereon = 0;
int vertex_count;
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
	read_blif(input_blif);

	K = stoi(argv[2]);

	cout << "Input File: " << argv[1] << endl;
	cout << "K: " << argv[2] << endl;
	cout << "Output File: " << argv[3] << endl;
}


void read_blif(string blif) {

	string sitting_line;

	ifstream input_stream;

	input_stream.open(blif);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}


	while (getline(input_stream, sitting_line))
	{
		stringstream string_stream(sitting_line);
		getline(string_stream, intermediate, ' ');

		if (intermediate == ".model") {

			reading_the_line_from_hereon = 1;
			getline(string_stream, intermediate, ' ');
			sitting_model.name = intermediate;

		}
		else if (intermediate == ".inputs") {

			reading_the_line_from_hereon = 2;

			while (getline(string_stream, intermediate, ' '))
			{
				if (intermediate != "\\") {
					sitting_vertex.ID = intermediate;
					sitting_vertex.type = 1;
					sitting_vertex.level = 0;
					sitting_vertex.and_or_inv = -1;
					sitting_model.node.push_back(sitting_vertex);
					primary_inputs.push_back(intermediate);
					number_of_primary_inputs++;
				}
			}
		}
		else if (intermediate == ".outputs") {

			reading_the_line_from_hereon = 3;
			while (getline(string_stream, intermediate, ' '))
			{
				if (intermediate != "\\") {
					sitting_vertex.ID = intermediate;
					sitting_vertex.type = 3;
					sitting_model.node.push_back(sitting_vertex);
					primary_outputs.push_back(intermediate);
					number_of_primary_outputs++;
				}
			}
		}
		else if (intermediate == ".names") {
			
			int max_level = -1;

			reading_the_line_from_hereon = 4;

			while (getline(string_stream, intermediate, ' '))
			{
				for (vertex_count = 0; vertex_count < sitting_model.node.size(); vertex_count++)
				{
					if (sitting_model.node[vertex_count].ID == intermediate)
						break;
				}
			}

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