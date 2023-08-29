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

	/*    C++ compiler automatically arranges the array in memory as unknown rows and 2 columns.

	const char* dictionary[][2] = {

		pointer, pointer
		pointer, pointer
		   :   ,   :
		   :   ,   :

	}

	*/


	cout << dictionary[0][0] << endl;
	cout << *dictionary[0][0] << endl;
	cout << *dictionary[0][1] << endl;



	cout << dictionary[2][0] << endl;
	cout << *dictionary[2][0] << endl;
	// In C++, using the name of an array without an index generates a pointer to the first element in the 
    // array.
}