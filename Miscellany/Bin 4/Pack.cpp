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

void Depth_First_Search(int v, bool *visited, stack<int> &topological_Stack);
void Inverse_Depth_First_Search(int v, bool *visited, queue<int> &Queue, vector<int> *tree_inv);

string title;

int intermediate_node;
int K;
int total_number_of_nodes = 0;
int number_of_primary_inputs = 0;
int number_of_latches = 0;
int number_of_primary_outputs = 0;
int number_of_AND_nodes = 0;

set<int> primary_inputs;
set<int> latches;
set<int> primary_outputs;

list<int> *adjacency_list_of_network;
list<int> *inverse_adjacency_list_of_network = NULL;

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

	string input_aag = argv[1];
	read(input_aag);

	K = stoi(argv[2]);

	cout << "Input File: " << argv[1] << endl;
	cout << "K: " << argv[2] << endl;
	cout << "Output File: " << argv[3] << endl;
}


void read(string aag) {

	ifstream input_stream;

	input_stream.open(aag);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}

	input_stream >> title;
	input_stream >> total_number_of_nodes;
	input_stream >> number_of_primary_inputs;
	input_stream >> number_of_latches;
	input_stream >> number_of_primary_outputs;
	input_stream >> number_of_AND_nodes;

	for (int i = 0; i < number_of_primary_inputs; i++)
	{
		input_stream >> intermediate_node;
		primary_inputs.insert(intermediate_node);
	}

	for (int i = 0; i < number_of_latches; i++)
	{
		input_stream >> intermediate_node;
		latches.insert(intermediate_node);
	}

	for (int i = 0; i < number_of_primary_outputs; i++)
	{
		input_stream >> intermediate_node;
		primary_outputs.insert(intermediate_node);
	}

	adjacency_list_of_network = new list<int>[total_number_of_nodes];
	inverse_adjacency_list_of_network = new list<int>[total_number_of_nodes];

	int fan_in_1_ID, fan_in_2_ID, AND_ID;

	while (input_stream >> AND_ID)
	{
		adjacency_list_of_network[fan_in_1_ID].push_back(AND_ID);
		adjacency_list_of_network[fan_in_2_ID].push_back(AND_ID);

		inverse_adjacency_list_of_network[AND_ID].push_back(fan_in_1_ID);
		inverse_adjacency_list_of_network[AND_ID].push_back(fan_in_2_ID);
	}

	input_stream.close();

}

void Depth_First_Search(int v, bool *visited, stack<int> &Stack) {

	// Mark the current node as visited.
	visited[v] = true;

	list<int>::iterator itr;

	// Recur for all vertices adjacent to this vertex.
	for (itr = adjacency_list_of_network[v].begin(); itr != adjacency_list_of_network[v].end(); itr++)
		if (!visited[*itr])
			Depth_First_Search(*itr, visited, Stack);


	// Push current vertex onto stack which stores result except for primary input.
	Stack.push(v);

}


void Inverse_Depth_First_Search(int v, bool *visited, queue<int> &Queue, vector<int> *tree_inv) {

	// Mark the current node as visited.
	visited[v] = true;

	list<int>::iterator itr;

	for (itr = inverse_adjacency_list_of_network[v].begin();
		itr != inverse_adjacency_list_of_network[v].end(); itr++) {

		tree_inv[v].push_back(*itr);

		if (!visited[*itr])
			Inverse_Depth_First_Search(*itr, visited, Queue, tree_inv);
	}

	Queue.push(v);

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