#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char* dictionary[][52] = { "Pencil", "A writing instrument"};

	char word[80];

	cout << "Enter word: ";

	cin >> word;

	for (int i = 0; *dictionary[i][0]; i++) {

		if (!strcmp(dictionary[i][0], word)) {
			cout << dictionary[i] << endl;

			break;
		} else
			cout << "Not found. " << endl;
	}



}