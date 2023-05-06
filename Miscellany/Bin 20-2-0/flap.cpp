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
#include <numeric>
#include <deque>
using namespace std;

void read(string aag);

// v: starting node; *visited: array of visited; &Stack: graph
void Depth_First_Search(int v, bool *visited, stack<int> &Stack);
void Topological_sort(stack<int> &Stack);
void Topological_sort_2(stack<int> &Stack);

// v: starting node; *visited: array of visited; &Queue: nodes in DFS order; *tree_inv: graph
void Inverse_Depth_First_Search(int v, bool *visited, queue<int> &Queue, vector<int> *tree_inv);
void converse_topological_sort(int node, queue<int> tree_sort_order, vector<int> *tree_inv);
void converse_topological_sort_2(int node, queue<int> tree_sort_order, vector<int> *tree_inv);
void dismantle_forest_to_trees(stack<int> &Stack);
void dismantle_forest_to_trees_2(stack<int> &Stack);
void dismantle_forest_to_trees_3(stack<int> &Stack);
void dismantle_forest_to_trees_4(stack<int> &Stack);
void mapper();
void mapper1();
void mapper2();
void mapper3();
void Output(string output_file);
void Output2(string output_file);

int packing(int CLB_input_size_);
int packing_2(int CLB_input_size_);
// bool comparison(int a);

string title;

int intermediate_node;
int K, CLB_input_size;
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
list<int> num_of_fanins_of_each_LUT = {};
list<int> lower_than_average, equal_to_or_higher_than_average, higher_than_average;

deque<int> lower_than_average_v, equal_to_or_higher_than_average_v, higher_than_average_v;
deque<int> num_of_fanins_of_each_LUT_v;

// Cut trees from forest.
vector<vector<int> *> trees_inverse;

// Sort each tree's internal nodes in topological order.
vector<queue<int>> topologically_sorted_nodes_in_a_tree;

// vector<vertex **> trees_LUTs;  Should be declared after class vertex's definition.


typedef class vertex {
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

} Look_Up_Table;


vector<vertex **> trees_LUTs;


int main(int argc, char **argv) {

	if (argc != 5) {

		cout << "Usage:  \n";
		cout << "./mapper <path_to_the_input_blif> <LUT_size_(K)> <output_file_name> <CLB size> \n";
		exit(1);
	}


	string input_aag = argv[1];
	read(input_aag);

	K = stoi(argv[2]);

	cout << "Input File: " << argv[1] << endl;
	cout << "K: " << argv[2] << endl;
	cout << "Output File: " << argv[3] << endl;
	cout << "CLB's input size constraint: " << argv[4] << endl;

	stack<int> gates;

	Topological_sort(gates);
	dismantle_forest_to_trees(gates);
	mapper1();

	string output_file_name = argv[3];
	Output(output_file_name);

	CLB_input_size = stoi(argv[4]);

	cout << endl << "The number of LUTs: " << num_of_fanins_of_each_LUT.size() << endl;

	cout << endl << "The number of CLBs: " << packing_2(CLB_input_size) << endl;
}


void read(string aag) {

	ifstream input_stream;

	input_stream.open(aag);

	if (!input_stream) {

		cout << "Cannot open the file" << endl;

		return;
	}
	else {
		cout << "Successfully opened the file" << endl;
	}

	input_stream >> title;
	input_stream >> total_number_of_nodes;      // = PI + Latches + ANDs
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

	adjacency_list_of_network = new list<int>[2 * total_number_of_nodes + 1];
	inverse_adjacency_list_of_network = new list<int>[2 * total_number_of_nodes + 1];

	int AND_ID, fan_in_1_ID, fan_in_2_ID;

	while (input_stream >> AND_ID &&
		input_stream >> fan_in_1_ID &&
		input_stream >> fan_in_2_ID)
	{

		//  while loop above will already become false if the input is not a series of 3 int.
		//	if (AND_ID == 'c') break;

			// A node's ID is the same as its index in the array of list.
		adjacency_list_of_network[fan_in_1_ID].push_back(AND_ID);
		adjacency_list_of_network[fan_in_2_ID].push_back(AND_ID);

		// "Array and linked lists are two common ways to store a linear list
		// , and each has its upside and downside" [21]
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

// DFS from primary output to primary input
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

	Queue.push(v);  // v is the node who has multiple parents (fanouts) in adjacency_list_of_network.
					// v is also *itr
}

/*
void Topological_sort() {   // [12]

	// Mark all vertices as not visited.
	bool *visited = new bool[total_number_of_nodes];

	for (int i = 0; i < total_number_of_nodes; i++)
		visited[i] = false;

	for (int i = 0; i < total_number_of_nodes; i++)
		if (visited[i] == false)
			Depth_First_Search(i, visited, Stack);

}

*/


void Topological_sort(stack<int> &Stack) {   // [12][2] [Note2]

	// Mark all vertices as not visited.
	bool *visited = new bool[2 * total_number_of_nodes + 1];

	for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
		visited[i] = false;

	for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
		if (visited[i] == false)
			Depth_First_Search(i, visited, Stack);
}


void Topological_sort_2(stack<int> &Stack) {   // [12][3] [Note2]

	// Mark all vertices as not visited.
	bool *visited = new bool[2 * total_number_of_nodes + 1];

	for (int i = 0; i <= 2 * total_number_of_nodes + 1; i++)
		visited[i] = false;

	for (int i = 1; i <= 2 * total_number_of_nodes + 1; i++)
		if (visited[i] == false)
			Depth_First_Search(i, visited, Stack);
}


// Topological srot starting from primary outputs to primary inputs.
void converse_topological_sort(int node, queue<int> tree_sort_order, vector<int> *tree_inv) {

	bool *visited = new bool[2 * total_number_of_nodes + 1];

	for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
		visited[i] = false;


	Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1] [Note3] [Note4]

	trees_inverse.push_back(tree_inv);
	topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);


	inverse_adjacency_list_of_network[node].clear();
}

// Topological srot starting from primary outputs to primary inputs.
void converse_topological_sort_2(int node, queue<int> tree_sort_order, vector<int> *tree_inv) {

	bool *visited = new bool[2 * total_number_of_nodes + 1];

	for (int i = 0; i <= 2 * total_number_of_nodes + 1; i++)
		visited[i] = false;


	Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1] [Note3] [Note4]

	trees_inverse.push_back(tree_inv);
	topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);


	inverse_adjacency_list_of_network[node].clear();
}


// Identifying the nodes within the DAG that have an out-degree greater than one, and using 
// these nodes as 'breaking points'. [16]
void dismantle_forest_to_trees(stack<int> &Stack) {

	while (!Stack.empty())  // Stack here is the topologically sorted graph.
	{
		int node = Stack.top();
		Stack.pop();

		// If the node taken from the top of stack is found to be a primary input, or 
		// not a primary output and has fanout node fewer than 2.
		if (primary_inputs.find(node) != primary_inputs.end() or
			(primary_outputs.find(node) == primary_outputs.end() &&
				adjacency_list_of_network[node].size() < 2))

			continue;

		//  Visual Studio disapproves of static declaration of variable-length array.
		// 
		//	vector<int> tree_inv[total_number_of_nodes];

		vector<int> *tree_inv;
		tree_inv = new vector<int>[2 * total_number_of_nodes + 1];

		queue<int> tree_sort_order;


		// Topological sort starting from primary outputs to primary inputs.
		bool *visited = new bool[2 * total_number_of_nodes + 1];

		for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
			visited[i] = false;

		Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1]

		// tree_inv is a copy of inverse_adjacency_list_of_network starting from a subtree's root.
		trees_inverse.push_back(tree_inv);
		topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);


		inverse_adjacency_list_of_network[node].clear();

	}


}


// Each node in the tree can be connected to many children (depending on the type of tree), 
// but must be connected to exactly one parent. [17]
void dismantle_forest_to_trees_2(stack<int> &Stack) {

	while (!Stack.empty())
	{
		int node = Stack.top();
		Stack.pop();

		// If the node taken from the top of stack is found to be a primary input, or 
		// not a primary output and has fanout node fewer than 2.
		if (primary_inputs.find(node) != primary_inputs.end() or
			(primary_outputs.find(node) == primary_outputs.end() &&
				adjacency_list_of_network[node].size() < 2))

			continue;

		//	vector<int> tree_inv[total_number_of_nodes];
		vector<int> *tree_inv = new vector<int>[2 * total_number_of_nodes + 1];

		queue<int> tree_sort_order;

		// Topological srot starting from primary outputs to primary inputs.
		bool *visited = new bool[2 * total_number_of_nodes + 1];

		for (int i = 0; i <= 2 * total_number_of_nodes + 1; i++)
			visited[i] = false;

		Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1]

		trees_inverse.push_back(tree_inv);
		topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);

		inverse_adjacency_list_of_network[node].clear();
	}


}


void dismantle_forest_to_trees_3(stack<int> &Stack) {

	while (!Stack.empty())
	{
		int node = Stack.top();
		Stack.pop();

		// If the node taken from the top of stack is found to be a primary input, or 
		// not a primary output and has fanout node fewer than 2.
		if (primary_inputs.find(node) != primary_inputs.end() or
			(primary_outputs.find(node) == primary_outputs.end() &&
				adjacency_list_of_network[node].size() < 2))

			continue;

		//  Visual Studio disapproves of static declaration of variable-length array.
		// 
		//	vector<int> tree_inv[total_number_of_nodes];

		vector<int> *tree_inv;
		tree_inv = new vector<int>[2 * total_number_of_nodes + 1];

		queue<int> tree_sort_order;

		// Topological srot starting from primary outputs to primary inputs.
		converse_topological_sort(node, tree_sort_order, tree_inv);

	}

}


void dismantle_forest_to_trees_4(stack<int> &Stack) {

	while (!Stack.empty())
	{
		int node = Stack.top();
		Stack.pop();

		// If the node taken from the top of stack is found to be a primary input, or 
		// not a primary output and has fanout node fewer than 2.
		if (primary_inputs.find(node) != primary_inputs.end() or
			(primary_outputs.find(node) == primary_outputs.end() &&
				adjacency_list_of_network[node].size() < 2))

			continue;

		//	vector<int> tree_inv[total_number_of_nodes];
		vector<int> *tree_inv = new vector<int>[2 * total_number_of_nodes + 1];

		queue<int> tree_sort_order;

		// Topological srot starting from primary outputs to primary inputs.
		converse_topological_sort_2(node, tree_sort_order, tree_inv);
	}

}

// Only one asterisk before LUTs.
void mapper() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table *LUTs = new Look_Up_Table[2 * total_number_of_nodes + 1];


		for (int i = 0; i < 2 * total_number_of_nodes + 1; i++) {

			//	LUTs[i] = NULL;

		}

	}
}


void mapper1() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table **LUTs = new Look_Up_Table * [2 * total_number_of_nodes + 1];


		for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
			LUTs[i] = NULL;

		// Because topologically_sorted_nodes_in_a_tree[i] returns an entire queue, 
		// it seems safer to precede the receiving variable with &; it's tested okay not doing it, though.
		queue<int> Queue = topologically_sorted_nodes_in_a_tree[i];
		//		queue<int> *Queue = &trees_topologically_sorted[i];

		vector<int> *tree_inv = trees_inverse[i];  // tree_inv is declared as an array of int vector (trees).
//		vector<int> tree_inverted = trees_inverse[i];

		while (!Queue.empty())
		{
			int node = Queue.front();  // A tree's first (root) node (b/c queue follows FIFO) in topological order.
			Queue.pop();

			if (tree_inv[node].empty())   // if the node is a primary input, i.e. a node without fanouts.
			{
				Look_Up_Table *dummy_LUT = new Look_Up_Table();
				dummy_LUT->in_use = true;
				dummy_LUT->fanins.push_back(node);
				dummy_LUT->fanout = node;
				dummy_LUT->number_of_fanins = 1;
				LUTs[node] = dummy_LUT;

				continue;
			}

			// Check whether the node's fanin is a primary input or LUT 
			int fan_in_1 = tree_inv[node][0];
			int fan_in_2 = tree_inv[node][1];


			//////////////////

			Look_Up_Table *fan_in_1_LUT = LUTs[fan_in_1];
			Look_Up_Table *fan_in_2_LUT = LUTs[fan_in_2];

			//////////////////


			// Record the check result.
			int number_of_inputs[2];


			// if the node's fan-in 1 is a primary input, i.e. a node without fanouts.
			if (tree_inv[fan_in_1].empty())
				number_of_inputs[0] = 1;
			else
				number_of_inputs[0] = fan_in_1_LUT->number_of_fanins;


			// if the node's fan-in 2 is a primary input, i.e. a node without fanouts.
			if (tree_inv[fan_in_2].empty())
				number_of_inputs[1] = 1;
			else
				number_of_inputs[1] = fan_in_2_LUT->number_of_fanins;


			// Greedy mapping
			if (number_of_inputs[0] + number_of_inputs[1] <= K)
			{
				Look_Up_Table *new_LUT = new Look_Up_Table;
				new_LUT->in_use = true;
				new_LUT->fanins = fan_in_1_LUT->fanins;
				new_LUT->fanins.insert(new_LUT->fanins.end(), fan_in_2_LUT->fanins.begin(), fan_in_2_LUT->fanins.end());
				new_LUT->fanout = node;
				new_LUT->number_of_fanins = new_LUT->fanins.size();
				LUTs[node] = new_LUT;
				fan_in_1_LUT->in_use = false;
				fan_in_2_LUT->in_use = false;
			}
			else {
				if (number_of_inputs[0] <= number_of_inputs[1])
				{
					if (number_of_inputs[0] + 1 <= K)
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins = fan_in_1_LUT->fanins;
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = new_LUT->fanins.size();
						LUTs[node] = new_LUT;
						fan_in_1_LUT->in_use = false;
					}
					else
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = 2;
						LUTs[node] = new_LUT;
					}
				}
				else
				{
					if (number_of_inputs[1] + 1 <= K)
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins = fan_in_2_LUT->fanins;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = new_LUT->fanins.size();
						LUTs[node] = new_LUT;
						fan_in_2_LUT->in_use = false;
					}
					else
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = 2;
						LUTs[node] = new_LUT;
					}
				}
			}
		}
		trees_LUTs.push_back(LUTs);
	}
}


void mapper2() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table *LUTs = new Look_Up_Table[2 * total_number_of_nodes + 1];


	}
}


void mapper3() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table **LUTs = new Look_Up_Table * [2 * total_number_of_nodes + 1];


		for (int i = 0; i <= 2 * total_number_of_nodes; i++)
			LUTs[i] = NULL;


		queue<int> Queue = topologically_sorted_nodes_in_a_tree[i];
		//		queue<int> *Queue = &trees_topologically_sorted[i];
		vector<int> *tree_inv = trees_inverse[i];

		while (Queue.empty() == false)
		{
			int node = Queue.front();
			Queue.pop();

			if (tree_inv[node].empty())   // if the node is a primary input, i.e. a node without fanouts.
			{
				Look_Up_Table *dummy_LUT = new Look_Up_Table();
				dummy_LUT->in_use = true;
				dummy_LUT->fanins.push_back(node);
				dummy_LUT->fanout = node;
				dummy_LUT->number_of_fanins = 1;
				LUTs[node] = dummy_LUT;

				continue;
			}

			// Check whether the node's fanin is a primary input or LUT 
			int fan_in_1 = tree_inv[node][0];
			int fan_in_2 = tree_inv[node][1];


			//////////////////

			Look_Up_Table *fan_in_1_LUT = LUTs[fan_in_1];
			Look_Up_Table *fan_in_2_LUT = LUTs[fan_in_2];

			//////////////////


			// Record the check result.
			int number_of_inputs[2];

			if (tree_inv[fan_in_1].empty())
				number_of_inputs[0] = 1;
			else
				number_of_inputs[0] = fan_in_1_LUT->number_of_fanins;

			if (tree_inv[fan_in_2].empty())
				number_of_inputs[1] = 1;
			else
				number_of_inputs[1] = fan_in_2_LUT->number_of_fanins;


			// Greedy mapping
			if (number_of_inputs[0] + number_of_inputs[1] <= K)
			{
				Look_Up_Table *new_LUT = new Look_Up_Table;
				new_LUT->in_use = true;
				new_LUT->fanins = fan_in_1_LUT->fanins;
				new_LUT->fanins.insert(new_LUT->fanins.end(), fan_in_2_LUT->fanins.begin(), fan_in_2_LUT->fanins.end());
				new_LUT->fanout = node;
				new_LUT->number_of_fanins = new_LUT->fanins.size();
				LUTs[node] = new_LUT;
				fan_in_1_LUT->in_use = false;
				fan_in_2_LUT->in_use = false;
			}
			else {
				if (number_of_inputs[0] <= number_of_inputs[1])
				{
					if (number_of_inputs[0] + 1 <= K)
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins = fan_in_1_LUT->fanins;
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = new_LUT->fanins.size();
						LUTs[node] = new_LUT;
						fan_in_1_LUT->in_use = false;
					}
					else
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = 2;
						LUTs[node] = new_LUT;
					}
				}
				else
				{
					if (number_of_inputs[1] + 1 <= K)
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins = fan_in_2_LUT->fanins;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = new_LUT->fanins.size();
						LUTs[node] = new_LUT;
						fan_in_2_LUT->in_use = false;
					}
					else
					{
						Look_Up_Table *new_LUT = new Look_Up_Table;
						new_LUT->in_use = true;
						new_LUT->fanins.push_back(fan_in_1);
						new_LUT->fanins.push_back(fan_in_2);
						new_LUT->fanout = node;
						new_LUT->number_of_fanins = 2;
						LUTs[node] = new_LUT;
					}
				}
			}
		}
		trees_LUTs.push_back(LUTs);
	}
}


void Output(string output_file) {

	ofstream output_stream;

	output_stream.open(output_file);

	for (auto **LUTs : trees_LUTs) {

		for (int i = 0; i < 2 * total_number_of_nodes + 1; i++)
		{
			if (LUTs[i] != NULL && LUTs[i]->in_use == true)
			{
				output_stream << LUTs[i]->fanout;

				for (auto j : LUTs[i]->fanins)
					output_stream << " " << j;

				num_of_fanins_of_each_LUT.push_back(LUTs[i]->fanins.size());

				output_stream << endl;
			}
		}

	}
	output_stream.close();
}


void Output2(string output_file) {

	ofstream output_stream;

	output_stream.open(output_file);

	for (auto **LUTs : trees_LUTs) {

		for (int i = 1; i <= 2 * total_number_of_nodes + 1; i++)
		{
			if (LUTs[i] != NULL && LUTs[i]->in_use == true)
			{
				output_stream << LUTs[i]->fanout;

				for (auto j : LUTs[i]->fanins)
					output_stream << " " << j;

				num_of_fanins_of_each_LUT.push_back(LUTs[i]->fanins.size());

				output_stream << endl;
			}
		}

	}
	output_stream.close();
}



int packing(int CLB_input_size_) {

	num_of_fanins_of_each_LUT.sort();

	double middle_index = num_of_fanins_of_each_LUT.size() / 2;

	//	partition(num_of_fanins_of_each_LUT.begin(), num_of_fanins_of_each_LUT.end(), comparison);

	//	partition_copy(num_of_fanins_of_each_LUT.begin(), num_of_fanins_of_each_LUT.end(),
	//		back_inserter(lower_than_average), back_inserter(equal_to_or_higher_than_average),
	//		[average](int t) {return t < average; });


//	partition_copy(num_of_fanins_of_each_LUT.begin(), num_of_fanins_of_each_LUT.end(),
//		back_inserter(lower_than_average), back_inserter(higher_than_average),
//		[average](int t) {return t < average; });

	int num_of_LUTs = num_of_fanins_of_each_LUT.size();
	int num_of_CLBs = 0;
	deque<deque<int>> num_of_CLBs_dequeue;

	//	copy(lower_than_average.begin(), lower_than_average.end(), back_inserter(lower_than_average_v));
	//	copy(higher_than_average.begin(), higher_than_average.end(), back_inserter(higher_than_average_v));

	copy(num_of_fanins_of_each_LUT.begin(), num_of_fanins_of_each_LUT.end(),
		back_inserter(num_of_fanins_of_each_LUT_v));

	for (int i = 0; i <= middle_index; i++) {

		for (int j = num_of_fanins_of_each_LUT_v.size() - 1; j > middle_index; j--) {

			if (num_of_fanins_of_each_LUT_v[i] + num_of_fanins_of_each_LUT_v[j] <= CLB_input_size_) {

				num_of_CLBs++;

			}

		}

	}

	return num_of_CLBs;
}


int packing_2(int CLB_input_size_) {

	num_of_fanins_of_each_LUT.sort();

	double middle_index = num_of_fanins_of_each_LUT.size() / 2;

	int num_of_LUTs = num_of_fanins_of_each_LUT.size();
	int num_of_CLBs = 0;
	deque<deque<int>> num_of_CLBs_dequeue;

	copy(num_of_fanins_of_each_LUT.begin(), num_of_fanins_of_each_LUT.end(),
		back_inserter(num_of_fanins_of_each_LUT_v));

	int i, j;

	/*

	for (int i = 0, j = num_of_fanins_of_each_LUT_v.size() - 1; i <= middle_index, j > middle_index;
		i++, j--) {



	}

	*/

	for (i = 0, j = num_of_fanins_of_each_LUT_v.size() - 1; i <= middle_index && j > middle_index;
		i++, j--) {

		if (num_of_fanins_of_each_LUT_v[i] + num_of_fanins_of_each_LUT_v[j] <= CLB_input_size_) {

			num_of_CLBs++;

			num_of_fanins_of_each_LUT_v.pop_front();
			num_of_fanins_of_each_LUT_v.pop_back();

			packing_2(CLB_input_size_);

		}

	}

	return num_of_CLBs;
}


int packer(deque<int> the_number_of_fanins_of_each_LUT) {

	int i, j;
	double middle_index = the_number_of_fanins_of_each_LUT.size() / 2;

	static int the_number_of_CLBs = 0;

	for (i = 0, j = the_number_of_fanins_of_each_LUT.size() - 1; i <= middle_index && 
		j > middle_index; i++, j--) {

		if (the_number_of_fanins_of_each_LUT[i] + the_number_of_fanins_of_each_LUT[j] 
			<= CLB_input_size) {

			the_number_of_CLBs++;

			the_number_of_fanins_of_each_LUT.pop_front();
			the_number_of_fanins_of_each_LUT.pop_back();

			packer(the_number_of_fanins_of_each_LUT);

		}

	}

}



/*

bool comparison(int a) {

	if (a < average)
		return true;
	else
		return false;
}

*/

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
* 12. https://archive.is/DQbVo
* 13. https://en.wikipedia.org/wiki/Depth-first_search#Applications
* 14. https://en.wikipedia.org/wiki/Component_(graph_theory)#Definitions_and_examples
* 15. https://en.wikipedia.org/wiki/Depth-first_search#Vertex_orderings
* 16. https://janders.eecg.utoronto.ca/pdfs/dac98.pdf (Technology Mapping for Large Complex PLDs)
* 17. https://en.wikipedia.org/wiki/Tree_(data_structure)
* 18. https://stackoverflow.com/questions/12373495/relationship-between-bfs-and-topological-sort
* 19. https://stackoverflow.com/questions/30869987/topological-order-using-bfs
* 20. https://stackoverflow.com/questions/25229624/using-bfs-for-topological-sort
* 21. <Advanced Topics in Java> $ 3.13 Arrays vs. Linked Lists

*/

/* Notes

 1. Application of the depth-first search in finding connected components.[13]
	In a forest, every component is a tree. [14]

 2. "Reverse postordering produces a topological sorting of any directed acyclic graph." [15]

 3. Topological sort can be done using both a DFS(having edges reversed) and also using a queue. [18]

 4. "With the algorithm you proposed, node D would come before node C, which is clearly not a topological order.
	You really have to use DFS." [19]

 5. "Kahn's algorithm works with any graph traversal, including BFS or DFS. Tarjan's algorithm,
	 which is now the most well known, uses a "reverse DFS postorder" traversal of the graph.
	 Postorder means you add a node to the list after visiting its children.
	 Since you don't keep track of this when you conduct BFS (instead, you just append to a queue),
	 you need to use DFS for Tarjan's algorithm." [20]

*/

/* Further reading

1. 3.1.1 Tree-based matching (https://web.archive.org/web/20230404084740/https://si2.epfl.ch/~demichel/publications/archive/1991/ACTRSA91pg580.pdf)
2. Tree matching (https://web.archive.org/web/20230404083129/https://ocw.snu.ac.kr/sites/default/files/NOTE/1741.pdf)

*/
