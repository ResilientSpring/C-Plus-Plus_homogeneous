// Use a 2-D array of pointers to create a dictionary.

#include <iostream>
using namespace std;

int main() {

	const char *dictionary[][2] = {

		"pencil", "A writing instrument.",
		"keyboard", "An input device.",
		"rifle", "A shoulder-fired firearm.",
		"airplane", "A fixed-wing aircraft.",
		"network", "An interconnected group of computers.",
		"", ""
	
	};

	char word[80];
	int i;
	cout << "Enter word: ";
	cin >> word;

	for (i = 0; *dictionary[i][0]; i++) {

	}
}