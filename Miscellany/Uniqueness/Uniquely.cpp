#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

int main() {

	ifstream input_stream;

	input_stream.open("alu4.aag");

	if (!input_stream)
		cout << "File cannot be opened." << endl;
	else
		cout << "File opened successfully." << endl;

	string line;

	while (getline())
	{

	}

}