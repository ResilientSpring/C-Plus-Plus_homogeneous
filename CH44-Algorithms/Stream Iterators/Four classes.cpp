// Use istream_iterator and ostream_iterator to read from cin and write to cout.

#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int main() {

	unsigned i;
	double d;
	string str;
	vector<int> vi;
	vector<double> vd;
	vector<string> vs;

	// Use istream_iterator to read from cin.


	// Create an input stream iterator for int.
	cout << "Enter some integers, enter 0 to stop. \n";
	istream_iterator<int> int_itr(cin);
	do
	{
		i = *int_itr;

		if (i != 0)
		{
			vi.push_back(i);
			int_itr++;
		}

	} while (i != 0);


	// Create an input stream iterators from doubles.
	cout << "Enter some doubles, enter 0 to stop. \n";
	istream_iterator<double> double_itr(cin);
	do
	{
		i = *double_itr;

		if (i != 0.0)
		{
			vd.push_back(i);
			double_itr++;
		}

	} while (i != 0.0);


	// Create an input stream iterator for string.
	cout << "Enter some strings, enter \"quit\" to stop. \n";
	istream_iterator<string> string_itr(cin);
	do
	{
		str = *string_itr;

		if (str != "quit")
		{
			vs.push_back(str);
			string_itr++;
		}

	} while (str != "quit");

	cout << endl;

	cout << "Here is what you entered: \n";
	for (i = 0; i < vi.size(); i++)
		cout << vi[i] << " ";

	cout << endl;

	for (i = 0; i < vd.size(); i++)
		cout << vd[i] << " ";

	cout << endl;
	
	for (i = 0; i < vs.size(); i++)
		cout << vs[i] << " ";

	cout << endl;


	// Now, use ostream_iterator to write cout.

	// Create an output iterator for string.
	ostream_iterator<string> output_string_itr(cout);
	
	*output_string_itr = "\n";
	*output_string_itr = string("\nThis is a string\n");
	*output_string_itr = "This is too.\n";
}