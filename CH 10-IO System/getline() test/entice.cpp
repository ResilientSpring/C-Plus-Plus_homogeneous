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


	ofstream output_stream2("get.txt");

	if (!output_stream2) {

		cout << "Failed to associate the stream with your file.";
		
		return 1;
	}


	while (input_stream) {

		// get() reads a character from stream and puts that character in ch.
		input_stream.get(ch);

		output_stream2 << ch;

	}

	ofstream output_stream3("getline.txt");

	if (!output_stream3) {
		cout << "Tried to associate stream with your file but it didn't succeed.";

		return 1;
	}

	while (input_stream)
	{
		//	input_stream.getline(vector_of_char, 1000);

		input_stream.getline(str, 998);

		output_stream3 << str;
		
	}

	while (input_stream)
	{
		// input_stream.getline(str);
	}

}