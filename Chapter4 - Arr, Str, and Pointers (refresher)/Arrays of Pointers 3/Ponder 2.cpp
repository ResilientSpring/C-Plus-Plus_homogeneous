// Use a 2-D array of pointers to create a dictionary.

#include <iostream>
using namespace std;

int main() {

	// The general form of a multi-dimensional array declaration is: type name[size][size];
	const char* dictionary[][2] = {

		"pencil", "A writing instrument.",
		"keyboard", "An input device.",
		"rifle", "A shoulder-fired firearm.",
		"airplane", "A fixed-wing aircraft.",
		"network", "An interconnected group of computers.",
		"", ""

	};

	/*
	
	const char* dictionary[][2] = {
	
	    pointer, pointer
	    pointer, pointer
	       :   ,   :
		   :   ,   :

	}
	
	*/



	char word[80];
	int i;
	cout << "Enter word: ";
	cin >> word;

	for (i = 0; *dictionary[i][0]; i++) {
		if (!strcmp(dictionary[i][0], word)) {

			cout << dictionary[i][1] << endl;

			break; // When the break statement is encountered inside a loop, the loop is immediately terminated, 
				   // and program control resumes at the next statement following the loop.
		}
	}

	if (!*dictionary[i][0])
		cout << word << " not found. " << endl;
}