#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {

	char ch;

	vector<char> vector_of_char;

	char str[999];

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


	ofstream output_stream2("getline.txt");

	if (!output_stream2) {

		cout << "Failed to associate the stream with your file.";

		return 1;
	}


	while (input_stream) {

		input_stream.getline(str, 999, EOF);

		output_stream2 << str;
	}
}