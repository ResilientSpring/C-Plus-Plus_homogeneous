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

void read(string aag);
void Depth_First_Search(int v, bool *visited, stack<int> &Stack);
void Topological_sort(stack<int> &Stack);
void Topological_sort_2(stack<int> &Stack);
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
// list<int> *inverse_adjacency_list_of_network;  It doesn't resolve the problem that inverse_adjacency_list_of_network[474]'s size = infinity.

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


int main() {


	string input_aag = "alu4.aag";
	read(input_aag);

	K = 4;
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

	/* Previously, Exception thrown: read access violation.
	was because the maximum number that represents inputs, latches, outputs, or AND-gates
	are in fact much larger than "total_number_of_nodes".
	*/

	//	adjacency_list_of_network = new list<int>[total_number_of_nodes + 1];
	//	inverse_adjacency_list_of_network = new list<int>[total_number_of_nodes + 1];


		/* "All numbers that represent inputs, latches, outputs or AND-gates need to be not greater
		   than 2M + 1" [22]
		*/

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

	Queue.push(v);

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
	bool *visited = new bool[total_number_of_nodes];

	for (int i = 0; i < total_number_of_nodes; i++)
		visited[i] = false;

	for (int i = 0; i < total_number_of_nodes; i++)
		if (visited[i] == false)
			Depth_First_Search(i, visited, Stack);
}


void Topological_sort_2(stack<int> &Stack) {   // [12][3] [Note2]

	// Mark all vertices as not visited.
	bool *visited = new bool[total_number_of_nodes + 1.0];

	for (int i = 0; i <= total_number_of_nodes; i++)
		visited[i] = false;

	for (int i = 1; i <= total_number_of_nodes; i++)
		if (visited[i] == false)
			Depth_First_Search(i, visited, Stack);
}


// Topological srot starting from primary outputs to primary inputs.
void converse_topological_sort(int node, queue<int> tree_sort_order, vector<int> *tree_inv) {

	bool *visited = new bool[total_number_of_nodes];

	for (int i = 0; i < total_number_of_nodes; i++)
		visited[i] = false;


	Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1] [Note3] [Note4]

	trees_inverse.push_back(tree_inv);
	topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);


	inverse_adjacency_list_of_network[node].clear();
}

// Topological srot starting from primary outputs to primary inputs.
void converse_topological_sort_2(int node, queue<int> tree_sort_order, vector<int> *tree_inv) {

	bool *visited = new bool[total_number_of_nodes + 1.0];

	for (int i = 0; i <= total_number_of_nodes; i++)
		visited[i] = false;


	Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1] [Note3] [Note4]

	trees_inverse.push_back(tree_inv);
	topologically_sorted_nodes_in_a_tree.push_back(tree_sort_order);


	inverse_adjacency_list_of_network[node].clear();
}


// Identifying the nodes within the DAG that have an out-degree greater than one, and using 
// these nodes as 'breaking points'. [16]
void dismantle_forest_to_trees(stack<int> &Stack) {

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
		tree_inv = new vector<int>[total_number_of_nodes];

		queue<int> tree_sort_order;


		// Topological srot starting from primary outputs to primary inputs.
		bool *visited = new bool[total_number_of_nodes];

		for (int i = 0; i < total_number_of_nodes; i++)
			visited[i] = false;

		Inverse_Depth_First_Search(node, visited, tree_sort_order, tree_inv); // [Note1]

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
		vector<int> *tree_inv = new vector<int>[total_number_of_nodes + 1];

		queue<int> tree_sort_order;

		// Topological srot starting from primary outputs to primary inputs.
		bool *visited = new bool[total_number_of_nodes + 1];

		for (int i = 0; i <= total_number_of_nodes; i++)
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
		tree_inv = new vector<int>[total_number_of_nodes];

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
		vector<int> *tree_inv = new vector<int>[total_number_of_nodes + 1];

		queue<int> tree_sort_order;

		// Topological srot starting from primary outputs to primary inputs.
		converse_topological_sort_2(node, tree_sort_order, tree_inv);
	}

}


void mapper() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table *LUTs = new Look_Up_Table[total_number_of_nodes];


		for (int i = 0; i < total_number_of_nodes; i++) {

			//  C++ syntactic rule bans specifying an initializer when dynamically allocating arrays. 
			//	LUTs[i] = NULL; 

		}

	}
}


void mapper1() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table **LUTs = new Look_Up_Table * [total_number_of_nodes];


		for (int i = 0; i < total_number_of_nodes; i++)
			LUTs[i] = NULL;


		queue<int> Queue = topologically_sorted_nodes_in_a_tree[i];
		//		queue<int> *Queue = &trees_topologically_sorted[i];
		vector<int> *tree_inv = trees_inverse[i];  // tree_inv is declared as an array of int vector (trees).
//		vector<int> tree_inverted = trees_inverse[i];

		while (!Queue.empty())
		{
			int node = Queue.front();  // A tree's first node (b/c queue follows FIFO) in topological order.
			Queue.pop();

			if (tree_inv[node].empty())
			{

			}

		}
	}
}


void mapper2() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table *LUTs = new Look_Up_Table[total_number_of_nodes + 1];


	}
}


void mapper3() {

	// Broken down the forest into several trees.
	int number_of_trees = trees_inverse.size();

	for (int i = 0; i < number_of_trees; i++)
	{

		Look_Up_Table **LUTs = new Look_Up_Table * [total_number_of_nodes + 1];


		for (int i = 0; i <= total_number_of_nodes; i++)
			LUTs[i] = NULL;


		queue<int> Queue = topologically_sorted_nodes_in_a_tree[i];
		//		queue<int> *Queue = &trees_topologically_sorted[i];
		vector<int> *tree_inv = trees_inverse[i];

		while (Queue.empty() == true)
		{
			int node = Queue.front();
			Queue.pop();
		}
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
* 22. https://web.archive.org/web/20220710064154/https://arxiv.org/pdf/1405.5793.pdf

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
