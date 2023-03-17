#include <iostream>
#include <fstream>
using namespace std;

int main() {

	char ch;

	ofstream output_stream("enticement.txt");

	if (!output_stream) {

		cout << "Cannot associate the stream with the designated file.";

		return 1;

	}

	output_stream << "Spending quality time with family is intangibly valuable." << endl;
	output_stream << "Those choosing to donate may similarly benefit intangibly." << endl;
	output_stream << "\n They are rewarded, tangibly or intangibly, for their efforts. \n";


	ifstream input_stream("enticement.txt");

	if (!input_stream) {

		cout << "Failed to associate the stream with your file.";

		return 1;

	}


	ofstream output_stream2("Comparison.txt");

	if (output_stream2) {

		cout << "Failed to associate the stream with your file.";
		
		return 1;
	}


	while (input_stream) {

		// get() reads a character from stream and puts that character in ch.
		input_stream.get(ch);

		output_stream2 << ch;

	}


}