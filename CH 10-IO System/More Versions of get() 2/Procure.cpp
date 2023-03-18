#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char str[80];
	
	ifstream input_stream("getline.txt");

	if (!input_stream) {
		cout << "Tried to associate stream with your file but it didn't succeed.";

		return 1;
	}

	input_stream >> str;

	cout << str;
}