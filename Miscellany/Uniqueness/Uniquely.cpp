#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

int main() {

	string title;
	int max_variable_index, num_pi, num_latch, num_po, num_AND;

	ifstream input_stream;

	input_stream.open("alu4.aag");

	if (!input_stream)
		cout << "File cannot be opened." << endl;
	else
		cout << "File opened successfully." << endl;


	input_stream >> title >> max_variable_index >> num_pi >> num_latch >> num_po >> num_AND;

	list<int> elements;

	int temp;

	while (input_stream >> temp)
	{
		elements.push_back(temp);
	}

}