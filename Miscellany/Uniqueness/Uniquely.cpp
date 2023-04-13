#include <iostream>
#include <sstream>
#include <fstream>
#include <list>
using namespace std;

void Show_last_five_elements_(const char *message, list<int> lst);
void Show_the_first_five_elements_(const char *message, list<int> lst);

int main() {

	string title;
	int max_variable_index, num_pi, num_latch, num_po, num_AND;

	ifstream input_stream;

	input_stream.open("alu4.aag");

	if (!input_stream)
		cout << "File cannot be opened." << endl;
	else
		cout << "File opened successfully." << endl;


	input_stream >> title >> max_variable_index >> num_pi >> num_latch >> num_po >> num_AND;

	list<int> elements;

	int temp;

	while (input_stream >> temp)
	{
		elements.push_back(temp);
	}

	input_stream.close();


	Show_last_five_elements_("The last five elements of the list are: \n", elements);

	Show_the_first_five_elements_("The first five elements of the list are: \n", elements);


	elements.unique();

	cout << "\nThe size of unique elements in the list is " << elements.size() << endl;

}

void Show_last_five_elements_(const char *message, list<int> lst) {

	cout << message;

	list<int>::reverse_iterator ritr;

	int counter = 0;

	for (ritr = lst.rbegin(); ritr != lst.rend(); ritr++) {

		cout << *ritr << " ";

		counter++;

		if (counter > 5) break;
	}
		

	cout << endl;

}

void Show_the_first_five_elements_(const char *message, list<int> lst) {

	cout << message;

	list<int>::iterator itr;

	int counter = 0;

	for (itr = lst.begin(); itr != lst.end(); itr++) {

		cout << *itr << " ";

		counter++;

		if (counter > 5) break;
	}

}