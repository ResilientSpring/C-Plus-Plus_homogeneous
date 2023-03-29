#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <cstring>
#include <sstream>
#include <set>
#include <list>
#include <queue>
#include <stack>
using namespace std;

string title;

int K;
int total_number_of_nodes = 0;
int number_of_primary_inputs = 0;
int number_of_latches = 0;
int number_of_primary_outputs = 0;
int number_of_and_nodes = 0;

set<int> primary_input;
set<int> primary_output;

list<int> *circuit;
list<int> *circuit_inverse;

// Cut trees from forest.
vector<vector<int> *> trees_inverse;

// Sort trees' nodes in topological order.
vector<queue<int>> trees_sorted_order;

vector<vertex **> trees_LUTs;


class vertex {
public:
	string ID;

	bool in_use;
	vector<int> fanins;
	int fanout;
	int number_of_fanins;

	int label;
	int operate;

	vector<vertex> inputs;

	int type;
	int level;
	int and_or_inv;

	vertex *first = NULL;
	vertex *second = NULL;

} LUT;


int main(int argc, char **argv) { // [1]

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

	ifstream input_stream;

	input_stream.open(blif);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}




}





/*
*
* References:
*
* 1. https://stackoverflow.com/a/645111
* 2. https://github.com/Lyeuiechang/Advanced_Logic_Synthesis/blob/main/Final%20Project/Upload%20Ready/main.cpp
* 3. https://github.com/yunchenlo/FlowMap_Tech_Mapping/blob/master/main.cpp
* 4. https://github.com/romulus0914/fpga_technology_mapping/blob/master/greedy_mapping.cpp
* 5. https://github.com/Koyama-Tsubasa/Advanced_Logic_Synthesis/blob/main/Final%20Project/submit/src/map.cpp
* 6. https://github.com/abhishekjain1991-zz/Raja_Raman_and_Wong_Clustering/blob/master/Source_code/RandW_clustering.cpp
* 7. https://github.com/weitunglin/blif_parser/blob/main/blif_parser.cpp
* 8. https://github.com/Ohpaipai/BLIF_CAD/blob/master/Source.cpp
* 9. https://github.com/alan861130/Logic-synthesis/blob/main/src/map.cpp#L419
* 10. https://github.com/rushhuang/NTHU_ALS_Final/blob/main/LEDA/map.cpp
* 11. https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c

*/