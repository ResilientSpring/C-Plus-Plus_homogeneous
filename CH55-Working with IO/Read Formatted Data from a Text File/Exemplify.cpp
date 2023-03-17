#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	int i, n;

	double d;

	string str;

	// Create an ifstream object and attempt to associate stream with (open) the file test.dat
	ifstream input_stream("test.dat");
	
	if (!input_stream) {

		cout << "Cannot open the file. " << endl;
		
		return 1;
	}

	input_stream >> i;

	input_stream >> n;

	input_stream >> d;

	input_stream >> str;

	cout << i << " " << n << " " << d << endl;
	cout << str;

}