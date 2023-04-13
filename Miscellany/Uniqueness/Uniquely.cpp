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

	cout << endl;


	Show_last_five_elements_("The last five elements of the list are: \n", elements);

	cout << endl;

	Show_the_first_five_elements_("The first five elements of the list are: \n", elements);

	cout << endl << endl;

	cout << "The size of the list is: " << elements.size() << ". \n";

	elements.unique();

	cout << "\nThe size of unique elements in the list is " << elements.size() << endl;

	cout << endl;

	elements.sort();

	elements.unique();  // [Note1] [Note2]

	cout << "\nThe size of unique elements in the list is " << elements.size() << endl;

	cout << endl;

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


/* Notes:

1. "list::unique() is an inbuilt function in C++ STL which removes all duplicate consecutive 
   elements from the list. It works only on sorted list." [1]

2. "Notice that an element is only removed from the list container if it compares equal to 
   the element immediately preceding it. 
   Thus, this function is especially useful for sorted lists." [2]

*/

/* References:

1. https://www.geeksforgeeks.org/list-unique-in-c-stl/

2. https://cplusplus.com/reference/list/list/unique/

*/