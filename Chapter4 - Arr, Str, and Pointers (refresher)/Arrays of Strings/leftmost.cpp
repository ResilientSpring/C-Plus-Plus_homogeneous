// A simple computerized telephone directory.
#include <cstdio>
#include <iostream>
using namespace std;

int main() {

	char str_array[30][80];

	int i;
	char str[80];
	char numbers[10][80] = {   // This is an array of 10 strings, each capable of holding up to 79 characters.

		"Tom",
		"555-3322",
		"Mary",
		"555-8976",
		"Jon",
		"555-1037",
		"Rachel",
		"555-1400",
		"Sherry",
		"555-8873"
	};


	cout << "Enter name: ";
	cin >> str;

	for(i = 0; i < 10; i += 2)
		if (!strcmp(str, numbers[i])) {

			cout << "Number is " << numbers[i + 1] << endl;

			break;
		}

	if (i == 10) cout << "Not foound." << endl;
}