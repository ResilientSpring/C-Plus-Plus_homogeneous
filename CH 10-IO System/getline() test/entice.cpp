#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream output_stream("enticement.txt");

	if (!output_stream) {

		cout << "Cannot associate the stream with the designated file.";

		return 1;

	}

}