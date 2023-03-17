#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream output_stream("enticement.txt");

	if (!output_stream) {

		cout << "Cannot associate the stream with the designated file.";

		return 1;

	}

	output_stream << "Spending quality time with family is intangibly valuable." << endl;
	output_stream << "Those choosing to donate may similarly benefit intangibly." << endl;
	output_stream << "\n They are rewarded, tangibly or intangibly, for their efforts. \n";


	ifstream input_stream("enticement.txt");

	if (input_stream) {

	}
}