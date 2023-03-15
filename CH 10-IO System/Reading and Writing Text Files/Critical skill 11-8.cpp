// Write to file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream stream("test");

	if (!stream) {

		cout << "Cannot open file. \n";

		return 1;
	}



}