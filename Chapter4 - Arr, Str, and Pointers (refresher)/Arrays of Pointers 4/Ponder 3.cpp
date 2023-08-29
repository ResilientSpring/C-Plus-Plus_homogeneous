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

}